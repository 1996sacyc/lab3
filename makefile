clock_main: clock.o clock_main.o
	g++ -o clock clock_main.o clock.o

clock.o: clock.cpp clock.h
	g++ -c clock.cpp

clock_main.o: clock_main.cpp clock.h
	g++ -c clock_main.cpp

clean:
	rm clock *.o
