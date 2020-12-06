CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_MYBANK=myBank.o
FLAGS=-Wall 
all:libmyBank.so libmyBank.a mains maind 
mains: $(OBJECTS_MAIN) libmyBank.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyBank.a
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyBank.so
libmyBank.a: $(OBJECTS_MYBANK) 
	$(AR) -rcs libmyBank.a $(OBJECTS_MYBANK)
libmyBank.so: $(OBJECTS_MYBANK) 
	$(CC) -shared -o libmyBank.so $(OBJECTS_MYBANK)
main.o: main.c  
	$(CC) $(FLAGS) -c main.c
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind