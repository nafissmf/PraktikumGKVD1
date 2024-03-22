/*
    Nama: Bintang Syafrian Rizal
    NIM : 24060122120031
    Lab : D1

    Tugas 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <gl/glut.h>

static int  shoulder = 0,
            elbow = 0,
            palm = 0,
            index1 = 0,
            index2 = 0,
            middle1 = 0,
            middle2 = 0,
            ring1 = 0,
            ring2 = 0,
            pinkie1 = 0,
            pinkie2 = 0,
            thumb = 0;

void init(void){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_SMOOTH);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    GLfloat mat_ambient[] = { 0.8, 0.6, 0.5, 1.0 }; 
    GLfloat mat_diffuse[] = { 0.8, 0.6, 0.5, 1.0 };
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat shininess[] = { 100.0 }; 

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);

    glPushMatrix();
    //Bahu
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat) shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();
    //Siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat) elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();
    //Telapak
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat) palm, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(1.0, 0.4 ,1.0);
    glutSolidCube(1.0);
    glPopMatrix();
    //Telunjuk
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glRotatef((GLfloat) index1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    //Telinjuk2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat) index2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    glPopMatrix();
    //Tengah
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glRotatef((GLfloat) middle1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    //Tengah2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat) middle2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    glPopMatrix();
    //Manis
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.2);
    glRotatef((GLfloat) ring1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    //Manis2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat) ring2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    glPopMatrix();
    //Kelingking
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.4);
    glRotatef((GLfloat) pinkie1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    //Kelingking2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat) pinkie2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2 ,0.20);
    glutSolidCube(1.0);
    glPopMatrix();
    glPopMatrix();
    //Jempol
    glPushMatrix();
    glTranslatef(0.2, 0.0, 0.4);
    glRotatef((GLfloat) thumb, -1.0, 0.0, 0.0);
    glTranslatef(0.0, 0.0, 0.25);

    glPushMatrix();
    glScalef(0.2, 0.2 ,0.50);
    glutSolidCube(1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat) w / (GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'a': shoulder = (shoulder + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'A': shoulder = (shoulder - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 's': elbow = (elbow + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'S' : elbow = (elbow - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'd': palm = (palm + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'D': palm = (palm - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'h': index1 = (index1 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'H': index1 = (index1 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'y': index2 = (index2 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'Y': index2 = (index2 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'j': middle1 = (middle1 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'J': middle1 = (middle1 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'u': middle2 = (middle2 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'U': middle2 = (middle2 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'k': ring1 = (ring1 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'K': ring1 = (ring1 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'i': ring2 = (ring2 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'I': ring2 = (ring2 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'l': pinkie1 = (pinkie1 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'L': pinkie1 = (pinkie1 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'o': pinkie2 = (pinkie2 + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'O': pinkie2 = (pinkie2 - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'w': thumb = (thumb + 5) % 360;
                  glutPostRedisplay();
                  break;
        case 'W': thumb = (thumb - 5) % 360;
                  glutPostRedisplay();
                  break;
        case 27: exit(0);
                 break;
        default: break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
