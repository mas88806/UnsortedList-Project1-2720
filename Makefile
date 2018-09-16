CC = g++ -Wall -std=c++14 -g -O0 -pedantic-errors
USLT = UnsortedListTest.cpp
STUD = stud.cpp
USL = UnsortedList.cpp
USLH = UnsortedList.h
STUDH = stud.h

all: UnsortedListTest

UnsortedListTest: UnsortedList.o stud.o UnsortedListTest.o 
	$(CC) -o $@  UnsortedList.o stud.o UnsortedListTest.o

UnsortedListTest.o: $(USL) $(USLT) $(STUD) 
	$(CC) -o $@  -c $(USLT)

UnsortedList.o: $(USL) $(USLH) 
	$(CC) -o $@  -c $(USL)

stud.o: $(STUD) $(STUDH) 
	$(CC) -o $@  -c $(STUD)

clean:
	rm -f UnsortedListTest.o
	rm -f UnsortedListTest
	rm -f UnsortedList.o
	rm -f stud.o