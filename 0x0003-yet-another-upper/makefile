main:
	as -o main.o *.s -g --gdwarf-2
	ld -s -o main main.o

release:
	as -o main.o *.s --strip-local-absolute
	ld -s -o main main.o

clean:
	rm *.o
	rm main

