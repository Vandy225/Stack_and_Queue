GPP = g++11
CFLAGS = -std=c++11 -Wall
#OBJECTS = Display.o main-square.o Simulator.o
rqobjects = rq.o

all: rq
 
#fibonacci: $(rqobjects)
#	$(GPP) 

%.o: %.cc
	$(GPP) $(CFLAGS) -c $^


clean:
	rm -f *.o *~ *% *# .#* *.h.gch
clean-all: clean
	rm -f rq