objects = menu.o linktable.o

cc = gcc

menu : $(objects)
	cc -o menu $(objects) 

linktable.o menu.o : linktable.h

.PHONY : clean

clean:
	rm menu $(objects)
