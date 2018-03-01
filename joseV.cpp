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
void drawBox();

extern void showName() {
	Rect r; 
	r.bot =  100;
	r.left = 100; 
	r.center = 0;
	ggprint8b(&r, 16, 0x00ffff00, "Jose Valenzuela");
	glEnd();
}

extern void drawBox(int x, int y) {
	static float angel = 0.0;
	
	glColor3ub(255, 0, 0);
	glPushMatrix();
	glTranslatef(x, y, 0.0);
	glRotatef(angel, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50.0, -50.0, 0.0);
	angel = angel + 2.5;
	glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(0, 100);
		glVertex2f(100, 100);
		glVertex2f(100, 0);
	glEnd();
	Rect r;
	r.bot= 50;
	r.left = 50;
	r.center = 1;
	ggprint8b(&r, 16, 0x00ffff00, "Jose Valenzuela");
	glPopMatrix();
}