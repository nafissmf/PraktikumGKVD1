/*
    Nama: Bintang Syafrian Rizal
    NIM : 24060122120031
    Lab : D1

    Tugas 1.2
*/

#include <gl/glut.h>

void eightfigure(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3ub(248, 222, 34); // warna kuning
	glRectf(-0.1, 0.1, 0.1, -0.1);
	
	glColor3ub(163, 103, 177); // warna ungu
	glRectf(-0.35, 0.35, -0.15, 0.15);
    glRectf(0.15, 0.35, 0.35, 0.15);
    
    glColor3ub(255, 192, 217); // warna pink    
	glRectf(-0.1, 0.6,  0.1, 0.4); 
	glRectf(-0.1, -0.6, 0.1, -0.4); 

	glColor3ub(255, 0, 77); // warna merah
	glRectf(-0.35, -0.35, -0.15, -0.15);
	glRectf(0.15, -0.35, 0.35, -0.15);
	
	glFlush();
}


int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus Eight Figure");
    glutDisplayFunc(eightfigure);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 
