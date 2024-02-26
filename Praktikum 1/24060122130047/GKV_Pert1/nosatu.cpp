//Nama: Tirza Aurellia Wijaya
//NIM: 24060122130047
//Membuat titik dan garis dengan GL_LINE dan GL_POINT
#include <GLUT/glut.h>

#include <stdlib.h>

void Point_Line(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    //Membuat garis menggunakan GL_LINE
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.30, 0.30);
      glVertex2f(-0.30, -0.30);
      glVertex2f(0.90, 0.90);
      glVertex2f(-0.90, -0.90);
      glEnd();
      //Membuat titik menggunakan GL_POINTS
      glPointSize(10.0);
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.00, 0.0, 0.0);
    glVertex3f(0.20, 0.20, 0.0);
    glVertex3f(-0.20, -0.20, 0.0);
    glVertex3f(0.40, 0.40, 0.0);
    glVertex3f(-0.40, -0.40, 0.0);
    glEnd();
      
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("membuat titik menggunakan GL_POINT dan garis menggunakan GL_LINES");
    glutDisplayFunc(Point_Line);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
