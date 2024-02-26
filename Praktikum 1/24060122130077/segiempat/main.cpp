// Nama Pembuat		: Fendi Ardianto
// NIM				: 24060122130077
// Lab				: D1


#include <GL/glut.h>

void LimaPersegi(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5f, 0.5f, 1.0f);

    // Persegi pertama
    glRectf(-0.4, -0.1, -0.2, -0.3);

    // Persegi kedua
    glRectf(-0.15, -0.1, 0.05, -0.3);

    // Persegi ketiga
    glRectf(0.1, -0.1, 0.3, -0.3);

    // Persegi keempat
    glRectf(-0.25, 0.1, -0.05, -0.1);

    // Persegi kelima
    glRectf(0.0, 0.1, 0.2, -0.1);

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Lima Persegi");
    glutDisplayFunc(LimaPersegi);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

