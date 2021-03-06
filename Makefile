exec = jewel
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

install:
	make
	sudo cp ./$(exec) /usr/local/bin/jewel

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
	-sudo rm /usr/local/bin/jewel
