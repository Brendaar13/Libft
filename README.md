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
| Isdigit  | Determina si el carácter es un digito.                                                                                                                 |
| Isalnum  | Determina si el carácter es una letra alfabética o un digito.                                                                                          |
| Isascii  |  Determina si el carácter es un carácter ASCII válido                                                                                                  |
| Isprint  | Determina si el carácter es imprimible.                                                                                                                |
| Strlen   | Devuelve la longitud de un string.                                                                                                                     |
| Memset   | Llena un bloque de memoria con un valor específico.                                                                                                    |
| Bzero    | Establece un bloque de memoria a 0, elimina todo lo que contenga, suele usarse para asegurarse de que ese bloque esta vacio.                           |
| Memcpy   | Copiar un bloque de memoria desde una ubicación origen a una de destino.                                                                               |
| Memmove  | Copiar un bloque de memoria desde una ubicación origen a una de destino, incluso si las áreas de origen y de destino se superponen/solapan.            |
| Strlcpy  | Copia una cadena de string desde una ubicación de origen a una de destino.                                                                             |
| Strlcat  | Concatena dos cadenas de string, colocando la cadena de origen al final de la cadena de destino.                                                       |
| Toupper  | Convierte el carácter a mayúsculas.                                                                                                                    |
| Tolower  | Convierte el carácter a minúsculas.                                                                                                                    |
| Strchr   | Busca la primera ocurrencia de un carácter en específico en un string.                                                                                 |
| Strrchr  | Busca la última ocurrencia de un carácter en específico en un string.                                                                                  |
| Strncmp  | Comparar los primeros X caracteres de dos cadenas de string. Se detiene en el caracter nulo.                                                           |
| Memchr   | Content CellBusca valores específicos en bloques de memoria.                                                                                           |
| Memcmp   | Compara bloques de memoria. * Si el resultado es 0, significa que los bloques de memoria son iguales. * Si el resultado es menor que 0, significa que el primer byte que difiere en **`ptr1`** es menor/mayor que el byte correspondiente en **`ptr2`**. Arroja el valor de la diferencia entre ambos|
| Strnstr  | Busca la primera aparición de una subcadena en un string limitando la búsqueda (a los primeros caracteres de la cadena).                               |
| Atoi     | Convertir un string a un valor de tipo entero. Ej: si pones “42” ➡️ “42” pero en entero aunque visualmente no se vea la diferencia.                     |
| Calloc   | Asigna un bloque de memoria e inicializa los bytes a 0.                                                                                                |
| Strdup   | Se utiliza para duplicar un string desde el origen hasta el puntero de la nueva cadena que ya tuvo previamente una asignación de memoria.              |
| Substr   | Extraer una subcadena de una cadena más grande.                                                                                                        |
| Strjoin  | Concatenar múltiples cadenas.                                                                                                                          |
| Strtrim  | Recortar caracteres específicos al principio y al final de un string como espacios, tabulaciones, saltos de línea, etc.                                |
| Split    | Dividir una cadena en partes más pequeñas, basadas en un delimitador específico. Ej: “Manzana, Naranjas, Uva” ➡️  ”Manzana” “Naranjas” ”Uva”.           |
| Itoa     | Convertir un número entero en una cadena de caracteres.                                                                                                |
| Strmapi  | Permite usar una función como parámetro y colocarlas caracter por caracter en un string.                                                               |
| Striteri | Permite usar una función como argumento y pasarla caracter por caracter, pasándolo como primer argumento.                                              |
|Putchar_fd| Imprimir caracteres pero en un archivo.                                                                                                                |
| Putstr_fd| Imprimir un string en un archivo.                                                                                                                      |
|Putendl_fd| Imprime una cadena seguido de una nueva línea.                                                                                                         |
|Putnbr_fd | Imprimir un número entero dentro de los valores máximos de int.                                                                                        |

## Bonus

| Funciones  | Descripción |
| ------------- | ------------- |
| Lstnew   | Crea un nuevo nodo y le añade un contenido.                                                                                                            |
| Lstadd_front | Agregar un nuevo elemento al frente de la lista enlazada.                                                                                          | 
| Lstsize  | Cuenta el número de nodos de una lista.                                                                                                                |
| Lstlast  | Devuelve el último nodo de la lista.                                                                                                                   |
| Lstadd_back |Agrega un nuevo elemento al final de la lista enlazada.                                                                                              |
| Lstdelone | Eliminar un nodo específico utilizando una función para liberar memoria evitando la fuga de memoria.                                                  |
| Lstclear | Eliminar todos los nodos, liberando la memoria de todos los nodos y sus contenidos.                                                                    |
| Lstiter  | Itera la lista y aplica la función en el contenido de cada nodo.                                                                                       |
