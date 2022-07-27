CXX = g++
CFLAGS = -Wall -O2

SOURCES = main.cpp Porownanie.cpp Osoba.cpp
OBJECTS = $(SOURCES:.cpp=.o)
PROG = run


all: $(PROG)

$(PROG): $(OBJECTS)
	$(CXX) -o $@ $^ $(CFLAGS)

.cpp.o: $(SOURCES)
	$(CXX) -o $@ $^ -c $(CFLAGS)

clean:
	@rm -f $(OBJECTS) $(PROG)
