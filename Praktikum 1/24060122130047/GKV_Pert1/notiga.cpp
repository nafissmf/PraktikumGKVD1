////Nama: Tirza Aurellia Wijaya
////NIM: 24060122130047
////Membuat titik dan garis dengan GL_LINE dan GL_POINT
//#include <GLUT/glut.h>
//#include <stdlib.h>
//
//void kubus(void){
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    //Kubus 1
//    glBegin(GL_QUADS);
//    glColor3f(1.0, 0.25, 0.5);
//    glVertex2f(-0.3, 0.3);
//    glVertex2f(-0.1, 0.3);
//    glVertex2f(-0.1, 0.5);
//    glVertex2f(-0.3, 0.5);    
//    glEnd();
//    
//    //Kubus 2
//    glBegin(GL_QUADS);
//    glColor3f(1.0, 0.5, 0.5);
//    glVertex2f(-0.5, 0.3);
//    glVertex2f(-0.3, 0.3);
//    glVertex2f(-0.3, 0.5);
//    glVertex2f(-0.5, 0.5);
//    glEnd();
//    
//    // Kubus 3
//    glBegin(GL_QUADS);
//    glColor3f(0.5, 0.5, 1.0); // Warna Kubus 3
//    glVertex2f(0.1, 0.3); // Samping kanan Kubus 1
//    glVertex2f(0.3, 0.3); // Samping kanan Kubus 1
//    glVertex2f(0.3, 0.5);
//    glVertex2f(0.1, 0.5);
//    glEnd();
//    
//    // Kubus 4
//    glBegin(GL_QUADS);
//    glColor3f(0.25, 0.25, 1.0);
//    glVertex2f(0.1, 0.5);
//    glVertex2f(0.3, 0.5);
//    glVertex2f(0.3, 0.7);
//    glVertex2f(0.1, 0.7);
//    glEnd();
//    
//    //Kubus 5
//    glBegin(GL_QUADS);
//    glColor3f(0.125, 0.125, 1);
//    glVertex2f(-0.1, 0.5);
//    glVertex2f(0.1, 0.5);
//    glVertex2f(0.1, 0.7);
//    glVertex2f(-0.1, 0.7);
//    glEnd();
//    
//    //Kubus 6
//    glBegin(GL_QUADS);
//    glColor3f(0.75, 0.125, 1);
//    glVertex2f(-0.3, 0.5);
//    glVertex2f(-0.1, 0.5);
//    glVertex2f(-0.1, 0.7);
//    glVertex2f(-0.3, 0.7);
//    glEnd();
//    
//    //Kubus 7
//    glBegin(GL_QUADS);
//    glColor3f(0.5, 1, 0.25);
//    glVertex2f(-0.9, 0.3); // Tepat di atas Kubus 7
//    glVertex2f(-0.7, 0.3); // Tepat di atas Kubus 7
//    glVertex2f(-0.7, 0.5);
//    glVertex2f(-0.9, 0.5);
//    glEnd();
//    
//    
//    glFlush();
//}
//
//int main(int argc, char*argv[]){
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
//    glutCreateWindow("Kubus");
//    glutDisplayFunc(kubus);
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}
