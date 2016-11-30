#Comment
CC=c++
CFLAGS=-Wall -std=c++11

all: ditdah

ditdah: ditdah.o
	$(CC) $(CFLAGS) ditdah.o -o ditdah

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

%.cpp: %.hpp

clean:
	rm *.o* ditdah

default:
	make ditdah
wrap:
	rm *.o
