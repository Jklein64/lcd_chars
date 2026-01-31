#include <bitset>

#include "stdio.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

struct Character {
  static constexpr auto CHAR_ROWS = 7;
  static constexpr auto CHAR_COLS = 5;

  char ascii = '\0';
  std::array<std::bitset<CHAR_COLS>, CHAR_ROWS> data;
};

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
        ch.data[i][j] = data[pixelRow * w + pixelCol] > 128;
      }
    }
    // Row and col are related to the ascii code
    ch.ascii = (col + 2) << 4 | row;
    return ch;
  }
};

int main() {
  auto img = Image();
  printf("Image height = %d, width = %d\n", img.h, img.w);
  auto ch = img.readCharacter(1, 1);
  printf("ch at (0, 1) is a '%c'\n", ch.ascii);
}
