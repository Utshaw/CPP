CC=g++

CFLAGS=-Wall

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp -o test && ./test

clear: 
	rm -rf *.o test