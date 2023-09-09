#include <stdlib.h>
#include <glut.h>
#include <math.h>

float distance(ax,ay,bx,by,angle){ return cos(degToRad(ang))*(bx-ax)-sin(degToRad(ang))*(by-ay);}

void drawRays2D(){
	glColor3f(0,1,1); 
	glBegin(GL_QUADS);
	glVertex2i(526,    0);
	glVertex2i(1006,   0);
	glVertex2i(1006, 160);
	glVertex2i(526,  160);
	glEnd();

	glColor3f(0,0,1); 
	glBegin(GL_QUADS);
	glVertex2i(526,  160);
	glVertex2i(1006, 160);
	glVertex2i(1006, 320);
	glVertex2i(526,  320);
	glEnd();glColor3f(0,1,1); 
	to
	glBegin(GL_QUADS);
	glVertex2i(526,    0);
	glVertex2i(1006,   0);
	glVertex2i(1006, 160);
	glVertex2i(526,  160);
	glEnd();


}
