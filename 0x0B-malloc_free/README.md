# MALLOC AND FREE

Memory allocation simply has to do with allocating memory spaces in the heap of the RAM for several purposes when running a program, one of which includes making changes to an array in the heap. Malloc always returns a pointer. To allocate memory, we simply use `ptr = malloc (int size * sizeof(data type)`
After allocating a memory space and running your program, the reserved space still remains unlike the stack and in order to free this space, the free function is used. `free(ptr)`
