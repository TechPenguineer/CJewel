  
exec=Jewel.exe
sources=$(wildcard src/*.c)
headers=$(wildcard src/include/*.h)
objects=$(sources:.c=.o)

flags=-g 


build:
	gcc $(flags) $(sources) $(headers) -o out/

	
clean:
	-rm *.exe
	-rm *.o
	-rm src/*.o