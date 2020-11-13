CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS= -Wall -g

all: libmyMath.so libmyMath.a mains maind power.o basicMath.o main.o

mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a

maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so

libmyMath.so: power.o basicMath.o
	$(CC) $(FLAGS) -shared -o power.o basicMath.o -o libmyMath.so

libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c -o power.o

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c -o basicMath.o

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all libmyMath.a libmyMath.so

clean:
	rm -f *.o *.a *.so mains maind
