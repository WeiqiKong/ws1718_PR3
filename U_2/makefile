GCC_ARGS= -pedantic-errors -Wall -Wstrict-prototypes
OBJ= math.o summe.o differenz.o input.o

math: $(OBJ)
	gcc $(GCC_ARGS) -o $@ $(OBJ)

%.o:%.c
	gcc $(GCC_ARGS) -c $<

summe.o: input.h

differenz.o: input.h

math.o:  summe.h differenz.h

clean:
	rm math $(OBJ)
