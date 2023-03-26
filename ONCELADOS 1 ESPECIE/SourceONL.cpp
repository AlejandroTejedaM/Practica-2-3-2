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
	gluOrtho2D(-200.0, 200.0, -200.0, 200.0);
}

void dibujar_Once_Lados()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 1.0, 1.0);

	glVertex2f(0, 100);
	glVertex2f(-55, 85); 
	glVertex2f(-90, 40); 
	glVertex2f(-100, -15); 
	glVertex2f(-75, -65); 
	glVertex2f(-30, -95); 
	glVertex2f(30, -95); 
	glVertex2f(75, -65); 
	glVertex2f(100, -15); 
	glVertex2f(90, 40);
	glVertex2f(55, 85); 
	glVertex2f(0, 100);

	//glBegin(GL_LINE_STRIP);
	//glColor3f(1.0, 1.0, 1.0);

	//Coordenada coordenadas[12];

	//float radio = 100; // radio del polígono
	//float angulo = 2 * 3.14159265 / 11; // ángulo entre dos vértices consecutivos
	//float x, y;

	//for (int i = 0; i <= 11; i++) {
	//	// coordenadas polares para cada vértice
	//	x = radio * sin(angulo * i);
	//	y = radio * cos(angulo * i);
	//	glVertex2f(x, y);
	//	// crear un nuevo vector con las coordenadas polares y agregarlo al array dinámico
	//	coordenadas[i] = { x,y };
	//}


	//glEnd();

	//for (int i = 0; i < 12; i++) {
	//	cout << "Coordenada " << i + 1 << ": (" << coordenadas[i].x << ", " << coordenadas[i].y << ")" << endl;
	//}
}


void dibujar_Estrella()
{
	glBegin(GL_LINE_STRIP);
	glPointSize(20.0f);

	glColor3f(1.0, 1.0, 1.0);

	glVertex2f(-55, 85);//
	glVertex2f(55, 85);//
	glVertex2f(100, -15);//
	glVertex2f(30, -95);//
	glVertex2f(-75, -65);//
	glVertex2f(-90, 40);//
	glVertex2f(0, 100);//
	glVertex2f(90, 40);//
	glVertex2f(75, -65);//
	glVertex2f(-30, -95);//
	glVertex2f(-100, -15);
	glVertex2f(-55, 85);//

	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	dibujar_Once_Lados();
	dibujar_Estrella();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); // inicia la libreria GLUT  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // configura el modo de video inicial 
	glutInitWindowSize(640, 580); // Tamaño de la Ventana  
	glutInitWindowPosition(500, 250);
	glutCreateWindow("ONCELADOS 1 ESPECIE");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return EXIT_SUCCESS;
}