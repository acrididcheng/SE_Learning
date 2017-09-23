objects = forgebash.o command.o

cc = gcc

forgebash : $(objects)
	cc -o forgebash $(objects)

forgebash.o : command.h

.PHONY : clean

clean :
	rm forgebash $(objects)
