# DYNAMIC LIBRARIES

When a C program is compiled, the compiler generates object codes. After generating the object codes the compiler invokes the linker. One main task of the linker is to make codes in libraries e.g printf, scanf, sqrt;available to your codes.

A linker can do this in two ways:
1. By copying the code of the library function into your object code
2. By making some arrangement so that the complete code or library function is not copied but made available for your object code at run-time.

## Dynamic Library and Dynamic Linking

Dynamic linking doesn't require the code to be copied. It is done by just placing the name of the library inside the binary file. The actual linking is done when the program is run, when both the binary and library files are in memory.


## Steps in creating a dynamic library
1. compile the files using the tags -fPIC (gcc -Wall -fPIC -c *.c)
2. Build the shared library (.so) file as follows (gcc -shared -o libhaymath.so *.o)
3. set the library environmental variable (export LD_LIBRARY_PATH=$LD_LIBRARY_PATH/absolute_path/
