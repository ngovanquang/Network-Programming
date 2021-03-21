hello_linux.o: hello_linux.cpp
	gcc -c hello_linux.cpp

hello_linux: hello_linux.o
	gcc -o hello_linux hello_linux.o

clear: hello_linux.o
	rm hello_linux.o

build: hello_linux.o hello_linux clear
	./hello_linux