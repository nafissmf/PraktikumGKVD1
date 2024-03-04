// Nama		: Fendi Ardianto
// NIM 		: 24060122130077
// Lab		: D1


#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926535898
#define circle_points 100
#define radius 0.5

void Lingkaran(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glLineWidth(4.0);
    glPushMatrix();
    glBegin(GL_LINE_LOOP);
    int i;
    float angle;
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex3f(radius * cos(angle), radius * sin(angle), 0.0);
    }
    
    glEnd();
    glPopMatrix();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Simple");
    glutDisplayFunc(Lingkaran);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}



//#include <GL/glut.h>
//
//float angle = 0.0f; // Variabel sudut rotasi untuk roda
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLoadIdentity();
//
//    // Roda kiri depan
//    glPushMatrix(); // Push matrix untuk roda kiri depan
//    glScalef(1.15f, 1.15f, 1.0f); // Perbesar roda sedikit
//
//    glTranslatef(-0.3f, -0.05f, 0.25f); // Translasi ke kiri, naik sedikit, dan maju sedikit
//    glRotatef(angle, 0.0f, 0.0f, 1.0f); // Rotasi roda
//    glutSolidTorus(0.03, 0.07, 10, 25); // Gambar roda kiri depan
//    glPopMatrix(); // Pop matrix untuk roda kiri depan
//
//    // Roda kanan depan
//    glPushMatrix(); // Push matrix untuk roda kanan depan
//    glScalef(1.15f, 1.15f, 1.0f); // Perbesar roda sedikit
//
//    glTranslatef(0.3f, -0.05f, 0.25f); // Translasi ke kanan, naik sedikit, dan maju sedikit
//    glRotatef(angle, 0.0f, 0.0f, 1.0f); // Rotasi roda
//    glutSolidTorus(0.03, 0.07, 10, 25); // Gambar roda kanan depan
//    glPopMatrix(); // Pop matrix untuk roda kanan depan
//
//    angle += 1.0f; // Menginkrementasikan sudut rotasi
//    if (angle > 360.0f) {
//        angle -= 360.0f; // Kembalikan sudut rotasi ke 0 jika lebih besar dari 360 derajat
//    }
//
//    glutSwapBuffers();
//}
//
//void timer(int value) {
//    glutPostRedisplay(); // Meminta glut untuk menjalankan kembali fungsi display()
//    glutTimerFunc(16, timer, 0); // Mengatur timer untuk memanggil fungsi ini lagi setiap 16 milidetik
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutCreateWindow("Putaran Roda Depan");
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
//    glutDisplayFunc(display);
//    glutTimerFunc(0, timer, 0); // Mulai timer
//    glutMainLoop();
//    return 0;
//}

