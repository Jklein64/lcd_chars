# LCD Chars

7px by 5px character bitsets for digital emulation of a small two-line LCD screen. I wasn't able to find a proper font or source code for something like this, so wrote a script to extract it from [this table](https://mil.ufl.edu/4744/docs/lcdmanual/characterset.html).

## Usage

Include the `characters.h` file in your project, either via copy-paste, cloning this repository as a [git submodule](https://git-scm.com/book/en/v2/Git-Tools-Submodules), or adding it to a CMake project with [FetchContent](https://cmake.org/cmake/help/latest/module/FetchContent.html) (link against target `lcd_chars`). Then convert from ASCII characters like so:

```cpp
#include "lcd_chars/characters.h"

// ... other code ...

char ch = 'A';
// ch must be ascii after the space character (32)
auto character = Character::fromAscii(ch);
// iterate through character bitset
for (int i = 0; i < Character::CHAR_ROWS; i++) {
    for (int j = 0; j < Character::CHAR_COLS; j++) {
        // character.data is an array of bitsets
        bool enabled = character.data[i][j];
    }
}
```
