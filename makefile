all: bin/main

bin/main: build/main.o build/strings.o
	gcc -Wall build/main.o build/strings.o -o bin/main

build/main.o: src/main.c
	gcc -Wall -c src/main.c -o build/main.o

build/strings.o: src/strings.c
	gcc -Wall -c src/strings.c -o build/strings.o
 
.PHONY: clean

clean: build/*.o
	rm -rf build/*.o
