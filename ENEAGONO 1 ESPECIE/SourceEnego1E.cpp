#include <iostream> 
#include <gl/glut.h> 
#include <vector>
using namespace std;

struct Coordenada
{
	float x;
	float y;
};

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-100.0, 100.0, -100.00, 100.0);
}

void dibujar_Eptogono()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 1.0, 1.0);

	glVertex2f(0, 100);
	glVertex2f(65, 75);
	glVertex2f(100, 20);
	glVertex2f(90, -50);
	glVertex2f(35, -90);
	glVertex2f(-35, -90);
	glVertex2f(-90, -50);
	glVertex2f(-100, 20);
	glVertex2f(-65, 75);
	glVertex2f(0, 100);

	glEnd();

	//glBegin(GL_LINE_STRIP);
	//glColor3f(1.0, 1.0, 1.0);

	//Coordenada coordenadas[10];

	//float radio = 100; // radio del pol�gono
	//float angulo = 2 * 3.14159265 / 9; // �ngulo entre dos v�rtices consecutivos
	//float x, y;

	//for (int i = 0; i <= 9; i++) {
	//	// coordenadas polares para cada v�rtice
	//	x = radio * sin(angulo * i);
	//	y = radio * cos(angulo * i);
	//	glVertex2f(x, y);
	//	// crear un nuevo vector con las coordenadas polares y agregarlo al array din�mico
	//	coordenadas[i] = { x,y };
	//}


	//glEnd();

	//for (int i = 0; i < 10; i++) {
	//	cout << "Coordenada " << i + 1 << ": (" << coordenadas[i].x << ", " << coordenadas[i].y << ")" << endl;
	//}
}


void dibujar_Estrella()
{
	glBegin(GL_LINE_STRIP);
	glPointSize(20.0f);

	glColor3f(1.0, 1.0, 1.0);

	
	glVertex2f(0, 100);//
	glVertex2f(100, 20);//
	glVertex2f(35, -90);//
	glVertex2f(-90, -50);//
	glVertex2f(-65, 75);//
	glVertex2f(65, 75);//
	glVertex2f(90, -50);
	glVertex2f(-35, -90);//
	glVertex2f(-100, 20);//
	glVertex2f(0, 100);//

	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	dibujar_Eptogono();
	dibujar_Estrella();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); // inicia la libreria GLUT  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // configura el modo de video inicial 
	glutInitWindowSize(640, 580); // Tama�o de la Ventana  
	glutInitWindowPosition(500, 250);
	glutCreateWindow("PENTAGONO  ESPECIE");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return EXIT_SUCCESS;
}