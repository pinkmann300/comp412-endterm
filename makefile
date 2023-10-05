CC = g++
CFLAGS = -Wall -g 

main.exe: main.o Car.o Vehicle.o
	$(CC) $(CFLAGS) -o main.exe main.o Vehicle.o Car.o

main.o: main.cpp Vehicle.h Car.h 
	$(CC) $(CFLAGS) -c main.cpp 

Vehicle.o: Vehicle.h 

Car.o: Car.h Vehicle.h 

