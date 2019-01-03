CC=g++

CFLAGS=-Wall

FILE_NAME=number_system.cpp

one.o: $(FILE_NAME)
	$(CC) $(CFLAGS) $(FILE_NAME) -o one && ./one
overflow.o: overflow.cpp
	$(CC) $(CFLAGS) overflow.cpp -o one && ./one
enum.o: enum.cpp
	$(CC) $(CFLAGS) enum.cpp -o one && ./one
typedef.o: typedef.cpp
	$(CC) $(CFLAGS) typedef.cpp -o one && ./one
clean: 
	rm -rf *o one *out
