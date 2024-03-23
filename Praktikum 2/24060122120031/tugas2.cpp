/*
    Nama: Bintang Syafrian Rizal
    NIM : 24060122120031
    Lab : D1

    Tugas 2
*/

#include <windows.h>
#include <gl/glut.h>
#include <math.h>

void Display(void)
{   
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    //Mobil F1
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0, 0); 
    glVertex3f(-45.0f, 0.0f, -15.0f);
    glVertex3f(25.0f, 0.0f, -15.0f);
    glColor3f(1, 1, 1); 
    glVertex3f(55.0f, -15.0f, -15.0f);
    glVertex3f(-40.0f, -15.0f, -15.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0, 0); 
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

    //Jalan Raya

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(99000, -30);
    glVertex2d(-2500, -30);
    glVertex2d(-2500, -25);
    glVertex2d(99000, -25);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(99000, -50);
    glVertex2d(-2500, -50);
    glVertex2d(-2500, -45);
    glVertex2d(99000, -45);
    glEnd();

    glColor3ub(100, 100, 100);
    glBegin(GL_POLYGON);
    glVertex2d(99000, -180);
    glVertex2d(-2500, -180);
    glVertex2d(-2500, -7);
    glVertex2d(99000, -7);
    glEnd();

    // Awan
    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_POLYGON);
    glVertex2d(60, 70);
    glVertex2d(90, 70);
    glVertex2d(90, 60);
    glVertex2d(60, 60);
    glEnd();

    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_POLYGON);
    glVertex2d(70, 80);
    glVertex2d(100, 80);
    glVertex2d(100, 70);
    glVertex2d(70, 70);
    glEnd();

    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_POLYGON);
    glVertex2d(80, 90);
    glVertex2d(110, 90);
    glVertex2d(110, 80);
    glVertex2d(80, 80);
    glEnd();

    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_POLYGON);
    glVertex2d(-60, 70);
    glVertex2d(-90, 70);
    glVertex2d(-90, 60);
    glVertex2d(-60, 60);
    glEnd();

    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_POLYGON);
    glVertex2d(-70, 80);
    glVertex2d(-100, 80);
    glVertex2d(-100, 70);
    glVertex2d(-70, 70);
    glEnd();

    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_POLYGON);
    glVertex2d(-80, 60);
    glVertex2d(-100, 60);
    glVertex2d(-100, 50);
    glVertex2d(-80, 50);
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
    glLoadIdentity();
    glClearColor(0.529, 0.808, 0.922, 1.0);
    glClearColor(0.529, 0.808, 0.922, 1.0);
    glClearColor(0.529, 0.694, 0.922, 1.0);
    glOrtho (-100, 100, -100, 100,-100, 100);
    glutKeyboardFunc(SpecialKeys);
    glutDisplayFunc(Display);

    glutMainLoop();
    return 0;
}
