//#include <GL/glut.h>
//
//void LineStrip (void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glBegin(GL_LINE_STRIP);
//    glLineWidth(1.0f);
//    glColor3f(0.0f, 1.0f, 0.0f);
//	glVertex3f(0.0,0.5,0.0);
//	glVertex3f(0.1,0.4,0.0);
//	glVertex3f(0.2,0.5,0.0);
//	glVertex3f(0.3,0.4,0.0);
//	glVertex3f(0.4,0.5,0.0);
//	glVertex3f(0.5,0.4,0.0);
//	glEnd();
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Line Strip");
//    glutDisplayFunc(LineStrip);
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}
