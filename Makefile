all: main gates twice

main: main.c
	gcc -o ./outputs/main main.c -lm

gates: gates.c
	gcc -o ./outputs/gates gates.c -lm

twice: twice.c
	gcc -o ./outputs/twice twice.c -lm

clean:
	rm -f main gates twice *.o
