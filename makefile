  
exec=Jewel.exe
sources=$(wildcard src/*.c)
headers=$(wildcard src/include/*.h)
objects=$(sources:.c=.o)

flags=-g 


build:
	gcc $(flags) $(sources) -Iinclude $(headers) -o out/Jewel.exe
	
clean:
	-rm out/*.exe
	-rm out/*.stackdump
