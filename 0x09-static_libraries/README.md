# STATIC LIBRARIES

Static libraries are archives which contain object files that cointains functions that we can use to make our coding easier.
To create a static library, we need to convert our `.c files` which contain defined functions to object files (`.o files`). After this, we create the library by using the command `ar rc lib(name_of_static_library).a object_files.o` and then lastly, we index it by using the command `ranlib lib(name_of_staticlibrary).a` 
