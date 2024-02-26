#include <GL/glut.h>

void display() {   
    
    glBegin(GL_QUADS);
    glVertex2i(150, 170);
    glVertex2i(150, 200);
    glVertex2i(172, 200);
    glVertex2i(172, 170);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 0.8f);
    glVertex2i(160, 200);
    glVertex2i(160, 230);
    glVertex2i(182, 230);
    glVertex2i(182, 200);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(140, 230);
    glVertex2i(140, 260);
    glVertex2i(162, 260);
    glVertex2i(162, 230);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 0.8f);
    glVertex2i(160, 260);
    glVertex2i(160, 290);
    glVertex2i(182, 290);
    glVertex2i(182, 260);
    glEnd();
    
    //T
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(242, 170);
    glVertex2i(242, 200);
    glVertex2i(273, 200);
    glVertex2i(273, 170);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.6f);
    glVertex2i(223, 200);
    glVertex2i(223, 230);
    glVertex2i(245, 230);
    glVertex2i(245, 200);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.6f);
    glVertex2i(246, 200);
    glVertex2i(246, 230);
    glVertex2i(268, 230);
    glVertex2i(268, 200);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.6f);
    glVertex2i(269, 200);
    glVertex2i(269, 230);
    glVertex2i(291, 230);
    glVertex2i(291, 200);
    glEnd();
    
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.6f);
    glVertex2i(210, 230);
    glVertex2i(210, 260);
    glVertex2i(232, 260);
    glVertex2i(232, 230);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.7f, 0.6f);
    glVertex2i(235, 230);
    glVertex2i(235, 260);
    glVertex2i(257, 260);
    glVertex2i(257, 230);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.7f, 0.6f);
    glVertex2i(260, 230);
    glVertex2i(260, 260);
    glVertex2i(282, 260);
    glVertex2i(282, 230);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.6f);
    glVertex2i(285, 230);
    glVertex2i(285, 260);
    glVertex2i(307, 260);
    glVertex2i(307, 230);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.6f);
    glVertex2i(223, 260);
    glVertex2i(223, 290);
    glVertex2i(245, 290);
    glVertex2i(245, 260);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.6f);
    glVertex2i(246, 260);
    glVertex2i(246, 290);
    glVertex2i(268, 290);
    glVertex2i(268, 260);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.6f);
    glVertex2i(269, 260);
    glVertex2i(269, 290);
    glVertex2i(291, 290);
    glVertex2i(291, 260);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2i(260, 290);
    glVertex2i(260, 320);
    glVertex2i(282, 320);
    glVertex2i(282, 290);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2i(235, 290);
    glVertex2i(235, 320);
    glVertex2i(257, 320);
    glVertex2i(257, 290);
    glEnd();
//    
//    glBegin(GL_QUADS);
//    glColor3f(0.4f, 0.0f, 0.6f);
//    glVertex2i(269, 230);
//    glVertex2i(269, 260);
//    glVertex2i(291, 260);
//    glVertex2i(291, 230);
//    glEnd();
    
//    glBegin(GL_QUADS);
//    glColor3f(0.0f, 0.7f, 0.8f);
//    glVertex2i(227, 200);
//    glVertex2i(227, 230);
//    glVertex2i(249, 230);
//    glVertex2i(249, 200);
//    glEnd();
    
//    glBegin(GL_QUADS);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glVertex2i(242, 230);
//    glVertex2i(242, 260);
//    glVertex2i(264, 260);
//    glVertex2i(264, 230);
//    glEnd();
    
    
    
    
    
    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(130,135);
    glVertex2f(130,170);
    glColor3f(0.0f, 1.0f, 0.0f); 
    glVertex2f(237,135);
    glVertex2f(237, 170);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(297, 135);
    glVertex2f(297, 170);
    glEnd();
    
    
    
    glFlush();
}

// Main
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Nomor 3");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
