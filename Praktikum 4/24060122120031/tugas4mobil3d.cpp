/*
    Nama: Bintang Syafrian Rizal
    NIM : 24060122120031
    Lab : D1

    Tugas 4 Mobil 3D
*/

#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<GL/glut.h>
#include <math.h>
#include <string.h>
float theta;
GLfloat xt = 0.0, yt = 0.0, zt = 0.0;
bool open = 0;
GLfloat xangle = 7, yangle = 20;

static void onMouseButton(int Key, int state, int x, int y) {
    switch (Key) {
        case GLUT_LEFT_BUTTON :
            xt -= 0.1;
            glutPostRedisplay();
            break;

        case GLUT_RIGHT_BUTTON :
            xt += 0.1;
            glutPostRedisplay();
            break;
    }
}


GLvoid DrawGLScene() {
// initially
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();//

    glClearColor(0, 250, 250, 0); //bgcolor
    glViewport(0, 0, 1366, 768);
    gluPerspective(100, 1366 / 768, 0.1, 150);


    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity();
    glTranslatef(0, 0, -3.5);

    glRotatef(xangle, 1.0, 0.0, 0.0);
    glRotatef(yangle, 0.0, 1.0, 0.0);
    glTranslatef(xt, yt, zt);

    //front
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);

    // up
    glVertex3f(0.2, 0.4, 0.6);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.2, 0.4, 0.2);

    // front
    glVertex3f(0.2, 0.2, 0.6);
    glVertex3f(0.2, 0.4, 0.6);
    glVertex3f(0.2, 0.4, 0.2);
    glVertex3f(0.2, 0.2, 0.2);

    //back
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.6, 0.2, 0.2);

    //left
    glVertex3f(0.2, 0.2, 0.6);
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.2, 0.4, 0.6);

    // right
    glVertex3f(0.2, 0.2, 0.2);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.2, 0.4, 0.2);



    glVertex3f(0.7, 0.65, 0.6);
    glVertex3f(0.7, 0.65, 0.2);
    glVertex3f(1.7, 0.65, 0.2);
    glVertex3f(1.7, 0.65, 0.6);
    //back

    // up
    glVertex3f(1.8, 0.5, 0.6);
    glVertex3f(1.8, 0.5, 0.2);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1, 0.4, 0.6);

    // back
    glVertex3f(2.1, 0.4, 0.6);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1, 0.2, 0.2);
    glVertex3f(2.1, 0.2, 0.6);

    // left
    glVertex3f(1.8, 0.2, 0.2);
    glVertex3f(1.8, 0.5, 0.2);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1, 0.2, 0.2);

    // Right
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8, 0.5, 0.6);
    glVertex3f(2.1, 0.4, 0.6);
    glVertex3f(2.1, 0.2, 0.6);


        // front
        glVertex3f(0.6, 0.5, 0.6);
        glVertex3f(0.6, 0.2, 0.6);
        glVertex3f(1.8, 0.2, 0.6);
        glVertex3f(1.8, 0.5, 0.6);
        
        glColor3f(0.7,0.1,0.1);

    //bottom
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.6);
    //back
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.2);
    glVertex3f(1.8, 0.5, 0.2);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.77, 0.63, 0.2);
    glVertex3f(0.75, 0.5, 0.2);        //front 1
    glVertex3f(1.2, 0.5, 0.2);
    glVertex3f(1.22, 0.63, 0.2);

    glVertex3f(1.27, 0.63, .2);
    glVertex3f(1.25, 0.5, 0.2);        //back1
    glVertex3f(1.65, 0.5, 0.2);
    glVertex3f(1.67, 0.63, 0.2);

    glVertex3f(0.77, 0.63, 0.6);
    glVertex3f(0.75, 0.5, 0.6);        //front 2
    glVertex3f(1.2, 0.5, 0.6);
    glVertex3f(1.22, 0.63, 0.6);

    glVertex3f(1.27, 0.63, .6);
    glVertex3f(1.25, 0.5, 0.6);        //back2
    glVertex3f(1.65, 0.5, 0.6);
    glVertex3f(1.67, 0.63, 0.6);

    //Jalan
    glColor3f(0, 0.7, 0);
    glVertex3f(-1000, 0.1, -1000);
    glVertex3f(-100, 0.1, 0);         //Rumput
    glVertex3f(100, 0.1, 0);
    glVertex3f(1000, 0.1, -1000);

    glColor3f(0, 0, 0);
    glVertex3f(-100, 0.1, 0);
    glVertex3f(-100, 0.1, 0.45);
    glVertex3f(100, 0.1, 0.45);
    glVertex3f(100, 0.1, 0);

    glColor3f(250, 250, 250);
    glVertex3f(-100, 0.1, 0.45);  
    glVertex3f(-100, 0.1, 0.55);
    glVertex3f(100, 0.1, 0.55);
    glVertex3f(100, 0.1, 0.45);

    glColor3f(0, 0, 0);
    glVertex3f(-100, 0.1, 0.55);
    glVertex3f(-100, 0.1, 1); 
    glVertex3f(100, 0.1, 1);
    glVertex3f(100, 0.1, 0.55);

    glColor3f(0, 0.7, 0);;
    glVertex3f(-1000, 0.1, 1);
    glVertex3f(-1000, 0.1, 1000);
    glVertex3f(1000, 0.1, 1000);
    glVertex3f(1000, 0.1, 1);

    glEnd();
    glPushMatrix();

    glColor3f(0, 0, 0);

    glTranslatef(0.6, 0.2, 0.6); 
    glutSolidTorus(0.025, 0.07, 6, 25);

    glTranslatef(0, 0, -0.4); 
    glutSolidTorus(0.025, 0.07, 10, 25);

    glTranslatef(1.1, 0, 0); 
    glutSolidTorus(0.025, 0.07, 10, 25);

    glTranslatef(0, 0, 0.4);
    glutSolidTorus(0.025, 0.07, 10, 25);

    glTranslatef(-4, 1, 0.6); 

    //Awan
    glColor3f(1, 1, 1);//warna
    glTranslatef(1, 0, 0); 
    glutSolidTorus(0.4, 0.07, 7, 2.8888888888); 

    glColor3f(1, 1, 1);
    glTranslatef(-1, 0, 0);
    glutSolidTorus(0.4, 0.07, 7, 2.8888888888);


    glColor3f(1, 1, 1);
    glTranslatef(3, 0, 0); 
    glutSolidTorus(0.4, 0.07, 7, 2.8888888888);

    glColor3f(1, 1, 1);
    glTranslatef(3, 0, 0); 
    glutSolidTorus(0.4, 0.07, 7, 2.8888888888);

    glColor3f(1, 1, 1);
    glTranslatef(1.5, 0, 0);
    glutSolidTorus(0.4, 0.07, 7, 2.8888888888);


    glColor3f(1, 1, 1);
    glTranslatef(1.5, 0, 0); 
    glutSolidTorus(0.4, 0.07, 7, 2.8888888888);


    glEnable(GL_DEPTH_TEST);
    glutPostRedisplay();
    glutSwapBuffers();
}

void NormalKey(GLubyte key, GLint x, GLint y) {
    DrawGLScene();
    switch (key) {
        case 'w':
            xangle += 5.0;
            glutPostRedisplay();
            break;

        case 's':
            xangle -= 5.0;
            glutPostRedisplay();
            break;

        case 'a':
            yangle += 5.0;
            glutPostRedisplay();
            break;

        case 'd':
            yangle -= 5.0;
            glutPostRedisplay();
            break;

        case '+':
            zt += 0.2;
            glutPostRedisplay();
            break;

        case '-':
            zt -= 0.2;
            glutPostRedisplay();
            break;
        default:
            break;
    }

}
int main(int argc, char **argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGBA |
                        GLUT_DOUBLE |
                        GLUT_DEPTH);

    glutInitWindowSize(1366, 768);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Mobil 3D");
    glutDisplayFunc(DrawGLScene);
    glutKeyboardFunc(NormalKey);
    glutMouseFunc(onMouseButton);
    glutMainLoop();
    return 1;
}