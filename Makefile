all: Client.cpp MarriageAgencyTest.cpp
	@gcc -c *.cpp

	@g++ -o main *.o
clean:
	@rm -f *.o 
	@rm -f *.c
	@rm main
run:
	@./main