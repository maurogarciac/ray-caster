#include <stdio.h>
#include <stdlib.h>
//#include <GL/glew.h>
#include <GL/glut.h>
#include <player.c>

void init(){
	glClearColor(0.3,0.3,0.3,0);
	gluOrtho2D(0,1024,512,0);
	px=300; py=300;
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1024, 512);
	glutCreateWindow("ehhhh");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(buttons);
	glutMainLoop();
}
