banking: Main.o Account.o
	g++  Main.o Account.o -o banking

Main.o: Main.cc Account.hh
	g++ -c Main.cc Account.hh 

Account.o: Account.cc Account.hh	
	g++ -c Account.cc Account.hh

Clean:
	rm *.o *.exe