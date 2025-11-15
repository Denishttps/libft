Libft

Libft is a custom C library created as part of the 42 curriculum. The
project focuses on reimplementing essential standard library functions,
memory management, string handling, and linked list operations.

📌 Table of Contents

-   Description
-   Project Structure
-   Build
-   Usage
-   Implemented Functions
-   Testing
-   License

------------------------------------------------------------------------

📖 Description

The goal of this project is to recreate a selection of functions from
<ctype.h>, <string.h>, <stdlib.h>, and other standard C libraries, as
well as to implement additional utility functions, including linked list
handling.
All functions must meet 42 requirements: no memory leaks, correct error
handling, and clean code.

------------------------------------------------------------------------

🗂 Project Structure

    libft/
    │── src/         # .c files
    │── includes/    # libft.h
    │── obj/         # object files (generated during build)
    │── Makefile
    │── README.md

------------------------------------------------------------------------

🛠 Build

To compile the library:

    make

This produces:

    libft.a

Additional Makefile commands:

  Command       Description
  ------------- -----------------------------------
  make          Build the library
  make clean    Remove object files
  make fclean   Remove object files and libft.a
  make re       Rebuild everything
  make bonus    Build linked list bonus functions

------------------------------------------------------------------------

🚀 Usage

Include the header in your project:

    #include "libft.h"

Compile your program with the library:

    gcc main.c -L. -lft

------------------------------------------------------------------------

📚 Implemented Functions

🔤 Character checks (ctype)

-   ft_isalpha
-   ft_isdigit
-   ft_isalnum
-   ft_isascii
-   ft_isprint

🔧 String functions

-   ft_strlen
-   ft_strlcpy
-   ft_strlcat
-   ft_strchr
-   ft_strrchr
-   ft_strnstr
-   ft_strncmp

🔁 Memory functions

-   ft_memset
-   ft_memcpy
-   ft_memmove
-   ft_memchr
-   ft_memcmp
-   ft_bzero
-   ft_calloc

🧵 String creation & manipulation

-   ft_strdup
-   ft_substr
-   ft_strjoin
-   ft_strtrim
-   ft_split
-   ft_itoa
-   ft_strmapi
-   ft_striteri

📄 Output functions

-   ft_putchar_fd
-   ft_putstr_fd
-   ft_putendl_fd
-   ft_putnbr_fd

🧱 Linked list functions (bonus)

-   ft_lstnew
-   ft_lstadd_front
-   ft_lstadd_back
-   ft_lstsize
-   ft_lstlast
-   ft_lstdelone
-   ft_lstclear
-   ft_lstiter
-   ft_lstmap

------------------------------------------------------------------------

🧪 Testing

Recommended testers:

-   Francinette
-   Moulitest
-   WarMachine
-   libft-unit-test

Example (Francinette):

    git clone https://github.com/xicodomingues/francinette
    cd francinette
    ./francinette path/to/libft

------------------------------------------------------------------------

📄 License

This project was created for educational purposes within the 42
curriculum
and is freely distributable.

------------------------------------------------------------------------