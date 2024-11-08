# Libft

Welcome to **libft**! 📚  
This project is a custom C library that recreates many standard C library functions and adds additional utility functions to make development in C easier and more efficient.

## Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Author](#author)

## About the Project

**libft** is a project from the curriculum at [42 School](https://42.fr/), aimed at building a strong foundation in C programming. By reimplementing standard C library functions, this project provides a deeper understanding of how these functions work behind the scenes. Once completed, **libft** can be used as a personal library in future C projects.

## Features

This library includes a variety of functions grouped into the following categories:

1. **Libc Functions** - Reimplementations of standard libc functions such as `memset`, `strcpy`, `atoi`, `isalpha`, etc.
2. **Additional Functions** - Utility functions not found in libc, like `ft_strjoin`, `ft_substr`, and `ft_split`.
3. **Bonus Functions** - Some extra functionalities for linked lists, such as `ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, and others.

## Installation

To compile and add **libft** to your project, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/asut00/libft.git
   cd libft
   ```

2. Compile the library:
   ```bash
   make
   ```

3. You’ll get a `libft.a` file that you can link with any of your projects:
   ```bash
   gcc yourfile.c -L. -lft -o yourprogram
   ```

## Usage

To use **libft** in your C project, include the main header at the top of your files:
```c
#include "libft.h"
```

You can then call any function from **libft** in your code. For example:
```c
#include "libft.h"

int main() {
    char *str = ft_strdup("Hello, libft!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

## Testing

Passed the moulinette with 125/100 ✅

## Author
 
- GitHub: [@asut00](https://github.com/asut00)  
- 42 Intra: `asuteau`
