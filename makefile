compila: main.o Bisezione.o Parabola.o Segno.o
	c++ main.o Bisezione.o Segno.o Parabola.o -o bisezione

main.o: main.cpp Bisezione.h Parabola.h FunzioneBase.h
	c++ -c main.cpp -o main.o

Parabola.o: Parabola.cpp Parabola.h
	c++ -c Parabola.cpp -o Parabola.o

Bisezione.o: Bisezione.cpp Parabola.h Segno.h FunzioneBase.h
	c++ -c Bisezione.cpp -o Bisezione.o

Segno.o: Segno.cpp Segno.h
	c++ -c Segno.cpp -o Segno.o


