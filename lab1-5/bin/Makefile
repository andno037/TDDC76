CC=g++
CFLAGS=-std=c++11
SRC_=../src
INCLUD=../headers

run:all
	./lab1-5

all: lab1-5


lab1-5: lab1-5.o List.o
	$(CC) $(CFLAGS) lab1-5.o List.o -o $@

lab1-5.o:$(SRC_)/lab1-5.cc
	$(CC) $(CFLAGS) -I$(INCLUD) -c $(SRC_)/lab1-5.cc

List.o:$(SRC_)/List.cc
	$(CC) $(CFLAGS) -I$(INCLUD) -c $(SRC_)/List.cc

clean:
	rm -rf *o lab1-5
