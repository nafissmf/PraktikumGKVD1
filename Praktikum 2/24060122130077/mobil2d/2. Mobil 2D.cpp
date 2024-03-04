// Nama		: Fendi Ardianto
// NIM 		: 24060122130077
// Lab		: D1

#include <GL/glut.h>
#include <cmath>

#define PI 3.14159265
float angel = 0.0f;
void mobil(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    
    glPushMatrix();
	glLineWidth(7.0f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
    glVertex2f(0.2, 0.3);
    glVertex2f(0.38, 0.43);
	glEnd();
    glPopMatrix();

// Kerangka atap
	glBegin(GL_QUADS);
    glColor3f(1,0,0); 
    glVertex2f(0.314, 0.2);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.1, 0.4083);                                                                                                                 
    glVertex2f(0.314, 0.41);
	glEnd();

// Kerangka mobil bawah  
	glPushMatrix();
	glBegin(GL_QUAD_STRIP);
    glVertex2f(0.5, 0.0);
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.437, 0.2);
    glVertex2f(-0.32, 0.2);    
	glEnd();
	glPopMatrix();

// 1/4 Lingkaran Belakang
	int circle_points;
	float radius;
	int i;
	float angle;
	float halfCircle;
	circle_points = 50;
	radius = 0.25;
	glLineWidth(4.0);
	glPushMatrix();
    glTranslatef(0.3, -0.01, 0);
	glBegin(GL_TRIANGLES); // Menggunakan GL_TRIANGLES untuk menggambar segitiga
	i;
	angle;
	halfCircle = circle_points / 3; // Mengambil hanya setengah dari jumlah titik untuk membuat seperempat lingkaran
	for (i = 0; i < halfCircle ; i++) {
	    angle = PI * i / circle_points;
	    glVertex3f(0.0f, 0.0f, 0.0f); // Titik tengah lingkaran
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	    angle = PI * (i + 1) / circle_points;
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	}
	glEnd();
	glPopMatrix();

// 1/4 Lingkaran Depan
    glLoadIdentity();
    glPushMatrix();
    float centerX = 0.5f;
    float centerY = 0.5f;
    float radiusX = 0.3f; // Sumbu X
    float radiusY = 0.5f; // Sumbu Y (lebih besar)
    circle_points = 50;
    glScalef(0.78f, 0.655f, 1.0f); // Memperkecil ukuran menjadi setengah
    glTranslatef(0.1, -0.495, 0);
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
    glBegin(GL_TRIANGLES);
    for (int i = 0; i <= circle_points / 4; i++) {
        float angle1 = 2 * PI * i / circle_points;
        float angle2 = 2 * PI * (i + 1) / circle_points;
        // Menggambar dua segitiga untuk setiap segmen
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
    }
    glEnd();
    glPopMatrix();    

// 1/4 Lingkaran Belakang atas
    glColor3f(1,0,0); 
	circle_points = 50;
	radius = 0.25;
	glLineWidth(4.0);
	glPushMatrix();
    glTranslatef(0.24, 0.172, 0);
    glRotatef(45.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
	glBegin(GL_TRIANGLES); // Menggunakan GL_TRIANGLES untuk menggambar segitiga
	i;
	angle;
	halfCircle = circle_points / 6; // Mengambil hanya setengah dari jumlah titik untuk membuat seperempat lingkaran
	for (i = 0; i < halfCircle; i++) {
	    angle = PI * i / circle_points;
	    glVertex3f(0.0f, 0.0f, 0.0f); // Titik tengah lingkaran
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	    angle = PI * (i + 1) / circle_points;
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	}
	glEnd();
	glPopMatrix();

// Kerangka Mobil Atas nambal
	glBegin(GL_QUADS);
    glColor3f(1,0,0); 
    glVertex2f(0.422, 0.2);
    glVertex2f(0.27, 0.2);
    glVertex2f(0.27, 0.343);
    glVertex2f(0.422, 0.343);
	glEnd();

// 1/4 Lingkaran Depan atas
    glLoadIdentity();
    glPushMatrix();
    centerX = 0.5f;
    centerY = 0.5f;
    radiusX = 0.3f; // Sumbu X
    radiusY = 0.4f; // Sumbu Y (lebih besar)
    circle_points = 50;
    glScalef(0.8f, 0.675f, 1.0f); // Memperkecil ukuran menjadi setengah
    glTranslatef(0.48, -0.19, 0);
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
    glBegin(GL_TRIANGLES);
    for (int i = 0; i <= circle_points / 4; i++) {
        float angle1 = 2 * PI * i / circle_points;
        float angle2 = 2 * PI * (i + 1) / circle_points;
        // Menggambar dua segitiga untuk setiap segmen
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
    }
    glEnd();
    glPopMatrix();
    glBegin(GL_QUADS);
    
// Bawah pollLLL
    glColor3f(0.5,0.5,0.5); 
    glVertex2f(0.55, -0.075);
    glVertex2f(-0.7025, -0.075);
    glVertex2f(-0.7025, 0.0);                                                                                                                 
    glVertex2f(0.55, 0.0);
	glEnd();
    glColor3f(0.0f, 0.0f, 0.0f ); // Thistle
    /////////
    glLoadIdentity();
    glPushMatrix();
    centerX = 0.5f;
    centerY = 0.5f;
    radiusX = 0.3f; // Sumbu X
    radiusY = 0.4f; // Sumbu Y (lebih besar)
    circle_points = 50;
    glColor3f(0.5,0.5,0.5); 

    glScalef(0.1f, 0.12f, 1.0f); // Memperkecil ukuran menjadi setengah
    glTranslatef(-6.5, -0.8, 0);
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < circle_points / 2; i++) {
        float angle1 = 2 * PI * i / circle_points;
        float angle2 = 2 * PI * (i + 1) / circle_points;
        // Menggambar dua segitiga untuk setiap segmen
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
    }
    glEnd();
    
    glLoadIdentity();
    glPushMatrix();
    centerX = 0.5f;
    centerY = 0.5f;
    radiusX = 0.3f; // Sumbu X
    radiusY = 0.4f; // Sumbu Y (lebih besar)
    circle_points = 50;
    glColor3f(0.5,0.5,0.5); 

    glScalef(0.1f, 0.12f, 1.0f); // Memperkecil ukuran menjadi setengah
    glTranslatef(4.9, 0.185, 0);
    glRotatef(270.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < circle_points / 2; i++) {
        float angle1 = 2 * PI * i / circle_points;
        float angle2 = 2 * PI * (i + 1) / circle_points;
        // Menggambar dua segitiga untuk setiap segmen
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
    }
    glEnd();
//roda depannnnn
    glLoadIdentity();
    glPushMatrix();
    centerX = 0.5f;
    centerY = 0.5f;
    radiusX = 0.3f; // Sumbu X
    radiusY = 0.4f; // Sumbu Y (lebih besar)
    circle_points = 50;
    glColor3f(0.5,0.5,0.5); 

    glScalef(0.4f, 0.3f, 1.0f); // Memperkecil ukuran menjadi setengah
    glTranslatef(-1.25, -0.6, 0);
    glRotatef(0.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < circle_points / 2; i++) {
        float angle1 = 2 * PI * i / circle_points;
        float angle2 = 2 * PI * (i + 1) / circle_points;
        // Menggambar dua segitiga untuk setiap segmen
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
    }
    glEnd();
    
    // roda belkanggngngngngng
    glPopMatrix();
    glLoadIdentity();
    glPushMatrix();
    centerX = 0.5f;
    centerY = 0.5f;
    radiusX = 0.3f; // Sumbu X
    radiusY = 0.4f; // Sumbu Y (lebih besar)
    circle_points = 50;
    glColor3f(0.5,0.5,0.5); 

    glScalef(0.4f, 0.3f, 1.0f); // Memperkecil ukuran menjadi setengah
    glTranslatef(0.25, -0.6, 0);
    glRotatef(0.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < circle_points / 2; i++) {
        float angle1 = 2 * PI * i / circle_points;
        float angle2 = 2 * PI * (i + 1) / circle_points;
        // Menggambar dua segitiga untuk setiap segmen
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
    }
    glEnd();
    glPopMatrix();
// Roda kiri depan
    glColor3f(0,0,0); 

    glPushMatrix(); // Push matrix untuk roda kiri depan
    glTranslatef(-0.3f, -0.05f, 0.25f); // Translasi ke kiri, naik sedikit, dan maju sedikit
    glRotatef(angel, 0.0f, 0.0f, 1.0f); // Rotasi roda
    glutSolidTorus(0.03, 0.07, 10, 25); // Gambar roda kiri depan
    glPopMatrix(); // Pop matrix untuk roda kiri depan

// Roda kanan depan
    glPushMatrix(); // Push matrix untuk roda kanan depan
    glTranslatef(0.3f, -0.05f, 0.25f); // Translasi ke kanan, naik sedikit, dan maju sedikit
    glRotatef(angel, 0.0f, 0.0f, 1.0f); // Rotasi roda
    glutSolidTorus(0.03, 0.07, 10, 25); // Gambar roda kanan depan
    glPopMatrix(); // Pop matrix untuk roda kanan depan

// Mengatur sudut rotasi untuk roda
    angel += 1.0f;
    if (angel > 360.0f) {
        angel -= 360.0f;
    }    
    
// Lingkaran roda depan
	glColor3f(1, 1, 1); // Warna putih
	circle_points = 360; // Mengatur jumlah titik menjadi 360 untuk membuat lingkaran penuh
	radius = 0.05;
	glLineWidth(4.0);
	glPushMatrix();
	glTranslatef(-0.3, -0.05, 0);	
	glBegin(GL_TRIANGLES); // Menggunakan GL_TRIANGLES untuk menggambar segitiga
	for (i = 0; i < circle_points; i++) {
	    angle = 2.0f * PI * i / circle_points;
	    glVertex3f(0.0f, 0.0f, 0.0f); // Titik tengah lingkaran
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	    angle = 2.0f * PI * (i + 1) / circle_points;
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	}
	glEnd();
	glPopMatrix();

// Lingkaran roda belakang
	glColor3f(1, 1, 1); // Warna putih
	circle_points = 360; // Mengatur jumlah titik menjadi 360 untuk membuat lingkaran penuh
	radius = 0.05;
	glLineWidth(4.0);
	glPushMatrix();
	glTranslatef(0.3, -0.05, 0);	
	glBegin(GL_TRIANGLES); // Menggunakan GL_TRIANGLES untuk menggambar segitiga
	for (i = 0; i < circle_points; i++) {
	    angle = 2.0f * PI * i / circle_points;
	    glVertex3f(0.0f, 0.0f, 0.0f); // Titik tengah lingkaran
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	    angle = 2.0f * PI * (i + 1) / circle_points;
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	}
	glEnd();
	glPopMatrix();  
    
// Lampu depan
    glPushMatrix();
	glColor3f(1.0f, 178.0f / 255.0f, 102.0f / 255.0f); // Warna orens
	circle_points = 360; // Mengatur jumlah titik menjadi 360 untuk membuat lingkaran penuh
	radius = 0.04;
	glLineWidth(4.0);
	glPushMatrix();
	glTranslatef(-0.58, 0.07, 0);	
	glBegin(GL_TRIANGLES); // Menggunakan GL_TRIANGLES untuk menggambar segitiga
	for (i = 0; i < circle_points; i++) {
	    angle = 2.0f * PI * i / circle_points;
	    glVertex3f(0.0f, 0.0f, 0.0f); // Titik tengah lingkaran
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	    angle = 2.0f * PI * (i + 1) / circle_points;
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	}
	glEnd();
	glPopMatrix();
	
// Lampu belakang
	glPushMatrix();
    glTranslatef(0.5f, 0.0f, 0.0f); // Translasi ke kiri, naik sedikit, dan maju sedikit
	glColor3f(0.7,0.12,0); 
	circle_points = 100;
	radius = 0.05;
	glLineWidth(4.0);
	glBegin(GL_TRIANGLES); // Menggunakan GL_TRIANGLES untuk menggambar segitiga
	i;
	angle;
	for (i = 0; i < circle_points; i++) {
	    angle = PI * i / circle_points;
	    glVertex3f(0.0f, 0.0f, 0.0f); // Titik tengah lingkaran
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	    angle = PI * (i + 1) / circle_points;
	    glVertex3f(radius * cos(angle), radius * sin(angle), 0.0f);
	}
	glEnd();
	glPopMatrix();
      
//Jendela depan
    glLoadIdentity();
    glPushMatrix();
    centerX = 0.5f;
    centerY = 0.5f;
    radiusX = 0.3f; // Sumbu X
    radiusY = 0.4f; // Sumbu Y (lebih besar)
    circle_points = 50;
    glScalef(0.61f, 0.485f, 1.0f); // Memperkecil ukuran menjadi setengah
    glTranslatef(0.45, -0.05, 0);
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f); // Putar 90 derajat ke kiri
	glColor3f(0.9, 0.95, 1);
    glBegin(GL_TRIANGLES);
    for (int i = 0; i <= circle_points / 4; i++) {
        float angle1 = 2 * PI * i / circle_points;
        float angle2 = 2 * PI * (i + 1) / circle_points;
        // Menggambar dua segitiga untuk setiap segmen
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX, centerY);
        glVertex2f(centerX + radiusX * cos(angle2), centerY + radiusY * sin(angle2));
        glVertex2f(centerX + radiusX * cos(angle1), centerY + radiusY * sin(angle1));
    }
    glEnd();
    glPopMatrix();
      
	glBegin(GL_QUADS);
    glVertex2f(0.07, 0.217);
    glVertex2f(-0.03, 0.217);
    glVertex2f(-0.03, 0.3622);                                                                                                                 
    glVertex2f(0.07, 0.3622);
	glEnd();


//Jendela belakang
    glPushMatrix();
	glBegin(GL_QUADS);
    glVertex2f(0.33, 0.217);
    glVertex2f(0.1, 0.217);
    glVertex2f(0.1, 0.3622);                                                                                                                 
    glVertex2f(0.33, 0.3622);
	glEnd();
    glPopMatrix();

    
    glPushMatrix();
	glLineWidth(7.0f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
    glVertex2f(0.07, 0.175);
    glVertex2f(0.025, 0.175);
	glEnd();
    glPopMatrix();

    glPushMatrix();
	glLineWidth(7.0f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
    glVertex2f(0.28, 0.175);
    glVertex2f(0.33, 0.175);
	glEnd();
    glPopMatrix();

    glPushMatrix();
	glLineWidth(14.0f);
	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
    glVertex2f(-0.3, 0.2);
    glVertex2f(0.33, 0.2);
	glEnd();
    glPopMatrix();




    glutSwapBuffers();

}

void timer(int value) {
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0); 
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutCreateWindow("mobil");
    glutDisplayFunc(mobil);
    //glClearColor(245.0f/255.0f, 245.0f/255.0f, 220.0f/255.0f, 0.0f);  // Beige
    glClearColor(245.0f/255.0f, 222.0f/255.0f, 179.0f/255.0f, 0.0f);  // Wheat
    glutTimerFunc(0, timer, 0); 
    glutMainLoop();
    return 0;
}
