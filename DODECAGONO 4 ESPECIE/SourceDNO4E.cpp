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

void dibujar_Dodecagono()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 1.0, 1.0);

	glVertex2f(-25,95);
	glVertex2f(25, 95);
	glVertex2f(70,70);
	glVertex2f(95,25);
	glVertex2f(95, -25);
	glVertex2f(70, -70);
	glVertex2f(25, -95);
	glVertex2f(-25, -95);
	glVertex2f(-70, -70);
	glVertex2f(-95, -25);
	glVertex2f(-95, 25);
	glVertex2f(-70, 70);
	glVertex2f(-25, 95);

	/*glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 1.0, 1.0);*/

	//Coordenada coordenadas[13];

	//float radio = 100; // radio del polígono
	//float angulo = 2 * 3.14159265 / 12; // ángulo entre dos vértices consecutivos
	//float x, y;

	//for (int i = 0; i <= 12; i++) {
	//	// coordenadas polares para cada vértice
	//	x = radio * sin(angulo * i);
	//	y = radio * cos(angulo * i);
	//	glVertex2f(x, y);
	//	// crear un nuevo vector con las coordenadas polares y agregarlo al array dinámico
	//	coordenadas[i] = { x,y };
	//}


	//glEnd();

	//for (int i = 0; i < 13; i++) {
	//	cout << "Coordenada " << i + 1 << ": (" << coordenadas[i].x << ", " << coordenadas[i].y << ")" << endl;
	//}
}


void dibujar_Estrella()
{
	glBegin(GL_LINE_STRIP);
	glPointSize(20.0f);

	glColor3f(1.0, 1.0, 1.0);
		
	glVertex2f(25, 95);//
	glVertex2f(25, -95);//
	glVertex2f(-70, 70);//
	glVertex2f(95, -25);//
	glVertex2f(-95, -25);//
	glVertex2f(70, 70);//
	
	glVertex2f(-25, -95);//
	glVertex2f(-25, 95);//
	glVertex2f(70, -70);//
	glVertex2f(-95, 25);//
	glVertex2f(95, 25);//
	glVertex2f(-70, -70);//
	glVertex2f(25, 95);//

	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	dibujar_Dodecagono();
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