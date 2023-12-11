# DYNAMIC LIBRARIES

To create Dynamic libraries, you need to create object files by using `gcc -c *.c -fpics` and then use `gcc *.c -shared -o "anyname.so"`
to make the adderess findable, you use `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`
