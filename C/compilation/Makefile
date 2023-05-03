main.exe: main.o func.o           		#Linker stage
	gcc -o main.exe main.o func.o
main.o: main.s				  	#Assembler
	gcc -c main.s -o main.o
func.o: func.s
	gcc -c func.s -o func.o
main.s: main.i				   	#Compiler
	gcc -S main.i -o main.s
func.s: func.i
	gcc -S func.i -o func.s
main.i: main.c 					#Preprocessor
	gcc -E main.c -o main.i
func.i: func.c
	gcc -E func.c -o func.i
clean:
	rm -f *.o *.i *.asm 
