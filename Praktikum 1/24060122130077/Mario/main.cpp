// Nama Pembuat		: Fendi Ardianto
// NIM				: 24060122130077
// Lab				: D1


#include <GL/glut.h>

void Mario(void) {
    glClear(GL_COLOR_BUFFER_BIT);
	
    // Line 1
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(-0.2, 0.8, -0.1, 0.7);
    glRectf(-0.1, 0.8, 0.0, 0.7);
    glRectf(0.0, 0.8, 0.1, 0.7);
    glRectf(0.1, 0.8, 0.2, 0.7);
    glRectf(0.2, 0.8, 0.3, 0.7);
    glRectf(0.3, 0.8, 0.4, 0.7);

    // Line 2
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(-0.5, 0.7, -0.4, 0.6);
    glRectf(-0.4, 0.7, -0.3, 0.6);
    glRectf(-0.3, 0.7, -0.2, 0.6);
    glRectf(-0.2, 0.7, -0.1, 0.6);
    glRectf(-0.1, 0.7, 0.0, 0.6);
    glRectf(0.0, 0.7, 0.1, 0.6);
    glRectf(0.1, 0.7, 0.2, 0.6);
    glRectf(0.2, 0.7, 0.3, 0.6);
    glRectf(0.3, 0.7, 0.4, 0.6);
    glRectf(0.4, 0.7, 0.5, 0.6);

    // Line 3
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.3, 0.6, -0.2, 0.5);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.2, 0.6, -0.1, 0.5);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.1, 0.6, 0.0, 0.5);
    glRectf(0.0, 0.6, 0.1, 0.5);
    glRectf(0.1, 0.6, 0.2, 0.5);
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(0.2, 0.6, 0.3, 0.5);
    glRectf(0.3, 0.6, 0.4, 0.5);
    glRectf(0.4, 0.6, 0.5, 0.5);

    // Line 4
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.5, 0.5, -0.4, 0.4);
    glRectf(-0.4, 0.5, -0.3, 0.4);
    glRectf(-0.3, 0.5, -0.2, 0.4);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.2, 0.5, -0.1, 0.4);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.1, 0.5, 0.0, 0.4);
    glRectf(0.0, 0.5, 0.1, 0.4);
    glRectf(0.1, 0.5, 0.2, 0.4);
    glRectf(0.2, 0.5, 0.3, 0.4);
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(0.3, 0.5, 0.4, 0.4);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(0.4, 0.5, 0.5, 0.4);
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(0.5, 0.5, 0.6, 0.4);

    // Line 5
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.6, 0.4, -0.5, 0.3);
    glRectf(-0.5, 0.4, -0.4, 0.3);
    glRectf(-0.4, 0.4, -0.3, 0.3);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.3, 0.4, -0.2, 0.3);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.2, 0.4, -0.1, 0.3);
    glRectf(-0.1, 0.4, 0.0, 0.3);
    glRectf(0.0, 0.4, 0.1, 0.3);
    glRectf(0.1, 0.4, 0.2, 0.3);
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(0.2, 0.4, 0.3, 0.3);
    glRectf(0.3, 0.4, 0.4, 0.3);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(0.4, 0.4, 0.5, 0.3);
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(0.5, 0.4, 0.6, 0.3);

    // Line 6
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.5, 0.3, -0.4, 0.2);
    glRectf(-0.4, 0.3, -0.3, 0.2);
    glRectf(-0.3, 0.3, -0.2, 0.2);
    glRectf(-0.2, 0.3, -0.1, 0.2);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.1, 0.3, 0.0, 0.2);
    glRectf(0.0, 0.3, 0.1, 0.2);
    glRectf(0.1, 0.3, 0.2, 0.2);
    glRectf(0.2, 0.3, 0.3, 0.2);
    glRectf(0.3, 0.3, 0.4, 0.2);
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(0.4, 0.3, 0.5, 0.2);
    glRectf(0.5, 0.3, 0.6, 0.2);

    // Line 7
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.4, 0.2, -0.3, 0.1);
    glRectf(-0.3, 0.2, -0.2, 0.1);
    glRectf(-0.2, 0.2, -0.1, 0.1);
    glRectf(-0.1, 0.2, 0.0, 0.1);
    glRectf(0.0, 0.2, 0.1, 0.1);
    glRectf(0.1, 0.2, 0.2, 0.1);
    glRectf(0.2, 0.2, 0.3, 0.1);
    glRectf(0.3, 0.2, 0.4, 0.1);

    // Line 8
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(-0.2, 0.1, -0.1, 0.0);
    glRectf(-0.1, 0.1, 0.0, 0.0);
    glRectf(0.0, 0.1, 0.1, 0.0);
    glRectf(0.1, 0.1, 0.2, 0.0);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(0.2, 0.1, 0.3, 0.0);
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(0.3, 0.1, 0.4, 0.0);
    glRectf(0.4, 0.1, 0.5, 0.0);

    // Line 9
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(-0.4, 0.0, -0.3, -0.1);
    glRectf(-0.3, 0.0, -0.2, -0.1);
    glRectf(-0.2, 0.0, -0.1, -0.1);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(-0.1, 0.0, 0.0, -0.1);
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(0.0, 0.0, 0.1, -0.1);
    glRectf(0.1, 0.0, 0.2, -0.1);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(0.2, 0.0, 0.3, -0.1);
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(0.3, 0.0, 0.4, -0.1);
    glRectf(0.4, 0.0, 0.5, -0.1);
    glRectf(0.5, 0.0, 0.6, -0.1);

    // Line 10
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(-0.5, -0.1, -0.4, -0.2);
    glRectf(-0.4, -0.1, -0.3, -0.2);
    glRectf(-0.3, -0.1, -0.2, -0.2);
    glRectf(-0.2, -0.1, -0.1, -0.2);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(-0.1, -0.1, 0.0, -0.2);
    glRectf(0.0, -0.1, 0.1, -0.2);
    glRectf(0.1, -0.1, 0.2, -0.2);
    glRectf(0.2, -0.1, 0.3, -0.2);
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(0.3, -0.1, 0.4, -0.2);
    glRectf(0.4, -0.1, 0.5, -0.2);
    glRectf(0.5, -0.1, 0.6, -0.2);
    glRectf(0.6, -0.1, 0.7, -0.2);

    // Line 11
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.5, -0.2, -0.4, -0.3);
    glRectf(-0.4, -0.2, -0.3, -0.3);
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(-0.3, -0.2, -0.2, -0.3);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(-0.2, -0.2, -0.1, -0.3);
    glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 87.0f / 255.0f); // Kuning
    glRectf(-0.1, -0.2, 0.0, -0.3);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(0.0, -0.2, 0.1, -0.3);
    glRectf(0.1, -0.2, 0.2, -0.3);
    glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 87.0f / 255.0f); // Kuning
    glRectf(0.2, -0.2, 0.3, -0.3);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(0.3, -0.2, 0.4, -0.3);
    glColor3f(236.0f / 255.0f, 50.0f / 255.0f, 37.0f / 255.0f); // Merah
    glRectf(0.4, -0.2, 0.5, -0.3);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(0.5, -0.2, 0.6, -0.3);
    glRectf(0.6, -0.2, 0.7, -0.3);

    // Line 12
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.5, -0.3, -0.4, -0.4);
    glRectf(-0.4, -0.3, -0.3, -0.4);
    glRectf(-0.3, -0.3, -0.2, -0.4);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(-0.2, -0.3, -0.1, -0.4);
    glRectf(-0.1, -0.3, 0.0, -0.4);
    glRectf(0.0, -0.3, 0.1, -0.4);
    glRectf(0.1, -0.3, 0.2, -0.4);
    glRectf(0.2, -0.3, 0.3, -0.4);
    glRectf(0.3, -0.3, 0.4, -0.4);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(0.4, -0.3, 0.5, -0.4);
    glRectf(0.5, -0.3, 0.6, -0.4);
    glRectf(0.6, -0.3, 0.7, -0.4);

    // Line 13
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(-0.5, -0.4, -0.4, -0.5);
    glRectf(-0.4, -0.4, -0.3, -0.5);
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(-0.3, -0.4, -0.2, -0.5);
    glRectf(-0.2, -0.4, -0.1, -0.5);
    glRectf(-0.1, -0.4, 0.0, -0.5);
    glRectf(0.0, -0.4, 0.1, -0.5);
    glRectf(0.1, -0.4, 0.2, -0.5);
    glRectf(0.2, -0.4, 0.3, -0.5);
    glRectf(0.3, -0.4, 0.4, -0.5);
    glRectf(0.4, -0.4, 0.5, -0.5);
    glColor3f(245.0f / 255.0f, 196.0f / 255.0f, 155.0f / 255.0f); // Krem
    glRectf(0.5, -0.4, 0.6, -0.5);
    glRectf(0.6, -0.4, 0.7, -0.5);

    // Line 14
    glColor3f(54.0f / 255.0f, 112.0f / 255.0f, 185.0f / 255.0f); // Biru
    glRectf(-0.3, -0.5, -0.2, -0.6);
    glRectf(-0.2, -0.5, -0.1, -0.6);
    glRectf(-0.1, -0.5, 0.0, -0.6);
    glRectf(0.1, -0.5, 0.2, -0.6);
    glRectf(0.2, -0.5, 0.3, -0.6);
    glRectf(0.3, -0.5, 0.4, -0.6);

    // Line 15
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(-0.4, -0.6, -0.3, -0.7);
    glRectf(-0.3, -0.6, -0.2, -0.7);
    glRectf(-0.2, -0.6, -0.1, -0.7);
    glRectf(0.2, -0.6, 0.3, -0.7);
    glRectf(0.3, -0.6, 0.4, -0.7);
    glRectf(0.4, -0.6, 0.5, -0.7);

    // Line 16
    glColor3f(143.0f / 255.0f, 76.0f / 255.0f, 31.0f / 255.0f); // Coklat
    glRectf(-0.5, -0.7, -0.4, -0.8);
    glRectf(-0.4, -0.7, -0.3, -0.8);
    glRectf(-0.3, -0.7, -0.2, -0.8);
    glRectf(-0.2, -0.7, -0.1, -0.8);
    glRectf(0.2, -0.7, 0.3, -0.8);
    glRectf(0.3, -0.7, 0.4, -0.8);
    glRectf(0.4, -0.7, 0.5, -0.8);
    glRectf(0.5, -0.7, 0.6, -0.8);



    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mario");
    glutDisplayFunc(Mario);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

