#include <iostream> 
#include <gl/glut.h> 

struct Point {
	int x;
	int y;
};


Point p = { 280, 190 };

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//glColor3f(1.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-100.0, 100.0, -100.00, 100.0);

	///*glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();
}

void dibujar_punto(Point p1, Point p2)
{
	GLfloat dx = p2.x - p1.x;
	GLfloat dy = p2.y - p1.y;
	GLfloat x1 = p1.x;
	GLfloat y1 = p1.y;
	GLfloat limite = 0;
	if (abs(dx) > abs(dy))
	{
		limite = abs(dx);
	}
	else
	{
		limite = abs(dy);
	}

	GLfloat xInc = dx / limite;
	GLfloat yInc = dy / limite;

	for (float i = 1; i <= limite; i++)
	{
		glVertex2i(x1, y1);
		x1 += xInc;
		y1 += yInc;
	}
}

void dibujar_cuadrado
(
	//Point centro, GLint radio
)
{

	/*Point b = { a.x + tamanio, a.y },
		c = { b.x,	b.y + tamanio },
		d = { c.x - tamanio, c.y },
		e = { d.x, d.y + tamanio },
		f = { e.x + tamanio, e.y };
	dibujar_punto(a, b);
	dibujar_punto(b, c);
	dibujar_punto(c, d);
	dibujar_punto(d, e);
	dibujar_punto(e, f);
	dibujar_punto(f, a);*/

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINE_STRIP);
	glPointSize(10.0f);

	glColor3f(0.0, 1.0, 1.0);
	GLfloat vertices[][2] = { {0, 0.5}, {0.4, 0.3}, {0.25, -0.4}, {-0.25, -0.4}, {-0.4, 0.3} };
	
	glVertex2f(0, 35);
	glVertex2f(35, 0);
	glVertex2f(20,-45);
	glVertex2f(-20, -45);
	glVertex2f(-35,0);
	glVertex2f(0, 35);

	glEnd();

	glBegin(GL_LINE_STRIP);
	glPointSize(10.0f);

	glColor3f(0.0, 1.0, 1.0);

	glVertex2f(0, 35);
	glVertex2f(20, -45);
	glVertex2f(-35, 0);
	glVertex2f(35, 0);	
	glVertex2f(-20, -45);
	glVertex2f(0, 35);
	glEnd();
	glFlush();

	//glClear(GL_COLOR_BUFFER_BIT); // limpia la pantalla  
	//glBegin(GL_QUADS);
	//// Dibujamos un cuadrado  
	//glColor3f(0.0, 1.0, 1.0);
	//// Color para el cuadrado  
	//glVertex3f(0, 3, 1);
	//// Coordenadas del primer vértice (superior-izquierd  
	//glVertex3f(3, 3, 1);
	//// Coordenadas del segundo vértice (inferior-izquierda)  
	//glVertex3f(3, 0, 1);
	//// Coordenadas del primer vértice (inferio  r-derecha)  
	//glVertex3f(0, 0, 1);
	//// Coordenadas del primer vértice (superior-derecha)  
	//glEnd();
	//// Terminamos de dibujar    
	//glFlush();

	//glBegin(GL_LINE_STRIP);
	//const int lados = 10;
	//const GLfloat angulo = 2.0 * 3.1415926 / lados;

	//// Calcular los puntos del decágono
	//Point puntos[lados];
	//for (int i = 0; i < lados; i++) {
	//	GLfloat x = centro.x + radio * cos(i * angulo);
	//	GLfloat y = centro.y + radio * sin(i * angulo);
	//	puntos[i] = { (int)x, (int)y };
	//}

	//// Dibujar los segmentos del decágono
	//for (int i = 0; i < lados; i++) {
	//	dibujar_punto(puntos[i], puntos[(i + 1) % lados]);
	//}
	//glEnd();
}


void display()
{
	dibujar_cuadrado
	(
		//p, 100
	);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); // inicia la libreria GLUT  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // configura el modo de video inicial 
	glutInitWindowSize(640, 480); // Tamaño de la Ventana  
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Mover Cuadrado");
	init();
	glutDisplayFunc(dibujar_cuadrado);
	glutMainLoop();
	return EXIT_SUCCESS;
}