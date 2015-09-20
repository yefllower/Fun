CC      := g++
FLAGS   := -std=c++11 
EXECUTABLE := o0O 

all: build

build: $(EXECUTABLE)

main.o: main.cpp
	$(CC) $(FLAGS) $(INCLUDE) -o $@ -c $< 

$(EXECUTABLE): main.o
	$(CC) $(FLAGS) $(INCLUDE) -o $@ $+ $(LIBS)

run: build
	./$(EXECUTABLE)

clean:
	rm -rf $(EXECUTABLE) *.o *~
