/*Nama : Yesi Dwi Ningtias
NIM : 24060122120027
Praktikum GKV LAB D1*/

#include <GL/glut.h>

void drawLineStrip() {
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 0.0, 0.0); // Merah
    glVertex2f(-0.8, 0.8);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.4, 0.8);
    glVertex2f(-0.2, 0.6);
    glVertex2f(0.0, 0.8);
    glEnd();
}

void drawLineLoop() {
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 1.0, 0.0); // Hijau
    glVertex2f(0.2, 0.8);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.6, 0.8);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.6, 0.4);
    glEnd();
}

void drawTriangleFan() {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 0.0, 1.0); // Biru
    glVertex2f(-0.8, -0.2);
    glVertex2f(-0.6, -0.4);
    glVertex2f(-0.4, -0.2);
    glVertex2f(-0.2, -0.4);
    glVertex2f(0.0, -0.2);
    glEnd();
}

void drawTriangleStrip() {
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0, 1.0, 0.0); // Kuning
    glVertex2f(0.2, -0.2);
    glVertex2f(0.4, -0.4);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.8, -0.4);
    glVertex2f(1.0, -0.2);
    glEnd();
}

void drawQuads() {
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0); // Ungu
    glVertex2f(-0.8, -0.6);
    glVertex2f(-0.5, -0.6);
    glVertex2f(-0.5, -0.9);
    glVertex2f(-0.8, -0.9);
    glEnd();
}

void drawQuadStrip() {
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0, 1.0, 1.0); // Cyan
    glVertex2f(0.2, -0.6);
    glVertex2f(0.4, -0.8);
    glVertex2f(0.6, -0.6);
    glVertex2f(0.8, -0.8);
    glVertex2f(1.0, -0.6);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawLineStrip();
    drawLineLoop();
    drawTriangleFan();
    drawTriangleStrip();
    drawQuads();
    drawQuadStrip();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Objek Primitif");
    glutInitWindowSize(800, 600);
    glutDisplayFunc(display);
    glOrtho(-1, 1, -1, 1, -1, 1);
    glutMainLoop();

    return 0;
}


