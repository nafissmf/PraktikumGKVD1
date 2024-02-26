// Nama Pembuat		: Fendi Ardianto
// NIM				: 24060122130077
// Lab				: D1

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Menggambar menggunakan GL_LINE_STRIP
    glColor3f(1.0, 0.0, 0.0);  // Merah
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.4, 0.8);
    glVertex2f(-0.7, 0.8);
    glVertex2f(-0.7, 0.55);
    glVertex2f(-0.4, 0.55);
    glVertex2f(-0.4, 0.675);
    glVertex2f(-0.55, 0.675);

    glEnd();

    // Menggambar menggunakan GL_LINE_LOOP
    glColor3f(0.0, 1.0, 0.0);  // Hijau
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.4, 0.8);
    glVertex2f(0.1, 0.8);
    glVertex2f(0.1, 0.55);
    glVertex2f(0.4, 0.55);
    glVertex2f(0.4, 0.675);
    glVertex2f(0.25, 0.675);
    glEnd();

    // Menggambar menggunakan GL_TRIANGLE_FAN
    glColor3f(0.0, 0.0, 1.0);  // Biru
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.55, -0.15);
    glVertex2f(-0.7, 0.2);
    glVertex2f(-0.6, 0.25);
    glVertex2f(-0.5, 0.25);
    glVertex2f(-0.4, 0.2);
    glEnd();

    // Menggambar menggunakan GL_TRIANGLE_STRIP
    glColor3f(1.0, 1.0, 0.0);  // Kuning
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.2, -0.2);
    glVertex2f(0.4, -0.03);
    glVertex2f(0.6, -0.1);
    glVertex2f(0.8, 0.04);
    glVertex2f(0.5, 0.1);
	glEnd();

    // Menggambar menggunakan GL_QUADS
    glColor3f(1.0, 0.0, 1.0);  // Ungu
    glBegin(GL_QUADS);
    glVertex2f(-0.8, -0.7);
    glVertex2f(-0.6, -0.4);
    glVertex2f(-0.25, -0.5);
    glVertex2f(-0.4, -0.75);
    glEnd();

    // Menggambar menggunakan GL_QUAD_STRIP
    glColor3f(0.5, 0.5, 0.5);  // Abu-abu
    glBegin(GL_QUAD_STRIP);
    glVertex2f(0.25, -0.9);
    glVertex2f(0.65, -0.9);
    glVertex2f(0.3, -0.7);
    glVertex2f(0.6, -0.7);
    glVertex2f(0.3, -0.4);
    glVertex2f(0.6, -0.4);



    glEnd();

    glFlush();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Soal 1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

