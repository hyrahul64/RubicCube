INCPATH=./

all : rubic_try

rubic_try : rubic_try.cpp rubic_cube.cpp rubic_cube.h
	g++ -o rubic_cube -I$(INCPATH) rubic_try.cpp
clean:
	rm rubic_cube	
