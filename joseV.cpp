//
//Jose Valenzuela
//
//
//program: asteroids.cpp
//author:  Gordon Griesel
//date:    2014 - 2018
//mod spring 2015: added constructors
//mod spring 2018: X11 wrapper class
//This program is a game starting point for a 3350 project.
//
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;
#include <unistd.h>
#include <X11/Xlib.h>
//#include <X11/Xutil.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void showName();

extern void showName() {
	Rect r; 
	r.bot =  65;
	r.left = 65; 
	r.center = 0;
	ggprint8b(&r, 16, 0x00ffff00, "Jose Valenzuela");
	glEnd();
}

