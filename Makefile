all: main.o sorts.o arraywork.o statarray.o testsorts.o
	g++ main.o sorts.o arraywork.o statarray.o testsorts.o

main.o: main.c
	g++ -c main.c

sorts.o: sorts.c
	g++ -c sorts.c

arraywork.o: arraywork.c
	g++ -c arraywork.c

statarray.o: statarray.c
	g++ -c statarray.c

testsorts.o: testsorts.c
	g++ -c testsorts.c

clean:
	rm -rf *.o test
