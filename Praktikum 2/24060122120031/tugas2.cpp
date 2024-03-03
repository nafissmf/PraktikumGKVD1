#include <windows.h>
#include <gl/glut.h>
#include <math.h>

void Display(void)
{   
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0, 0); 
    glVertex3f(-45.0f, 0.0f, -15.0f);
    glVertex3f(25.0f, 0.0f, -15.0f);
    glColor3f(1, 1, 1); 
    glVertex3f(55.0f, -15.0f, -15.0f);
    glVertex3f(-40.0f, -15.0f, -15.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0, 0, 0); // Red
    glVertex3f(-32.0f, 0.0f, 15.0f);
    glVertex3f(-5.0f, 10.0f, 15.0f);
    glVertex3f(15.0f, 10.0f, 15.0f);
    glVertex3f(3.0f, 0.0f, 15.0f);
    glEnd();

    glColor3f(0, 0, 0); 
    glTranslated(-20.0f, -15.0f, 15.0f);
    glutSolidTorus(2, 5, 5, 100);
    glTranslated(0.0f, 0.0f, -30.0f);
    glutSolidTorus(2, 5, 5, 100); 
    glTranslated(45.0f, 0.0f, 0.0f);
    glutSolidTorus(2, 5, 5, 100); 
    glTranslated(0.0f, 0.0f, 30.0f);
    glutSolidTorus(2, 5, 5, 100);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0, 0);
    glVertex3f(-40.0f, 0.0f, -15.0f);
    glVertex3f(-30.0f, 0.0f, 15.0f);
    glVertex3f(-10.0f, 5.0f, 15.0f);
    glVertex3f(-20.0f, 5.0f, 15.0f);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();
    glFlush();
}

void SpecialKeys(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'd':
            glTranslatef(+10,0.0,0.0);
            glutPostRedisplay();
            break;
        case 'a':
            glTranslatef(-10,0.0,0.0);
            glutPostRedisplay();
            break;
    }
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("F1 Ferrari by Bintang");
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClearColor(0.529, 0.808, 0.922, 1.0);
    glOrtho (-100, 100, -100, 100,-100, 100);
    glutKeyboardFunc(SpecialKeys);
    glutDisplayFunc(Display);

    glutMainLoop();
    return 0;
}
