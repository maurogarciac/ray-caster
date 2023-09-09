#include <stdio.h>
#include <stdlib.h>
#include <glut.h>
#include <math.h>

#define mapX 8
#define mapY 8
#define cubeSize 64

int map[]={
	1,1,1,1,1,1,1,1,
	1,0,1,0,0,0,0,1,
	1,0,1,0,0,1,0,1,
	1,0,1,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
};

void drawMap2D(){
	int x,y,xo,yo;
	for(y=0;y<mapY;y++){
		for(x=0;x<mapX;x++){
			if(map[y*mapX+x]==1){ glColor3f(1,1,1);} else{ glColor3f(0,0,0);}
			xo=x*mapS; yo=y*mapS;
			glBegin(GL_QUADS);
			glVertex2i( 0   +xo+1, 0   +yo+1);
			glVertex2i( 0   +xo+1, mapS+yo-1);
			glVertex2i( mapS+xo-1, mapS+yo-1);
			glVertex2i( mapS+xo-1, 0   +yo+1);
			glEnd();
		}
	}
}


