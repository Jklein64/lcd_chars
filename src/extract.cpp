#include <fstream>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "characters.h"

struct Image {
  int w, h, n;
  unsigned char *data;

  Image() { data = stbi_load("res/characters.png", &w, &h, &n, 0); }
  ~Image() { stbi_image_free(data); }

  Character readCharacter(int row, int col) {
    Character ch;
    // Hardcoded grid sizing
    int top = 1 + 50 * row;
    int left = 6 + 35 * col;
    // Extract character data
    for (int i = 0; i < Character::CHAR_ROWS; i++) {
      for (int j = 0; j < Character::CHAR_COLS; j++) {
        int pixelRow = top + 5 * i;
        int pixelCol = left + 5 * j;
        // Mark black pixels with 1 and empty pixels with 0
        ch.data[i][j] = data[pixelRow * w + pixelCol] < 128;
      }
    }
    // Row and col are related to the ascii code
    ch.ascii = (col + 2) << 4 | row;
    return ch;
  }
};

int main() {
  auto img = Image();
  // Write to characters.h
  std::ofstream stream("include/characters.h");
  if (stream.is_open()) {
    stream << "#pragma once" << std::endl;
    stream << R"(
#include <assert.h>
#include <bitset>

struct Character {
  static constexpr auto CHAR_ROWS = 7;
  static constexpr auto CHAR_COLS = 5;

  static Character fromAscii(char ch);

  char ascii;
  std::array<std::bitset<CHAR_COLS>, CHAR_ROWS> data;
};
)";
    stream << std::endl
           << "static constexpr std::array<Character, 96> chars = {"
           << std::endl;
    for (int j = 0; j < 6; j++) {
      for (int i = 0; i < 16; i++) {
        stream << "    " << "Character{" << std::endl;
        auto ch = img.readCharacter(i, j);
        stream << "        " << ".ascii = '";
        // Escape single quotes and escapes
        if (ch.ascii == '\'') {
          stream << "\\'";
        } else if (ch.ascii == '\\') {
          stream << "\\\\";
        } else {
          stream << ch.ascii;
        }
        stream << "'," << std::endl
               << "        " << ".data =" << std::endl
               << "            {" << std::endl;
        for (auto &row : ch.data) {
          stream << "                0b" << row << "," << std::endl;
        }
        stream << "            }," << std::endl;
        stream << "    " << "}," << std::endl;
      }
    }
    stream << "};" << std::endl;
    // Implement Character::fromAscii
    stream << R"(
inline Character Character::fromAscii(char ch) {
  assert(32 <= ch);
  int row = ch & 0b00001111;
  int col = ((ch >> 4) & 0b00001111) - 0b0010;
  return chars[row + col * 16];
}
)";
    stream.close();
  } else {
    exit(1);
  }
}
