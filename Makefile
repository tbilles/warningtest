SRCS=$(wildcard Class*.cpp)
OBJS=$(patsubst %.cpp,%.o,$(SRCS))

CXXFLAGS=-Wall -Wextra -std=c++17 -pedantic

a.out: main.o $(OBJS)
	g++ -o $@ $?

generator: generator.cpp

clean:
	rm *.o a.out generator
