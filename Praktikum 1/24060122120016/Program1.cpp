//#include <GL/glut.h>
//
//void GARIS (void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glBegin(GL_LINES);
//    glLineWidth(2.0f);
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(0.2, 0.0, 0.0); // Garis kiri
//    glVertex3f(-0.2, -0.7, 0.0); // Garis kiri
//    glVertex3f(0.2, 0.0, 0.0); // Garis kanan
//    glVertex3f(0.6, -0.7, 0.0); // Garis kanan
//    glVertex3f(0.6, -0.7, 0.0); // Garis Bawah
//    glVertex3f(-0.2, -0.7, 0.0); // Garis Bawah
//    glVertex3f(-0.2, -0.7, 0.0);
//    glVertex3f(0.2, 0.7, 0.0);
//    glVertex3f(0.6, -0.7, 0.0);
//    glVertex3f(0.2, 0.7, 0.0);
//	glEnd();
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Membuat Segitiga");
//    glutDisplayFunc(GARIS);
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}

#include <GL/glut.h>

void Titik (void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glPointSize(5.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.2, 0.0, 0.0); // Titik kiri
    glVertex3f(-0.2, -0.7, 0.0); // Titik kiri
    glVertex3f(0.2, 0.0, 0.0); // Titik kanan
    glVertex3f(0.6, -0.7, 0.0); // Titik kanan
    glVertex3f(0.6, -0.7, 0.0); // Titik Bawah
    glVertex3f(-0.2, -0.7, 0.0); // Titik Bawah
    glVertex3f(-0.2, -0.7, 0.0); 
    glVertex3f(0.2, 0.7, 0.0);
    glVertex3f(0.6, -0.7, 0.0);
    glVertex3f(0.2, 0.7, 0.0);
	glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Titik");
    glutDisplayFunc(Titik);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}
