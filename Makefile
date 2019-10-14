# compile makefile

main: src/main.cpp build/bitmap.o
	g++ -o bin/imagecmd.out src/main.cpp build/bitmap.o

bitmap.o: src/bitmap.cpp header/bitmap.h
	g++ -c src/bitmap.cpp -o build/bitmap.o