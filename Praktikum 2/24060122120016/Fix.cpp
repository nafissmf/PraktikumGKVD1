#include <gl/glut.h>
#include <gl/gl.h> 
#include <math.h>

void RenderScene() {
	glClear (GL_COLOR_BUFFER_BIT); 
	
	glPushMatrix();
	glLineWidth (1.0f); 
	glBegin (GL_QUADS);
		glColor3f (0.5f, 0.5f, 0.5f);
		glVertex3f (1.0, 0.3, 0.0);
		glVertex3f (-1.0, 0.3, 0.0);
		glVertex3f (-1.0, -0.25, 0.0);
		glVertex3f (1.0, -0.25, 0.0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glLineWidth (1.0f); 
	glBegin (GL_QUADS);
		glColor3f (1.0f, 1.0f, 1.0f);
		glVertex3f (1.0, 0.3, 0.0);
		glVertex3f (-1.0, 0.3, 0.0);
		glVertex3f (-1.0, 0.25, 0.0);
		glVertex3f (1.0, 0.25, 0.0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glLineWidth (1.0f); 
	glBegin (GL_QUADS);
		glColor3f (1.0f, 1.0f, 1.0f);
		glVertex3f (1.0, -0.3, 0.0);
		glVertex3f (-1.0, -0.3, 0.0);
		glVertex3f (-1.0, -0.25, 0.0);
		glVertex3f (1.0, -0.25, 0.0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glLineWidth (2.0f); 
	glBegin (GL_POLYGON);
		glColor3f (0.0f, 1.0f, 1.0f); 
		glVertex3f (0.4, 0.4, 0.0); 
		glVertex3f (-0.2, 0.4, 0.0);
		glVertex3f (-0.3, 0.2, 0.0);
		glVertex3f (-0.6, 0.2, 0.0);
		glVertex3f (-0.6, 0.0, 0.0);
		glVertex3f (0.6, 0.0, 0.0);
		glVertex3f (0.6, 0.2, 0.0);
		glVertex3f (0.4, 0.4, 0.0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.3, 0.0, 0.0);
	#define PI 3.1415926535898
	glBegin (GL_POLYGON);
		glColor3f(0.0f, 0.0f, 0.0f);
		GLint circle_points = 100; 
		int i;
		float angle;
		for (i=0; i < circle_points; i++) { 
			angle = 2*PI*i/circle_points;
			glVertex2f(cos (angle)/8, sin(angle)/8);
		}
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.3, 0.0, 0.0);
	glBegin (GL_POLYGON);
		glColor3f(0.0f, 0.0f, 0.0f);
		GLint circle_points2 = 100;
		int i2;
		float angle2;
		for (i=0; i < circle_points2; i++) {
			angle2 = 2*PI*i/circle_points2;
			glVertex2f(cos (angle2)/8, sin(angle2)/8);
		}
	glEnd();
	glPopMatrix();
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize (640,480);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA); 
	glutCreateWindow("Simple");
	glutDisplayFunc (RenderScene);
	glClearColor (0.0f, 0.0f, 0.0f, 0.0f); 
	glutMainLoop();
	return 0;
}
