main:
	as -o main.o *.s --strip-local-absolute
	ld -s -o main main.o

clean:
	rm *.o
	rm main

run:
	./main
