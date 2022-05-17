# run `make` in terminal in the directory that contains this makefile to compile the project 
# Below listed 4 different scripts from simplest to relatively complex for compiling the same files 
# Uncomment only one of them to learn the differences


# output: 
# 	g++ main.cpp library.cpp -O3 -o output 




# output: main.o library.o
# 	g++ main.o library.o -o output

# main.o: main.cpp
# 	g++ -c main.cpp

# library.o: library.cpp library.h
# 	g++ -c library.cpp




# CC = g++
# CFLAGS=  -O0 -g -Wall

# %.o: %.cpp 
# 	$(CC) -c $(CFLAGS) -o $@  $<

# output: main.o library.o library.h
# 	g++  main.o library.o -o $@




CC=g++
CFLAGS=-g -S
DEPS = library.h
OBJ = main.o library.o

%.o: %.cpp %.h
	$(CC) -c -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

