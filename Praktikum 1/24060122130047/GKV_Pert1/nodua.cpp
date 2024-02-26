////Nama: Tirza Aurellia Wijaya
////NIM: 24060122130047
////Membuat titik dan garis dengan GL_LINE dan GL_POINT
//#include <GLUT/glut.h>
//#include <stdlib.h>
//
//void enamfungsi(void){
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    //MENGGAMBAR GL_LINE_STRIP
//    glBegin(GL_LINE_STRIP);
//    glColor3f(0.5,0.5, 0.5);
//    glVertex2f(-0.8, -0.4);
//    glVertex2f(-0.7, -0.4);
//    glVertex2f(-0.6, -0.2);
//    glVertex2f(-0.3, -0.2);
//    glEnd();
//    
//    //MENGGAMBAR GL_LINE_LOOP
//    glBegin(GL_LINE_LOOP);
//    glColor3f(1.0, 0.0, 0.0);
//    glVertex2f(-0.5, -0.8);
//    glVertex2f(0.1, -0.5);
//    glVertex2f(0.0, -0.3);
//    glVertex2f(-0.4, -0.2);
//    glEnd();
//    
//    //MENGGAMBAR GL_TRIANGLE_FAN
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(1.0, 0.0, 1.0);
//    glVertex2f(0.1, 0.5);
//    glVertex2f(0.3, 0.5);
//    glVertex2f(0.4, 0.2);
//    glVertex2f(0.6, 0.1);
//    glVertex2f(0.2, 0.1);
//    glEnd();
//    
//    //MENGGAMBAR GL_TRIANGLE_STRIP
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(0.5,0.5, 0.5);
//    glVertex2f(0.1, -0.1);
//    glVertex2f(0.2, -0.1);
//    glVertex2f(-0.3, 0.4);
//    glVertex2f(-0.4, 0.4);
//    glEnd();
//    
//    //MENGGAMBAR GL_QUADS
//    glBegin(GL_QUADS);
//    glColor3f(0.25, 1.0, 0.5);
//    glVertex2f(0.2, -0.5);
//    glVertex2f(0.1, -0.5);
//    glVertex2f(0.1, -0.2);
//    glVertex2f(0.2, -0.2);
//    glEnd();
//    
//    //MENGGAMBAR GL_QUAD_STRIP
//    glBegin(GL_QUAD_STRIP);
//    glColor3f(0.0, 0.5, 1.0);
//    glVertex2f(0.4, 0.5);
//    glVertex2f(0.9, 0.8);
//    glVertex2f(0.7, 0.2);
//    glVertex2f(0.8, 0.2);
//    glEnd();
//    
//    glFlush();
//}
//
//
//int main(int argc, char*argv[]){
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
//    glutCreateWindow("6 fungsi");
//    glutDisplayFunc(enamfungsi);
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}
