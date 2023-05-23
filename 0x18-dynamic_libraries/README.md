Dynamic Library Project
This project is about creating and using a dynamic library in C. A dynamic library is a file that contains compiled code that can be linked to other programs at run time. Dynamic libraries have advantages such as saving memory, reducing executable file size, and allowing updates without recompiling.

Files
libdynamic.so: The dynamic library file that contains various functions for string manipulation, memory allocation, input/output, and arithmetic operations.
main.h: The header file that contains the prototypes of all the functions in the library.
0-main.c: A test file that uses the _strlen function from the library.
1-create_dynamic_lib.sh: A script that creates a dynamic library called liball.so from all the .c files in the current directory.
