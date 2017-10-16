objects = main.o operation.o dataclass.o linktable.o

cc = gcc

menu : $(objects)
	cc -o menu $(objects)

operation.o main.o : operation.h

dataclass.o main.o : dataclass.h

linktable.o main.o : linktable.h

.PHONY : clean

clean:
	rm menu $(objects)
