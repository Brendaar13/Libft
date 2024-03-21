# Libft
## Makefile

Se utiliza para automatizar el proceso de compilación y enlazado de un proyecto a través de automatización de compilación y gestión de dependencias, lo que facilita la gestión y la construcción del código fuente.

**all: $(NAME)**  Cuando ejecutas **`make`** sin especificar un objetivo, el Makefile busca la regla **`all`** y la genera.  Esto es útil porque proporciona una forma fácil de compilar todo el proyecto o generar el resultado principal sin tener que especificar el objetivo específico cada vez que se ejecuta **`make`**.

**@ar crs** =

- El símbolo "@" indica que la línea se ejecutará de forma silenciosa.
- "ar" proviene de "archiver", es una utilidad para crear y manipular archivos de biblioteca estática.
- "crs" son opciones específicas de la utilidad "ar":
- "c": Crea una biblioteca si aún no existe o reemplaza una existente.
- "r": Actualiza el archivo de biblioteca, agregando o reemplazando archivos objeto en él.
- "s": Actualiza la tabla de símbolos de la biblioteca. Esto es útil para asegurarse de que la biblioteca esté siempre actualizada con respecto a los símbolos definidos en los archivos objeto

**ranlib**: Sirve para generar un índice de acceso rápido para la biblioteca estática## Funciones

## Funciones

| Funciones  | Descripción |
| ------------- | ------------- |
| Isalpha  | Determina si el carácter es una letra alfabética                                                                                                       |
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
