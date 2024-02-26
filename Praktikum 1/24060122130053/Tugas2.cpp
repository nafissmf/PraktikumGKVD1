#include <GL/glut.h>

void Tugas2(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    //kepala atas
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(0.40, 0.40, -0.40, 0.20); 
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(0.40, 0.20, 0.30, 0.00);
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(0.10, 0.20, -0.10, 0.00);
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(-0.30, 0.20, -0.40, 0.00);

    //mata
    glColor3f(0.0f, 0.0f, 0.0f); glRectf(0.30, 0.20, 0.10, 0.00);
    glColor3f(0.0f, 0.0f, 0.0f); glRectf(-0.10, 0.20, -0.30, 0.00);
    
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(0.40, -0.10, 0.10, 0.00);
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(-0.40, -0.10, -0.10, 0.00);
    glColor3f(0.0f, 0.0f, 0.0f); glRectf(0.10, 0.00, -0.10, -0.10);
    
    
    //mulut
    glColor3f(0.0f, 0.0f, 0.0f); glRectf(0.20, -0.10, -0.20, -0.30);
    glColor3f(0.0f, 0.0f, 0.0f); glRectf(0.20, -0.30, 0.10, -0.40);
    glColor3f(0.0f, 0.0f, 0.0f); glRectf(-0.10, -0.30, -0.20, -0.40);
	glColor3f(0.0f, 0.7f, 0.0f); glRectf(0.10, -0.30, -0.10, -0.40);
	glColor3f(0.0f, 0.7f, 0.0f); glRectf(0.40, -0.40, -0.40, -0.50);
	glColor3f(0.0f, 0.7f, 0.0f); glRectf(0.40, -0.10, 0.20, -0.40);
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(-0.20, -0.10, -0.40, -0.40);
	
	//bayangan
	glColor3f(0.027f, 0.243f, 0.129f); glRectf(0.30, 0.20, 0.10, 0.15);
	glColor3f(0.027f, 0.243f, 0.129f); glRectf(0.30, 0.20, 0.25, 0.00);
	
	glColor3f(0.027f, 0.243f, 0.129f); glRectf(-0.10, 0.20, -0.30, 0.15);
	glColor3f(0.027f, 0.243f, 0.129f); glRectf(-0.30, 0.20, -0.25, 0.00);
    
    glColor3f(0.027f, 0.243f, 0.129f); glRectf(0.10, 0.00, -0.10, -0.05);
	glColor3f(0.027f, 0.243f, 0.129f); glRectf(0.20, -0.10, 0.1, -0.15);
	glColor3f(0.027f, 0.243f, 0.129f); glRectf(-0.10, -0.10, -0.20, -0.15);

    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas 2");
    glutDisplayFunc(Tugas2);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}
