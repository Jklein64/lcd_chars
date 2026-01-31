#include <iostream>

#include "characters.h"

static constexpr auto GRID_W = 6 * 16 - 1;
static constexpr auto GRID_H = 8 * 2 + 1;

void write(std::vector<char> &grid, Character ch, size_t row, size_t col) {
  for (int i = 0; i < Character::CHAR_ROWS; i++) {
    for (int j = 0; j < Character::CHAR_COLS; j++) {
      char value = ch.data[i][j] ? '#' : '.';
      grid[(row + i) * GRID_W + col + j] = value;
    }
  }
}

int main(const int argc, const char *argv[]) {
  if (argc != 2) {
    std::cerr << "Expected exactly one string argument." << std::endl;
  } else {
    const char *str = argv[1];
    std::vector<char> grid(GRID_W * GRID_H, ' ');
    size_t col = 0, row = 0;
    for (int i = 0; str[i] != '\0'; i++) {
      auto ch = Character::fromAscii(str[i]);
      write(grid, ch, row, col);
      col += 6;
      if (col >= GRID_W) {
        col = 0;
        row += 8;
      }
    }
    // Print the grid
    for (int i = 0; i < GRID_H; i++) {
      for (int j = 0; j < GRID_W; j++) {
        std::cout << grid[i * GRID_W + j];
      }
      std::cout << std::endl;
    }
  }
}
