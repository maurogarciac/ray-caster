#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include "player.h"

float degToRad(int a) { return a*M_PI/180.0;}
int FixAng(int a){ if(a>359){ a-=360;} if(a<0){ a+=360;} return a;}

float px,py,pdx,pdy,pa;

void drawPlayer2D(){
	glColor3f(1,1,0);	glPointSize(8);		glLineWidth(4);
	glBegin(GL_POINTS);	glVertex2i(px,py);	glEnd();
	glBegin(GL_LINES);	glVertex2i(px,py);	glVertex2i(px+pdx*20,py+pdy*20); glEnd();
}

void buttons(unsigned char key, int x, int y){
	if(key=='a'){ pa+=5; pa=FixAng(pa); pdx=cos(degToRad(pa)); pdy=-sin(degToRad(pa));}
	if(key=='w'){ pa-=5; pa=FixAng(pa); pdx=cos(degToRad(pa)); pdy=-sin(degToRad(pa));}
	if(key=='s'){ px+=pdx*5; py+=pdy*5;}
	if(key=='d'){ px-=pdx*5; py-=pdy*5;}
	glutPostRedisplay();
}

