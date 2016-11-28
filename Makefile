#Comment
CC=c++
CFLAGS=-Wall -std=c++11

all: ditdah

ditdah: ditdah.o
	$(CC) $(CFLAGS) ditdah.o

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

%.cpp: %.hpp

clean:
	rm *.o*

default:
	make ditdah
wrap:
	rm *.o
