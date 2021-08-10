  
exec=Jewel.exe
sources=$(wildcard src/*.c)
headers=$(wildcard src/include/*.h)
objects=$(sources:.c=.o)

flags=-g 


build:
	gcc $(flags) $(sources) $(headers) $< - o out/$@.o

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@
	
clean:
	-rm *.exe
	-rm *.o
	-rm src/*.o