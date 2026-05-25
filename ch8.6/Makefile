CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic-errors

sources = $(wildcard *.cpp)
binaries = $(sources:%.cpp=%)

all: $(binaries)

$(binaries): % : %.cpp
		$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	$(RM) $(binaries) 

.PHONY: all clean
