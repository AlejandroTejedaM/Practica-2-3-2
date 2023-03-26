#include <iostream> 
#include <gl/glut.h> 

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-100.0, 100.0, -100.00, 100.0);
}

void dibujar_Pentagono()
{
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(0, 50);
	glVertex2f(-47, 16);
	glVertex2f(-29, -40);
	glVertex2f(29, -40);
	glVertex2f(47, 16);

	glEnd();

}


void dibujar_Estrella()
{
	glBegin(GL_LINE_STRIP);
	glPointSize(20.0f);

	glColor3f(1.0, 1.0, 1.0);

	glVertex2f(0, 50);
	glVertex2f(29, -40);
	glVertex2f(-47, 16);
	glVertex2f(47, 16);
	glVertex2f(-29, -40);
	glVertex2f(0, 50);

	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	dibujar_Pentagono();
	dibujar_Estrella();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); // inicia la libreria GLUT  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // configura el modo de video inicial 
	glutInitWindowSize(640, 580); // Tamaño de la Ventana  
	glutInitWindowPosition(500, 250);
	glutCreateWindow("PENTAGONO  ESPECIE");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return EXIT_SUCCESS;
}