///*
//Nama 		: Dimas Yudha Saputra
//NIM  		: 24060122120025
//Nama File 	: gkv_1.cpp
//Deskripsi	: Membuat program dengan fungsi GL_LINE_STRIP,GL_LINE_LOOP,GL_TRIANGLE_FAN,GL_TRIANGLE_STRIP,GL_QUADS,GL_QUAD_STRIP
//*/
//
//
//#include <GL/glut.h>
//
//void fungsiGL(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glLineWidth(10.0f);
//
//	// GL_LINE_STRIP
//    glBegin(GL_LINE_STRIP);
//    glVertex3f(-0.8,0.8,0.0);glColor3f(0.4,0.0,0.0);
//    glVertex3f(-0.4,0.1,0.0);glColor3f(0.5,0.9,0.0);
//    glVertex3f(-0.4,0.8,0.0);glColor3f(0.0,0.5,0.9);
//    glVertex3f(-0.8,0.1,0.0);glColor3f(0.7,0.9,0.9);
//    glEnd();
//
//    //GL_LINE_LOOP
//	glBegin(GL_LINE_LOOP);
//    glVertex3f(-0.3,0.8,0.0);glColor3f(0.6,0.9,0.0);
//    glVertex3f(0.2,0.1,0.0);glColor3f(0.0,0.5,0.9);
//    glVertex3f(0.2,0.8,0.0);glColor3f(0.3,0.0,0.0);
//    glVertex3f(-0.3,0.1,0.0);glColor3f(0.1,0.0,0.9);
//    glEnd();
//
//    //GL_TRIANGLE_FAN
//    glBegin(GL_TRIANGLE_FAN);
//    glVertex3f(0.3, 0.8, 0.0);glColor3f(0.2,0.0,0.9);
//    glVertex3f(0.8, 0.1, 0.0);glColor3f(0.8,0.0,0.0);
//    glVertex3f(0.8, 0.8, 0.0);glColor3f(0.9,0.9,0.);
//    glVertex3f(0.3, 0.1, 0.0);glColor3f(0.3,0.5,0.9);
//    glEnd();
//
//    //GL_TRIANGLE_STRIP
//    glBegin(GL_TRIANGLE_STRIP);
//    glVertex3f(-0.9, -0.1, 0.0);glColor3f(0.0,0.3,0.9);
//    glVertex3f(-0.4, -0.8, 0.0);glColor3f(0.9,0.2,0.0);
//    glVertex3f(-0.4, -0.1, 0.0);glColor3f(0.9,0.9,0.0);
//    glVertex3f(-0.9, -0.8, 0.0);glColor3f(0.9,0.4,0.9);
//    glEnd();
//
//    //GL_QUADS
//    glBegin(GL_QUADS);
//    glVertex3f(-0.3,-0.1,0.0);glColor3f(0.9,0.0,0.9);
//    glVertex3f(0.2,-0.8,0.0);glColor3f(0.0,0.5,0.9);
//    glVertex3f(0.2,-0.1,0.0);glColor3f(0.9,0.9,0.0);
//    glVertex3f(-0.3,-0.8,0.0);glColor3f(0.9,0.0,0.0);
//    glEnd();
//
//    //GL_QUAD_STRIP
//    glBegin(GL_QUAD_STRIP);
//    glVertex3f(0.3,-0.8,0.0);glColor3f(0.9,0.9,0.0);
//    glVertex3f(0.8,-0.1,0.0);glColor3f(0.0,0.5,0.9);
//    glVertex3f(0.8,-0.8,0.0);glColor3f(0.9,0.0,0.0);
//    glVertex3f(0.3,-0.1,0.0);glColor3f(0.9,0.0,0.9);
//    glEnd();
//    
//	glFlush();
//}
//	
//
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(640,480);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("24060122120025_Tugas Nomor 2");
//	glutDisplayFunc(fungsiGL);
//	glClearColor(0.0f,0.0f,0.0f,1.0f);
//	glutMainLoop();
//	return 0;
//}
