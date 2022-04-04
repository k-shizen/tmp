myprogram :main.o func.o
	g++ main.o func.o -o myprogram
main.o :main.cpp
	g++ -c main.cpp
func.o :func.cpp
	g++ -c func.cpp