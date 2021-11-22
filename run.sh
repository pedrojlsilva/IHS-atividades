nasm -f elf32 bubblesort.asm -o bubblesort.o
gcc -m32 -c ihs.c -o ihs.o
gcc -m32 -no-pie ihs.o bubblesort.o -oihs
./ihs

rm ./ihs ./bubblesort.o ./ihs.o