objects = main.o operation.o dataclass.o

cc = gcc

menu : $(objects)
	cc -o menu $(objects)

operation.o main.o : operation.h

dataclass.o main.o : dataclass.h

.PHONY : clean

clean:
	rm menu $(objects)
