#include <GL/glut.h>

void display1() {
	//GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
	glVertex2i(135, 160);
    glVertex2i(75, 210);
    glVertex2i(255, 210);
    glVertex2i(255, 360);
    glVertex2i(320, 310);
    glVertex2i(260, 260);
    glVertex2i(260, 260);
    glVertex2i(260, 210);
    glVertex2i(435, 210);
    glVertex2i(365, 160);
    glEnd();
    
    // GL_TRIANGLE_STRIP
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(260, 347);
    glVertex2f(260, 310);
    glVertex2f(310, 310);
    glEnd();
    
    // GL_TRIANGLE_STRIP2
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(260, 273);
    glVertex2f(260, 310);
    glVertex2f(310, 310);
    glEnd();
    
    // GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glVertex2f(125, 25);
    glVertex2f(125, 100);
    glVertex2f(175, 100);
    glVertex2f(175, 85);
    glVertex2f(135, 85);
    glVertex2f(135, 75);
    glVertex2f(175, 75);
    glVertex2f(175, 60);
    glVertex2f(135, 60);
    glVertex2f(135, 25);
    glVertex2f(125, 25);
    glEnd();
    
    // GL_QUADS
    glBegin(GL_QUADS);
    glVertex2i(105, 25);
    glVertex2i(105, 100);
    glVertex2i(115, 100);
    glVertex2i(115, 25);
    glEnd();
    
    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.6f, 0.9f, 0.7f);
    glVertex2i(197, 90);
    glVertex2i(187, 62);
    glVertex2i(299, 70);
    glVertex2i(201, 49);
    glEnd();
    
    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(135,165);
    glVertex2f(135,205);
    glColor3f(0.0f, 1.0f, 0.0f); 
    glVertex2f(257,165);
    glVertex2f(257, 205);
    glColor3f(0.0f, 0.0f, 1.0f); 
    glVertex2f(367, 165);
    glVertex2f(367, 205);
    glEnd();
    
    
    
    glFlush();
}

// Main
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Nomor 1 & 2");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
    glutDisplayFunc(display1);
    glutMainLoop();
    return 0;
}
