CXX = g++
CXXFLAGS = -std=c++20 -O2 -Wall -Wextra

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

run:
	./a