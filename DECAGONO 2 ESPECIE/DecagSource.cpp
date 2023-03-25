#include <iostream> 
#include <gl/glut.h> 

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-200.0, 200.0, -200.00, 200.0);
	
}

void dibujar_Decagono()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 1.0, 1.0);

	glVertex2f(-63, 90);
	glVertex2f(0, 90);
	glVertex2f(50, 55);
	glVertex2f(70, 0);
	glVertex2f(50, -63);
	glVertex2f(0, -100);
	glVertex2f(-60, -100);
	glVertex2f(-110, -63);
	glVertex2f(-130, 0);
	glVertex2f(-110, 53);
	glVertex2f(-63, 90);

	glEnd();
}


void dibujar_Estrella()
{
	glBegin(GL_LINE_STRIP);
	glPointSize(20.0f);
	glColor3f(1.0, 1.0, 1.0);
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	dibujar_Decagono();
	dibujar_Estrella();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); // inicia la libreria GLUT  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // configura el modo de video inicial 
	glutInitWindowSize(640, 540); // Tamaño de la Ventana  
	glutInitWindowPosition(500, 250);
	glutCreateWindow("PENTAGONO  ESPECIE");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return EXIT_SUCCESS;
}