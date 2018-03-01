#
# Makefile for asteroids game
#
# Enter one of the following
#
# make
# make all
# make asteroids
# make clean
#
CFLAGS = -I ./include
#LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm
LFLAGS = -lrt -lX11 -lGL

all: asteroids

asteroids: asteroids.cpp log.cpp timers.cpp joseV.cpp
	g++ $(CFLAGS) joseV.cpp asteroids.cpp log.cpp timers.cpp \
	libggfonts.a -Wall $(LFLAGS) -o asteroids

clean:
	rm -f asteroids
	rm -f *.o

