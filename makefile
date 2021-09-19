all: lieberman

lieberman: lieberman_p1.o
	g++ lieberman_p1.o -o lieberman_p1

lieberman.o: lieberman_p1.cpp
	g++ -c lieberman_p1.cpp

clean:
	rm -f *.o lieberman_p1