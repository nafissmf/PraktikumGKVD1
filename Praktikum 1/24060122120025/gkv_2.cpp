/*
Nama 		: Dimas Yudha Saputra
NIM  		: 24060122120025
Nama File 	: gkv_2.cpp
soal		: Buat Gambar Kubus bertingkat dari objek primitif sekreatif mungkin. (minimal 5 kubus)
Deskripsi	: membuat gambar monitor komputer
*/
#include <GL/glut.h>

void monitor(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//gradasi biru lavender
	 glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(-1.0f, 1.0f); // Biru (kiri atas)
        glColor3f(0.7f, 0.7f, 1.0f); glVertex2f(1.0f, 1.0f);  // Lavender (kanan atas)
        glColor3f(0.7f, 0.7f, 1.0f); glVertex2f(1.0f, -1.0f); // Lavender (kanan bawah)
        glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(-1.0f, -1.0f); // Biru (kiri bawah)
    glEnd();

	glColor3f(0.0f,0.0f,0.0f);glRectf(-0.463,0.463,0.463,0.4);
	glColor3f(1.0f,1.0f,1.0f);glRectf(-0.4,0.4,0.4,-0.4);
	glColor3f(0.0f,0.0f,0.0f);glRectf(-0.463,-0.4,0.463,-0.463);
	glColor3f(0.0f,0.0f,0.0f);glRectf(-0.463,0.4,-0.4,-0.4);
	glColor3f(0.0f,0.0f,0.0f);glRectf(0.4,0.4,0.463,-0.4);
	glColor3f(0.0f,0.0f,0.0f);glRectf(-0.067,-0.463,-0.033,-0.597);
	glColor3f(0.0f,0.0f,0.0f);glRectf(0.067,-0.463,0.033,-0.597);
	glColor3f(0.0f,0.0f,0.0f);glRectf(-0.2,-0.597,0.2,-0.66);
	
	glFlush();

}
	
	
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("24060122120025_Tugas nomor 3");
	glutDisplayFunc(monitor);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Warna latar belakang gradasi biru
	glutMainLoop();
	return 0;
}

