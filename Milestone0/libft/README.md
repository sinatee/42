*This project has been created as part of the 42 curriculum by sisupapi.*

# Libft

## Description

**Libft** is a custom C library built from scratch as part of the 42 core curriculum.
It reimplements a set of essential functions from the standard C library (`libc`) and
adds extra utility functions that make everyday C programming easier — string
manipulation, memory management, number conversion, output helpers, and a small
linked-list toolkit.

The goal of this project is not just to have a working library, but to truly understand
how these classic functions behave under the hood (edge cases, memory handling,
undefined behavior) by writing them yourself. This library will be reused as a
foundation in later 42 projects.

The library is split into three parts:

- **Part 1 — Libc functions**: reimplementations of standard libc functions
  (e.g. `ft_strlen`, `ft_memcpy`, `ft_strchr`, `ft_atoi`, `ft_calloc`, `ft_strdup`, etc.)
  with the exact same prototype and behavior as their originals, prefixed with `ft_`.
- **Part 2 — Additional functions**: functions that don't exist in the libc, or exist
  in a different form (e.g. `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`,
  `ft_itoa`, `ft_strmapi`, `ft_striteri`, and the `ft_put*_fd` output helpers).
- **Part 3 — Linked list**: a minimal singly linked list implementation (`t_list`)
  with functions to create, add, iterate, map, and free nodes
  (`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`,
  `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).

## Library Overview

| File | Function | Description |
|---|---|---|
| `ft_isalpha.c` | `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit.c` | `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum.c` | `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii.c` | `ft_isascii` | Checks if a character is an ASCII code |
| `ft_isprint.c` | `ft_isprint` | Checks if a character is printable |
| `ft_strlen.c` | `ft_strlen` | Returns the length of a string |
| `ft_memset.c` | `ft_memset` | Fills memory with a constant byte |
| `ft_bzero.c` | `ft_bzero` | Zeroes out a memory area |
| `ft_memcpy.c` | `ft_memcpy` | Copies memory area |
| `ft_memmove.c` | `ft_memmove` | Copies memory area, handles overlap |
| `ft_strlcpy.c` | `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat.c` | `ft_strlcat` | Concatenates a string with size limit |
| `ft_toupper.c` | `ft_toupper` | Converts a character to uppercase |
| `ft_tolower.c` | `ft_tolower` | Converts a character to lowercase |
| `ft_strchr.c` | `ft_strchr` | Locates a character in a string |
| `ft_strrchr.c` | `ft_strrchr` | Locates the last occurrence of a character |
| `ft_strncmp.c` | `ft_strncmp` | Compares two strings up to n bytes |
| `ft_memchr.c` | `ft_memchr` | Locates a byte in memory |
| `ft_memcmp.c` | `ft_memcmp` | Compares memory areas |
| `ft_strnstr.c` | `ft_strnstr` | Locates a substring within n bytes |
| `ft_atoi.c` | `ft_atoi` | Converts a string to an integer |
| `ft_calloc.c` | `ft_calloc` | Allocates and zeroes memory |
| `ft_strdup.c` | `ft_strdup` | Duplicates a string |
| `ft_substr.c` | `ft_substr` | Extracts a substring from a string |
| `ft_strjoin.c` | `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim.c` | `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split.c` | `ft_split` | Splits a string into an array of strings |
| `ft_itoa.c` | `ft_itoa` | Converts an integer to a string |
| `ft_strmapi.c` | `ft_strmapi` | Applies a function to each char, returns new string |
| `ft_striteri.c` | `ft_striteri` | Applies a function to each char, in place |
| `ft_putchar_fd.c` | `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd.c` | `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd.c` | `ft_putendl_fd` | Outputs a string + newline to a file descriptor |
| `ft_putnbr_fd.c` | `ft_putnbr_fd` | Outputs an integer to a file descriptor |
| `ft_lstnew.c` | `ft_lstnew` | Creates a new linked list node |
| `ft_lstadd_front.c` | `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstadd_back.c` | `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstsize.c` | `ft_lstsize` | Counts the number of nodes in a list |
| `ft_lstlast.c` | `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone.c` | `ft_lstdelone` | Frees a single node and its content |
| `ft_lstclear.c` | `ft_lstclear` | Frees a node and all its successors |
| `ft_lstiter.c` | `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap.c` | `ft_lstmap` | Applies a function to each node, builds a new list |

The `t_list` structure (declared in `libft.h`) is used for Part 3:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

## Instructions

### Compilation

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

The Makefile compiles every `.c` file with `-Wall -Wextra -Werror` and archives the
resulting object files into `libft.a` using `ar`.

### Usage

Include the header in your project and link against the library:

```c
#include "libft.h"
```

```bash
cc your_files.c -L. -lft -I. -o your_program
```

Or, if you copy the `libft` folder into another project, build it first with its own
Makefile, then link `libft.a` when compiling the rest of the project.

## Resources

- [Libft subject (42 school)](https://cdn.intra.42.fr/pdf/pdf/module_libft.pdf) — official project subject
- [C Library reference — cppreference.com](https://en.cppreference.com/w/c)
- Linux man pages (`man 3 <function>`) for the exact behavior of each libc function
  (e.g. `man 3 strlcpy`, `man 3 memmove`, `man 3 calloc`)
- [BSD `<bsd/string.h>` documentation](https://man.openbsd.org/strlcpy.3) — used to
  verify `strlcpy`/`strlcat` behavior against the BSD reference implementation

### AI usage

AI assistance was used only in a supporting role: to help structure and
format this README file. All function implementations, the Makefile, and the logic
of the library were written and reasoned through independently, in line with 42's
guidelines on AI usage.