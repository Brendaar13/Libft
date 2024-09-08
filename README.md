# Libft

The project is an outstanding academic experience to develop a custom library of functions in C. This project not only deepens my understanding of the C language by recreating standard functions and exploring their internal implementation, but also reinforces my skills in manual memory management, essential for creating efficient and error-free programs. In addition, it allowed me to manage complex data structures, such as linked lists, and to perform basic mathematical operations, establishing a solid foundation that I can apply to future developments. In summary, libft is a project that combines technical refinement with the creation of a reusable tool, demonstrating my ability to tackle complex programming and data management challenges.

## Makefile

It is used to automate the process of compiling and linking a project through compilation automation and dependency management, which facilitates the management and construction of the source code.

**all: $(NAME)**  When you run **`make`** without specifying a target, the Makefile looks for the **`all`** rule and generates it.  This is useful because it provides an easy way to compile the entire project or generate the main output without having to specify the specific target each time you run **`make`**.

**@ar crs** =

- The “@” symbol indicates that the line will run silently.
- “ar” comes from “archiver”, it is a utility for creating and manipulating static library files.
- “crs” are options specific to the “ar” utility:
- “c”: creates a library if it does not already exist or replaces an existing one.
- “r”: Updates the library file, adding or replacing object files in it.
- “s”: Updates the library symbol table. This is useful to make sure that the library is always up to date with respect to the symbols defined in the object files.
  
**ranlib**: Used to generate a quick access index for the static library## Functions

## Funciones

| Funciones  | Descripción |
| ------------- | ------------- |
| Isalpha  | Determines if the character is an alphabetic letter                                                                                                    |
| Isdigit  | Determines if the character is a digit                                                                                                                 |
| Isalnum  | Determines if the character is an alphabetic letter or a digit                                                                                         |
| Isascii  | Determines if the character is a valid ASCII character                                                                                                 |
| Isprint  | Determines if the character is printable.                                                                                                              |
| Strlen   | Returns the length of a string                                                                                                                         |
| Memset   | Fills a memory block with a specific value                                                                                                             |
| Bzero    | Sets a block of memory to 0, removes everything in it, usually used to make sure that block is empty                                                   |
| Memcpy   | Copy a block of memory from a source location to a destination location.                                                                               |
| Memmove  | Copy a block of memory from a source location to a destination location, even if the source and destination areas overlap.                             |
| Strlcpy  | Copy a string from a source location to a destination location.                                                                                        |
| Strlcat  | Concatenates two string strings, placing the source string at the end of the target string.                                                            |
| Toupper  | Convert the character to uppercase.                                                                                                                    |
| Tolower  | Convert the character to lowercase.                                                                                                                    |
| Strchr   | Searches for the first occurrence of a specific character in a string.                                                                                 |
| Strrchr  | Searches for the last occurrence of a specific character in a string.                                                                                  |
| Strncmp  | Comparar los primeros X caracteres de dos cadenas de string. Se detiene en el caracter nulo.                                                           |
| Memchr   | Compare the first X characters of two string strings. Stops at the null character.                                                                     |
| Memcmp   | Compare memory blocks. * If the result is 0, it means that the memory blocks are the same. * If the result is less than 0, it means that the first byte that differs in **`ptr1`** is less/greater than the corresponding byte in **`ptr2`**. It returns the value of the difference between the two bytes.|
| Strnstr  | Searches for the first occurrence of a substring in a string by limiting the search (to the first characters of the string.                            |
| Atoi     | Convert a string to an integer value. E.g.: if you type “42” ➡️ “42” but in integer although visually you can't see the difference.                    |
| Calloc   | Allocates a block of memory and initializes the bytes to 0.                                                                                            |
| Strdup   | Used to duplicate a string from the source to the pointer of the new string that has already had a previous memory allocation.                         |
| Substr   | Extract a substring from a larger string.                                                                                                              |
| Strjoin  | Concatenate multiple strings.                                                                                                                          |
| Strtrim  | Trim specific characters at the beginning and end of a string, such as spaces, tabs, line breaks, etc.                                                 |
| Split    | Split a string into smaller parts, based on a specific delimiter. Ex: “Apple, Oranges, Grape” ➡️ “Apple” “Oranges” “Grape”.                             |
| Itoa     | Convert an integer into a string.                                                                                                                      |
| Strmapi  | Allows you to use a function as a parameter and place it character by character in a string.                                                           |
| Striteri | Use a function as an argument and pass it character by character, passing it as the first argument.                                                    |
|Putchar_fd| Print characters but in a file.                                                                                                                        |
| Putstr_fd| Print a string to a file.                                                                                                                              |
|Putendl_fd| Print a string followed by a new line.                                                                                                                 |
|Putnbr_fd | Print an integer number within the maximum values of int.                                                                                              |

## Bonus

| Funciones  | Descripción |
| ------------- | ------------- |
| Lstnew   |  Creates a new node and adds content to it.                                                                                                            |
| Lstadd_front | Add a new element to the front of the linked list.                                                                                                 | 
| Lstsize  | Count the number of nodes in a list   .                                                                                                                |
| Lstlast  | Return the last node in the list.                                                                                                                      |
| Lstadd_back | Adds a new element to the end of the linked list.                                                                                                   |
| Lstdelone | Delete a specific node using a function to free memory by preventing memory leakage.                                                                  |
| Lstclear | Delete all nodes, freeing the memory of all nodes and their contents.                                                                                  |
| Lstiter  | Iterate the list and apply the function on the contents of each node.                                                                                  |
