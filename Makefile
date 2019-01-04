CC=g++

CFLAGS=-Wall

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp -o test && ./test
git-add:
	git add --all

clear: 
	rm -rf *.o test