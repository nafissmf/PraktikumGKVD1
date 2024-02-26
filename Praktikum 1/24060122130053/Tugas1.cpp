//#include <GL/glut.h>
//
//void tugas1(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    // GL_LINE_STRIP
//    glBegin(GL_LINE_STRIP);
//    glColor3f(0.9, 0.3, 0.3); glVertex2f(-0.9, 0.5);
//    glColor3f(0.3, 0.9, 0.3); glVertex2f(-0.6, 0.5);
//    glColor3f(0.3, 0.3, 0.9); glVertex2f(-0.6, 0.2);
//    glEnd();
//
//    // GL_LINE_LOOP
//    glBegin(GL_LINE_LOOP);
//    glColor3f(0.3, 0.9, 0.3); glVertex2f(-0.4, 0.5);
//    glColor3f(0.3, 0.3, 0.9); glVertex2f(-0.1, 0.5);
//    glColor3f(0.9, 0.9, 0.3); glVertex2f(-0.1, 0.2);
//    glEnd();
//
//    // GL_TRIANGLE_FAN
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(0.3, 0.3, 0.9); glVertex2f(0.05, 0.3);
//    glColor3f(0.3, 0.3, 0.9); glVertex2f(0.1, 0.425);
//    glColor3f(0.9, 0.9, 0.3); glVertex2f(0.2, 0.5);
//    glColor3f(0.9, 0.9, 0.3); glVertex2f(0.3, 0.5);
//    glColor3f(0.9, 0.3, 0.3); glVertex2f(0.4, 0.425);
//    glColor3f(0.9, 0.3, 0.3); glVertex2f(0.45, 0.3);
//    glColor3f(0.3, 0.9, 0.3); glVertex2f(0.25, 0.2);
//
//    glEnd();
//
//    // GL_TRIANGLE_STRIP
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(0.9, 0.9, 0.3); glVertex2f(0.5, 0.5);
//    glColor3f(0.3, 0.3, 0.9); glVertex2f(0.7, 0.5);
//    glColor3f(0.9, 0.3, 0.3); glVertex2f(0.8, 0.1);
//    glColor3f(0.3, 0.9, 0.3); glVertex2f(0.8, 0.5);
//    glColor3f(0.9, 0.9, 0.3); glVertex2f(0.5, 0.1);
//    glEnd();
//
//    // GL_QUADS
//    glBegin(GL_QUADS);
//    glColor3f(0.3, 0.9, 0.9); glVertex2f(-0.9, -0.5);
//    glColor3f(0.9, 0.3, 0.9); glVertex2f(-0.6, -0.5);
//    glColor3f(0.9, 0.9, 0.3); glVertex2f(-0.6, -0.2);
//    glColor3f(0.3, 0.3, 0.9); glVertex2f(-0.9, -0.2);
//    glEnd();
//
//    // GL_QUAD_STRIP
//    glBegin(GL_QUAD_STRIP);
//    glColor3f(0.3, 0.9, 0.3); glVertex2f(-0.4, -0.5);
//    glColor3f(0.9, 0.3, 0.3); glVertex2f(-0.1, -0.5);
//    glColor3f(0.9, 0.9, 0.3); glVertex2f(-0.35, -0.2);
//    glColor3f(0.3, 0.3, 0.9); glVertex2f(-0.15, -0.2);
//    glEnd();
//
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutCreateWindow("Tugas 1");
//    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
//    glutDisplayFunc(tugas1);
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}

