all: Client.cpp MarriageAgencyTest.cpp
	@gcc -c *.cpp

	@g++ -o main *.o
clean:
	@rm -f *.o 
	@rm -f *.c
	@rm main
client: Client.cpp MarriageAgencyTest.cpp
	@g++ -c Client.cpp MarriageAgencyTest.cpp
	@g++ -o main Client.o MarriageAgencyTest.cpp
	@./main
database: DataBase.cpp CommandLineUI.cpp Client.cpp
	@gcc -c DataBase.cpp CommandLineUI.cpp Client.cpp
	@g++ -o main DataBase.o CommandLineUI.o Client.o
	@./main
run:
	@./main