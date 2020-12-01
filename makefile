clean:
	rm *~ *.o *.out

test:
	gcc test.c -o test.o

edit: SinglyLinkedList.o
	gcc SinglyLinkedList.c

