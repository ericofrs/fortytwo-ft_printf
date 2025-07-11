# ft_printf

<div align="right">
  <img src="https://img.shields.io/badge/Score-100-success?style=for-the-badge&logo=42" alt="42 Score"/>
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language"/>
  <img src="https://img.shields.io/badge/Norminette-OK-success?style=for-the-badge" alt="Norm"/>
</div>

## Overview

**ft_printf** is a custom implementation of the C standard library's `printf` function, developed as part of the 42 School curriculum. This project focuses on understanding variadic functions, format specifiers, and low-level string manipulation in C.
The function mimics the behavior of the original `printf`, supporting various format specifiers while maintaining the same return value and error handling.

> Note: This implementation covers only the **mandatory part** of the ft_printf project. Bonus features like flags, width, precision, and additional format specifiers are not implemented.

## Project Objectives

- Implement a custom `printf` function from scratch
- Master variadic functions using `va_list`, `va_start`, `va_arg`, and `va_end`
- Handle multiple format specifiers and conversions
- Manage memory efficiently and handle edge cases
- Follow 42 School coding standards (The Norm)

## Project Structure

```
ft_printf/
├── README.md
├── Makefile
├── ft_printf.h
├── ft_printf.c          # Main printf implementation
├── printers/            # Format specifier handlers
│   ├── ft_print_c.c     # Character printing
│   ├── ft_print_d.c     # Decimal/integer printing
│   ├── ft_print_p.c     # Pointer printing
│   ├── ft_print_s.c     # String printing
│   ├── ft_print_u.c     # Unsigned integer printing
│   └── ft_print_x.c     # Hexadecimal printing
├── utils/               # Utility functions
│   ├── ft_putchar.c     # Character output
│   ├── ft_puthex.c      # Hexadecimal utilities
│   ├── ft_putnbr.c      # Number output
│   ├── ft_putptr.c      # Pointer output
│   ├── ft_putstr.c      # String output
│   └── ft_putunbr.c     # Unsigned number output
└── .gitignore
```

## ⚙️ Supported Format Specifiers

| Specifier | Description | Type |
|-----------|-------------|------|
| `%c` | Single character | `char` |
| `%s` | String of characters | `char *` |
| `%d` | Signed decimal integer | `int` |
| `%i` | Signed decimal integer | `int` |
| `%u` | Unsigned decimal integer | `unsigned int` |
| `%x` | Hexadecimal (lowercase) | `unsigned int` |
| `%X` | Hexadecimal (uppercase) | `unsigned int` |
| `%p` | Pointer address | `void *` |
| `%%` | Literal percent sign | N/A |

## Usage

### Compilation

```bash
# Compile the library
make
```

### Basic Examples

```c
#include "ft_printf.h"

int main(void)
{
    // Basic usage
    ft_printf("Hello, %s!\n", "World");
    
    // Multiple format specifiers
    ft_printf("Number: %d, Hex: %x, Char: %c\n", 42, 255, 'A');
    
    // Pointer printing
    int x = 42;
    ft_printf("Address of x: %p\n", &x);
    
    // Return value (number of characters printed)
    int count = ft_printf("Testing: %d%%\n", 100);
    ft_printf("Characters printed: %d\n", count);
    
    return (0);
}
```

## Implementation Details

### Core Function
The main `ft_printf` function processes the format string character by character, identifying format specifiers and delegating to appropriate handler functions.

### Memory Management
- No dynamic memory allocation used
- Efficient character-by-character processing
- Proper cleanup of variadic arguments

### Error Handling
- Returns -1 on write errors
- Handles NULL pointers gracefully
- Validates format specifiers

## Makefile Rules

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

## Testing

The project has been thoroughly tested using popular 42 community testers:

[Tripouille/printfTester] (https://github.com/Tripouille/printfTester) - Comprehensive testing suite
[ejacquem/printfBetterTester] (https://github.com/ejacquem/printfBetterTester) - Enhanced testing with additional edge cases

Testing covers:

- All mandatory format specifiers
- Edge cases (NULL pointers, empty strings)
- Return value accuracy
- Memory leaks (using valgrind)
- Comparison with original printf behavior

## 42 School Standards

This project adheres to:
- **The Norm**: 42's coding standard
- **Forbidden functions**: Only `write`, `malloc`, `free`, and variadic function macros allowed
- **No global variables**
- **Error handling**: Proper management of edge cases
- **Memory management**: No leaks, proper cleanup

## Key Learning Outcomes

- **Variadic Functions**: Deep understanding of `va_list` and related macros
- **Format Parsing**: String manipulation and format specifier recognition
- **Type Conversions**: Handling different data types and their representations
- **System Calls**: Direct use of `write()` for output
- **Code Organization**: Modular design with separate handler functions

## Contributing

This is a 42 School project and should be completed individually. However, after evaluation, discussions about different approaches and optimizations are welcome.

## License

This project is part of the 42 School curriculum. Feel free to use it for educational purposes, but please don't copy for your own 42 projects.

---

<div align="center">
  <strong>Made with ❤️ at 42 School Luxembourg</strong>
</div>
