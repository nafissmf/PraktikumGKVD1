// Nama : Aldisar Gibran
// NIM : 24060122130081
// Tanggal : 22-02-2024

#include <GL/glut.h>
#include <math.h>

void Nyan(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Baris 1
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.75,-0.6,-0.6,-0.55);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.5,-0.6,-0.35,-0.55);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.15,-0.6,0.0,-0.55);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.1,-0.6,0.25,-0.55);
	
	//Baris 2
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.75,-0.55,-0.70,-0.5);
		glColor3f(0.75f,0.65f,0.0f);
	glRectf(-0.70,-0.55,-0.60,-0.5);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.60,-0.55,-0.55,-0.5);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.50,-0.55,-0.45,-0.5);
		glColor3f(0.75f,0.65f,0.0f);
	glRectf(-0.45,-0.55,-0.35,-0.5);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.35,-0.55,-0.30,-0.5);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.20,-0.55,-0.15,-0.5);
		glColor3f(0.75f,0.65f,0.0f);
	glRectf(-0.15,-0.55,-0.05,-0.5);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.05,-0.55,0.00,-0.5);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.05,-0.55,0.1,-0.5);
		glColor3f(0.75f,0.65f,0.0f);
	glRectf(0.1,-0.55,0.2,-0.5);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.2,-0.55,0.25,-0.5);
	
	//Baris 3
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.8,-0.50,0.05,-0.45);
		glColor3f(0.75f,0.65f,0.0f);
	glRectf(0.05,-0.50,0.2,-0.45);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.2,-0.50,0.25,-0.45);
	
	//Baris 4
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.85,-0.45,-0.8,-0.40);
		glColor3f(0.75f,0.65f,0.0f);
	glRectf(-0.8,-0.45,-0.4,-0.40);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(-0.4,-0.45,-0.35,-0.40);
		glColor3f(1,1,0.00f);
	glRectf(-0.35,-0.45,0.0,-0.40);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.0,-0.45,0.1,-0.40);
		glColor3f(0.75f,0.65f,0.0f);
	glRectf(0.1,-0.45,0.15,-0.40);
		glColor3f(0.0f,0.0f,0.0f);
	glRectf(0.15,-0.45,0.2,-0.40);
	
	//Baris 5
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.9,-0.40,-0.85,-0.35);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.85,-0.40,-0.75,-0.35);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.75,-0.40,-0.50,-0.35);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.50,-0.40,-0.35,-0.35);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.35,-0.40,-0.30,-0.35);
		glColor3f(1.0f,0.45f,0.85f); //Pink Muda
	glRectf(-0.30,-0.40,-0.2,-0.35);
		glColor3f(1.0f,0.0f,0.0f); //Merah
	glRectf(-0.2,-0.40,-0.15,-0.35);
		glColor3f(1.0f,0.45f,0.85f); //Pink Muda
	glRectf(-0.15,-0.40,0.0,-0.35);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(0.0,-0.40,0.05,-0.35);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.40,0.15,-0.35);
	
	//Baris 6
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.95,-0.35,-0.9,-0.30);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.9,-0.35,-0.8,-0.30);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.8,-0.35,-0.75,-0.30);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.75,-0.35,-0.7,-0.30);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.7,-0.35,-0.65,-0.30);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.65,-0.35,-0.6,-0.30);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.6,-0.35,-0.55,-0.30);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.55,-0.35,-0.5,-0.30);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.5,-0.35,-0.4,-0.30);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.4,-0.35,-0.3,-0.30);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.3,-0.35,-0.25,-0.30);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.25,-0.35,-0.05,-0.30);
		glColor3f(1.0f,0.0f,0.0f); //Merah
	glRectf(-0.05,-0.35,0.0,-0.30);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(0.0,-0.35,0.05,-0.30);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.35,0.1,-0.30);
	
	//Baris 7
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.95,-0.30,-0.9,-0.25);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.9,-0.30,-0.8,-0.25);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.8,-0.30,-0.4,-0.25);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.4,-0.30,-0.3,-0.25);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.3,-0.30,-0.25,-0.25);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.25,-0.30,-0.15,-0.25);
		glColor3f(1.0f,0.0f,0.0f); //Merah
	glRectf(-0.15,-0.30,-0.1,-0.25);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.1,-0.30,0.0,-0.25);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(0.0,-0.30,0.05,-0.25);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.30,0.25,-0.25);

	//Baris 8
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.95,-0.25,-0.9,-0.20);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.9,-0.25,-0.8,-0.20);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.8,-0.25,-0.7,-0.20);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.7,-0.25,-0.65,-0.20);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.65,-0.25,-0.6,-0.20);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.6,-0.25,-0.5,-0.20);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.5,-0.25,-0.4,-0.20);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.4,-0.25,-0.3,-0.20);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.3,-0.25,-0.25,-0.20);
		glColor3f(1.0f,0.0f,0.0f); //Merah
	glRectf(-0.25,-0.25,-0.2,-0.20);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.2,-0.25,0.0,-0.20);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(0.0,-0.25,0.05,-0.20);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.25,0.1,-0.20);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(0.1,-0.25,0.25,-0.20);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.25,-0.25,0.3,-0.20);
	
	//Baris 9
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.95,-0.20,-0.9,-0.15);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.9,-0.20,-0.8,-0.15);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.8,-0.20,-0.75,-0.15);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.7,-0.20,-0.5,-0.15);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.5,-0.20,-0.45,-0.15);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.4,-0.20,-0.3,-0.15);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.3,-0.20,-0.25,-0.15);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.25,-0.20,0.0,-0.15);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(0.0,-0.20,0.05,-0.15);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.20,0.2,-0.15);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(0.2,-0.20,0.3,-0.15);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.3,-0.20,0.35,-0.15);
	
	//Baris 10
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.9,-0.15,-0.85,-0.10);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.85,-0.15,-0.35,-0.10);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.35,-0.15,-0.3,-0.10);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.3,-0.15,-0.1,-0.10);
		glColor3f(1.0f,0.0f,0.0f); //Merah
	glRectf(-0.1,-0.15,-0.05,-0.10);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.05,-0.15,0.0,-0.10);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(0.0,-0.15,0.05,-0.10);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.15,0.1,-0.10);
	//Reserve Oren 0.1-0.15
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.15,-0.15,0.2,-0.10);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(0.2,-0.15, 0.3,-0.10);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.3,-0.15,0.35,-0.10);
	
	//Baris 11
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.9,-0.10,-0.85,-0.05);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.85,-0.10,-0.7,-0.05);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.7,-0.10,-0.5,-0.05);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.5,-0.10,-0.35,-0.05);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.35,-0.10,-0.3,-0.05);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.3,-0.10,-0.25,-0.05);
		glColor3f(1.0f,0.0f,0.0f); //Merah
	glRectf(-0.25,-0.10,-0.2,-0.05);
		glColor3f(1.0f,0.45f,0.85f); //Pink
	glRectf(-0.2,-0.10,0.0,-0.05);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(0.0,-0.10,0.05,-0.05);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.10,0.1,-0.05);
	//Reserve Oren 0.1-0.2
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.2,-0.10,0.3,-0.05);
	
	//Baris 12
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.9,-0.05,-0.85,0.0);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.85,-0.05,-0.75,0.0);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.75,-0.05,-0.7,0.0);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.65,-0.05,-0.6,0.0);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(-0.6,-0.05,-0.5,0.0);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.5,-0.05,-0.45,0.0);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.45,-0.05,-0.35,0.0);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.35,-0.05,-0.3,0.0);
		glColor3f(1.0f,1.0f,0.0f); //Kuning
	glRectf(-0.3,-0.05,0.05,0.0);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(0.05,-0.05,0.1,0.0);
	
	//Baris 13
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.9,0.0,-0.85,0.05);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.85,0.0,-0.8,0.05);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.8,0.0,-0.75,0.05);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.6,0.0,-0.4,0.05);
		glColor3f(0.75f,0.65f,0.0f); //Krem
	glRectf(-0.4,0.0,-0.35,0.05);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.35,0.0,0.05,0.05);
	
	//Baris 14
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.85,0.05,-0.8,0.1);
		glColor3f(0.0f,0.0f,0.0f); //Hitam
	glRectf(-0.4,0.05,-0.35,0.1);
	
	
	
	
	
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 400);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Meow");
    glutDisplayFunc(Nyan);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}


