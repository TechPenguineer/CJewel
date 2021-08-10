cc=gcc
flags=-g -Wall
outDIR = -o $(wildcard out/)

interpreterEXE = Jewel.exe
interpreter=$(wildcard interpreter/*.c)

build-interpreter:
	$(cc) $(flags) $(interpreter) $(outDIR) $(interpreterEXE)