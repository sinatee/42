*This project has been created as part of the 42 curriculum by sisupapi.*

# ft_printf

## Description

The goal of this project is to recreate the standard `printf`

### Supported Conversions
* `%c` - Single character
* `%s` - String
* `%p` - Pointer address
* `%d` / `%i` - Signed decimal integer
* `%u` - Unsigned decimal integer
* `%x` / `%X` - Unsigned hexadecimal (lowercase / uppercase)
* `%%` - Percent sign

## Instructions

### 1. Download & Build
```bash
git clone [https://github.com/sisupapi/ft_printf.git](https://github.com/sisupapi/ft_printf.git)
cd ft_printf
make
```

### 2. Makefile Rules

* `make` — Compiles `libftprintf.a`.
* `make clean` — Removes object files (`.o`).
* `make fclean` — Removes object files and `libftprintf.a`.
* `make re` — Rebuilds from scratch.

### 3. Usage Example

```main.c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Value: %d\n", "42", 42);
    return (0);
}

```

```bash
cc main.c libftprintf.a -o main
./main

```

## Resources

### References

* `man 3 printf` & `man 3 stdarg`
* https://youtu.be/S-ak715zIIE?si=zgWKQqmlEwiKiI6N

### how AI was used

1. Explain how the original C `printf` works and handles specifiers.
2. Fix an uninitialized `count` variable bug in `print_hex.c` that caused garbage value returns.
