/*
    Nama: Bintang Syafrian Rizal
    NIM : 24060122120031
    Lab : D1

    Tugas 1.1
*/

#include <gl/glut.h>

void starboy(void) {
    
    glClear(GL_COLOR_BUFFER_BIT);

    //GL_LINE_STRIP bentuk nadi jantung
    glLineWidth(7.0f);

    glBegin(GL_LINE_STRIP);
    glColor3ub(57,255,30); 
    glVertex2f(-0.2, 0.7);

    glColor3ub(57,255,30); 
    glVertex2f(-0.2, 0.5);
    glVertex2f(0.1, 0.3);

    glColor3ub(57,255,30); 
    glVertex2f(-0.2, 0.1);

    glColor3ub(57,255,30); 
    glVertex2f(-0.2, -0.1);

    glColor3ub(57,255,30); 
    glVertex2f(-0.5, -0.3);

    glColor3ub(57,255,30); 
    glVertex2f(-0.2, -0.5);

    glColor3ub(57,255,30); 
    glVertex2f(-0.2, -0.7);

    glEnd();


    //GL_LINE_LOOP bentuk busur panah
	glLineWidth(8.0f);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 185, 0);
	glVertex2f(0.9, -0.15);
	
	glColor3ub(53, 55, 75);
	glVertex2f(0.9, -0.3);
	
	glColor3ub(52, 73, 120);
	glVertex2f(0.75, -0.45);
	
	glColor3ub(82, 146, 124);
	glVertex2f(0.6, -0.5);
	
	glColor3ub(120, 160, 131);
	glVertex2f(0.6, -0.5);
	glEnd();
	
    //GL_TRIANGLE_FAN Segitiga membentuk kipas
	glLineWidth(5.0f);
	glBegin(GL_TRIANGLE_FAN);
	
	glColor3ub(255, 146, 133);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.2, 0.3);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.35, 0.05);
	glVertex2f(0.3, 0.1);
	glVertex2f(0.2, 0.2);

	glEnd();
    
	//GL_TRIANGLE_STRIP bentuk kotak tiga dimensi
	glLineWidth(6.0f);
    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(265,55,59);
	glVertex2f(-0.90, 0.50);
	glVertex2f(-0.60, 0.50);
	glVertex2f(-0.60, 0.10);
	
	glColor3ub(123, 179, 255);
	glVertex2f(-0.90, 0.20);
	glVertex2f(-0.90, 0.50);
	glVertex2f(-0.60, 0.50);
	glEnd();
	
	//GL_QUADS
	glLineWidth(4.0f);
	
	glBegin(GL_QUADS);

	glColor3ub(122,17,123);
	glVertex2f(0.05, -0.45);
	glVertex2f(0.45, -0.45);
	glVertex2f(0.45, -0.20);
	glVertex2f(0.05, -0.20);
	
	glColor3ub(88,56,124);
	glVertex2f(0.20, -0.40);
	glColor3ub(103,56,136);
	glVertex2f(0.30, -0.40);
	
	glColor3ub(239,79,145);
	glVertex2f(0.30, -0.10);
	glColor3ub(199,157,215);
	glVertex2f(0.20, -0.10);
	
	glEnd();
	
	//GL_QUAD_STRIP warna pink
	glBegin(GL_QUAD_STRIP);
	
	glColor3ub(255,89,143);
	glVertex2f(0.70, -0.20);
	glVertex2f(0.70, 0.20);
	glVertex2f(0.60, -0.20);
	glVertex2f(0.60, 0.20);
	glVertex2f(0.50, -0.30);
	glVertex2f(0.50, 0.30);

	glEnd();
	glFlush();

}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(720,640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas 1.1");
    glutDisplayFunc(starboy);
    glClearColor(0.8f,0.8f,0.8f,0.8f);
    glutMainLoop();
    return 0;
} 
