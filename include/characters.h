#pragma once

#include <array>
#include <assert.h>
#include <bitset>

struct Character {
  static constexpr auto CHAR_ROWS = 7;
  static constexpr auto CHAR_COLS = 5;

  static Character fromAscii(char ch);

  char ascii;
  std::array<std::bitset<CHAR_COLS>, CHAR_ROWS> data;
};

static constexpr std::array<Character, 96> chars = {
    Character{
        .ascii = ' ',
        .data =
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
            },
    },
    Character{
        .ascii = '!',
        .data =
            {
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00000,
                0b00000,
                0b00100,
            },
    },
    Character{
        .ascii = '"',
        .data =
            {
                0b01010,
                0b01010,
                0b01010,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
            },
    },
    Character{
        .ascii = '#',
        .data =
            {
                0b01010,
                0b01010,
                0b11111,
                0b01010,
                0b11111,
                0b01010,
                0b01010,
            },
    },
    Character{
        .ascii = '$',
        .data =
            {
                0b00100,
                0b11110,
                0b00101,
                0b01110,
                0b10100,
                0b01111,
                0b00100,
            },
    },
    Character{
        .ascii = '%',
        .data =
            {
                0b00011,
                0b10011,
                0b01000,
                0b00100,
                0b00010,
                0b11001,
                0b11000,
            },
    },
    Character{
        .ascii = '&',
        .data =
            {
                0b00110,
                0b01001,
                0b00101,
                0b00010,
                0b10101,
                0b01001,
                0b10110,
            },
    },
    Character{
        .ascii = '\'',
        .data =
            {
                0b00110,
                0b00100,
                0b00010,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
            },
    },
    Character{
        .ascii = '(',
        .data =
            {
                0b01000,
                0b00100,
                0b00010,
                0b00010,
                0b00010,
                0b00100,
                0b01000,
            },
    },
    Character{
        .ascii = ')',
        .data =
            {
                0b00010,
                0b00100,
                0b01000,
                0b01000,
                0b01000,
                0b00100,
                0b00010,
            },
    },
    Character{
        .ascii = '*',
        .data =
            {
                0b00000,
                0b00100,
                0b10101,
                0b01110,
                0b10101,
                0b00100,
                0b00000,
            },
    },
    Character{
        .ascii = '+',
        .data =
            {
                0b00000,
                0b00100,
                0b00100,
                0b11111,
                0b00100,
                0b00100,
                0b00000,
            },
    },
    Character{
        .ascii = ',',
        .data =
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00110,
                0b00100,
                0b00010,
            },
    },
    Character{
        .ascii = '-',
        .data =
            {
                0b00000,
                0b00000,
                0b00000,
                0b11111,
                0b00000,
                0b00000,
                0b00000,
            },
    },
    Character{
        .ascii = '.',
        .data =
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00110,
                0b00110,
            },
    },
    Character{
        .ascii = '/',
        .data =
            {
                0b00000,
                0b10000,
                0b01000,
                0b00100,
                0b00010,
                0b00001,
                0b00000,
            },
    },
    Character{
        .ascii = '0',
        .data =
            {
                0b01110,
                0b10001,
                0b11001,
                0b10101,
                0b10011,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = '1',
        .data =
            {
                0b00100,
                0b00110,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b01110,
            },
    },
    Character{
        .ascii = '2',
        .data =
            {
                0b01110,
                0b10001,
                0b10000,
                0b01000,
                0b00100,
                0b00010,
                0b11111,
            },
    },
    Character{
        .ascii = '3',
        .data =
            {
                0b11111,
                0b01000,
                0b00100,
                0b01000,
                0b10000,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = '4',
        .data =
            {
                0b01000,
                0b01100,
                0b01010,
                0b01001,
                0b11111,
                0b01000,
                0b01000,
            },
    },
    Character{
        .ascii = '5',
        .data =
            {
                0b11111,
                0b00001,
                0b01111,
                0b10000,
                0b10000,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = '6',
        .data =
            {
                0b01100,
                0b00010,
                0b00001,
                0b01111,
                0b10001,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = '7',
        .data =
            {
                0b11111,
                0b10000,
                0b01000,
                0b00100,
                0b00010,
                0b00010,
                0b00010,
            },
    },
    Character{
        .ascii = '8',
        .data =
            {
                0b01110,
                0b10001,
                0b10001,
                0b01110,
                0b10001,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = '9',
        .data =
            {
                0b01110,
                0b10001,
                0b10001,
                0b11110,
                0b10000,
                0b01000,
                0b00110,
            },
    },
    Character{
        .ascii = ':',
        .data =
            {
                0b00000,
                0b00110,
                0b00110,
                0b00000,
                0b00110,
                0b00110,
                0b00000,
            },
    },
    Character{
        .ascii = ';',
        .data =
            {
                0b00000,
                0b00110,
                0b00110,
                0b00000,
                0b00110,
                0b00100,
                0b00010,
            },
    },
    Character{
        .ascii = '<',
        .data =
            {
                0b01000,
                0b00100,
                0b00010,
                0b00001,
                0b00010,
                0b00100,
                0b01000,
            },
    },
    Character{
        .ascii = '=',
        .data =
            {
                0b00000,
                0b00000,
                0b11111,
                0b00000,
                0b11111,
                0b00000,
                0b00000,
            },
    },
    Character{
        .ascii = '>',
        .data =
            {
                0b00010,
                0b00100,
                0b01000,
                0b10000,
                0b01000,
                0b00100,
                0b00010,
            },
    },
    Character{
        .ascii = '?',
        .data =
            {
                0b01110,
                0b10001,
                0b10000,
                0b01000,
                0b00100,
                0b00000,
                0b00100,
            },
    },
    Character{
        .ascii = '@',
        .data =
            {
                0b01110,
                0b10001,
                0b10000,
                0b10110,
                0b10101,
                0b10101,
                0b01110,
            },
    },
    Character{
        .ascii = 'A',
        .data =
            {
                0b01110,
                0b10001,
                0b10001,
                0b10001,
                0b11111,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'B',
        .data =
            {
                0b01111,
                0b10001,
                0b10001,
                0b01111,
                0b10001,
                0b10001,
                0b01111,
            },
    },
    Character{
        .ascii = 'C',
        .data =
            {
                0b01110,
                0b10001,
                0b00001,
                0b00001,
                0b00001,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = 'D',
        .data =
            {
                0b00111,
                0b01001,
                0b10001,
                0b10001,
                0b10001,
                0b01001,
                0b00111,
            },
    },
    Character{
        .ascii = 'E',
        .data =
            {
                0b11111,
                0b00001,
                0b00001,
                0b01111,
                0b00001,
                0b00001,
                0b11111,
            },
    },
    Character{
        .ascii = 'F',
        .data =
            {
                0b11111,
                0b00001,
                0b00001,
                0b01111,
                0b00001,
                0b00001,
                0b00001,
            },
    },
    Character{
        .ascii = 'G',
        .data =
            {
                0b01110,
                0b10001,
                0b00001,
                0b11101,
                0b10001,
                0b10001,
                0b11110,
            },
    },
    Character{
        .ascii = 'H',
        .data =
            {
                0b10001,
                0b10001,
                0b10001,
                0b11111,
                0b10001,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'I',
        .data =
            {
                0b01110,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b01110,
            },
    },
    Character{
        .ascii = 'J',
        .data =
            {
                0b11100,
                0b01000,
                0b01000,
                0b01000,
                0b01000,
                0b01001,
                0b00110,
            },
    },
    Character{
        .ascii = 'K',
        .data =
            {
                0b10001,
                0b01001,
                0b00101,
                0b00011,
                0b00101,
                0b01001,
                0b10001,
            },
    },
    Character{
        .ascii = 'L',
        .data =
            {
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b11111,
            },
    },
    Character{
        .ascii = 'M',
        .data =
            {
                0b10001,
                0b11011,
                0b10101,
                0b10101,
                0b10001,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'N',
        .data =
            {
                0b10001,
                0b10001,
                0b10011,
                0b10101,
                0b11001,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'O',
        .data =
            {
                0b01110,
                0b10001,
                0b10001,
                0b10001,
                0b10001,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = 'P',
        .data =
            {
                0b01111,
                0b10001,
                0b10001,
                0b01111,
                0b00001,
                0b00001,
                0b00001,
            },
    },
    Character{
        .ascii = 'Q',
        .data =
            {
                0b01110,
                0b10001,
                0b10001,
                0b10001,
                0b10101,
                0b01001,
                0b10110,
            },
    },
    Character{
        .ascii = 'R',
        .data =
            {
                0b01111,
                0b10001,
                0b10001,
                0b01111,
                0b00101,
                0b01001,
                0b10001,
            },
    },
    Character{
        .ascii = 'S',
        .data =
            {
                0b11110,
                0b00001,
                0b00001,
                0b01110,
                0b10000,
                0b10000,
                0b01111,
            },
    },
    Character{
        .ascii = 'T',
        .data =
            {
                0b11111,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
            },
    },
    Character{
        .ascii = 'U',
        .data =
            {
                0b10001,
                0b10001,
                0b10001,
                0b10001,
                0b10001,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = 'V',
        .data =
            {
                0b10001,
                0b10001,
                0b10001,
                0b10001,
                0b10001,
                0b01010,
                0b00100,
            },
    },
    Character{
        .ascii = 'W',
        .data =
            {
                0b10001,
                0b10001,
                0b10001,
                0b10101,
                0b10101,
                0b10101,
                0b01010,
            },
    },
    Character{
        .ascii = 'X',
        .data =
            {
                0b10001,
                0b10001,
                0b01010,
                0b00100,
                0b01010,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'Y',
        .data =
            {
                0b10001,
                0b10001,
                0b10001,
                0b01010,
                0b00100,
                0b00100,
                0b00100,
            },
    },
    Character{
        .ascii = 'Z',
        .data =
            {
                0b11111,
                0b10000,
                0b01000,
                0b00100,
                0b00010,
                0b00001,
                0b11111,
            },
    },
    Character{
        .ascii = '[',
        .data =
            {
                0b00111,
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00001,
                0b00111,
            },
    },
    Character{
        .ascii = '\\',
        .data =
            {
                0b10001,
                0b01010,
                0b11111,
                0b00100,
                0b11111,
                0b00100,
                0b00100,
            },
    },
    Character{
        .ascii = ']',
        .data =
            {
                0b01110,
                0b01000,
                0b01000,
                0b01000,
                0b01000,
                0b01000,
                0b01110,
            },
    },
    Character{
        .ascii = '^',
        .data =
            {
                0b00100,
                0b01010,
                0b10001,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
            },
    },
    Character{
        .ascii = '_',
        .data =
            {
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b11111,
            },
    },
    Character{
        .ascii = '`',
        .data =
            {
                0b00010,
                0b00100,
                0b01000,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
            },
    },
    Character{
        .ascii = 'a',
        .data =
            {
                0b00000,
                0b00000,
                0b01110,
                0b10000,
                0b11110,
                0b10001,
                0b11110,
            },
    },
    Character{
        .ascii = 'b',
        .data =
            {
                0b00001,
                0b00001,
                0b01101,
                0b10011,
                0b10001,
                0b10001,
                0b01111,
            },
    },
    Character{
        .ascii = 'c',
        .data =
            {
                0b00000,
                0b00000,
                0b01110,
                0b00001,
                0b00001,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = 'd',
        .data =
            {
                0b10000,
                0b10000,
                0b10110,
                0b11001,
                0b10001,
                0b10001,
                0b11110,
            },
    },
    Character{
        .ascii = 'e',
        .data =
            {
                0b00000,
                0b00000,
                0b01110,
                0b10001,
                0b11111,
                0b00001,
                0b01110,
            },
    },
    Character{
        .ascii = 'f',
        .data =
            {
                0b01100,
                0b10010,
                0b00010,
                0b00111,
                0b00010,
                0b00010,
                0b00010,
            },
    },
    Character{
        .ascii = 'g',
        .data =
            {
                0b00000,
                0b11110,
                0b10001,
                0b10001,
                0b11110,
                0b10000,
                0b01110,
            },
    },
    Character{
        .ascii = 'h',
        .data =
            {
                0b00001,
                0b00001,
                0b01101,
                0b10011,
                0b10001,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'i',
        .data =
            {
                0b00100,
                0b00000,
                0b00110,
                0b00100,
                0b00100,
                0b00100,
                0b01110,
            },
    },
    Character{
        .ascii = 'j',
        .data =
            {
                0b01000,
                0b00000,
                0b01100,
                0b01000,
                0b01000,
                0b01001,
                0b00110,
            },
    },
    Character{
        .ascii = 'k',
        .data =
            {
                0b00001,
                0b00001,
                0b01001,
                0b00101,
                0b00011,
                0b00101,
                0b01001,
            },
    },
    Character{
        .ascii = 'l',
        .data =
            {
                0b00110,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b01110,
            },
    },
    Character{
        .ascii = 'm',
        .data =
            {
                0b00000,
                0b00000,
                0b01011,
                0b10101,
                0b10101,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'n',
        .data =
            {
                0b00000,
                0b00000,
                0b01101,
                0b10011,
                0b10001,
                0b10001,
                0b10001,
            },
    },
    Character{
        .ascii = 'o',
        .data =
            {
                0b00000,
                0b00000,
                0b01110,
                0b10001,
                0b10001,
                0b10001,
                0b01110,
            },
    },
    Character{
        .ascii = 'p',
        .data =
            {
                0b00000,
                0b00000,
                0b01111,
                0b10001,
                0b01111,
                0b00001,
                0b00001,
            },
    },
    Character{
        .ascii = 'q',
        .data =
            {
                0b00000,
                0b00000,
                0b10110,
                0b11001,
                0b11110,
                0b10000,
                0b10000,
            },
    },
    Character{
        .ascii = 'r',
        .data =
            {
                0b00000,
                0b00000,
                0b01101,
                0b10011,
                0b00001,
                0b00001,
                0b00001,
            },
    },
    Character{
        .ascii = 's',
        .data =
            {
                0b00000,
                0b00000,
                0b01110,
                0b00001,
                0b01110,
                0b10000,
                0b01111,
            },
    },
    Character{
        .ascii = 't',
        .data =
            {
                0b00010,
                0b00010,
                0b00111,
                0b00010,
                0b00010,
                0b10010,
                0b01100,
            },
    },
    Character{
        .ascii = 'u',
        .data =
            {
                0b00000,
                0b00000,
                0b10001,
                0b10001,
                0b10001,
                0b11001,
                0b10110,
            },
    },
    Character{
        .ascii = 'v',
        .data =
            {
                0b00000,
                0b00000,
                0b10001,
                0b10001,
                0b10001,
                0b01010,
                0b00100,
            },
    },
    Character{
        .ascii = 'w',
        .data =
            {
                0b00000,
                0b00000,
                0b10001,
                0b10001,
                0b10101,
                0b10101,
                0b01010,
            },
    },
    Character{
        .ascii = 'x',
        .data =
            {
                0b00000,
                0b00000,
                0b10001,
                0b01010,
                0b00100,
                0b01010,
                0b10001,
            },
    },
    Character{
        .ascii = 'y',
        .data =
            {
                0b00000,
                0b00000,
                0b10001,
                0b10001,
                0b11110,
                0b10000,
                0b01110,
            },
    },
    Character{
        .ascii = 'z',
        .data =
            {
                0b00000,
                0b00000,
                0b11111,
                0b01000,
                0b00100,
                0b00010,
                0b11111,
            },
    },
    Character{
        .ascii = '{',
        .data =
            {
                0b01000,
                0b00100,
                0b00100,
                0b00010,
                0b00100,
                0b00100,
                0b01000,
            },
    },
    Character{
        .ascii = '|',
        .data =
            {
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
                0b00100,
            },
    },
    Character{
        .ascii = '}',
        .data =
            {
                0b00010,
                0b00100,
                0b00100,
                0b01000,
                0b00100,
                0b00100,
                0b00010,
            },
    },
    Character{
        .ascii = '~',
        .data =
            {
                0b00000,
                0b00100,
                0b01000,
                0b11111,
                0b01000,
                0b00100,
                0b00000,
            },
    },
    Character{
        .ascii = '',
        .data =
            {
                0b00000,
                0b00100,
                0b00010,
                0b11111,
                0b00010,
                0b00100,
                0b00000,
            },
    },
};

inline Character Character::fromAscii(char ch) {
  assert(32 <= ch);
  int row = ch & 0b00001111;
  int col = ((ch >> 4) & 0b00001111) - 0b0010;
  return chars[row + col * 16];
}
