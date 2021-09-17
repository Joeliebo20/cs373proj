all: coding_proj

coding_proj: coding_proj.o
	g++ coding_proj.o -o proj.exe

coding_proj.o: coding_proj.cpp
	g++ -c coding_proj.cpp

clean:
	rm -f *.o proj.exe
