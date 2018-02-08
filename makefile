CC=c89

main: main.o
	$(CC) -m64 main.o -lc -o main

clean:
	-@rm -f main
	-@rm -f main.o 
