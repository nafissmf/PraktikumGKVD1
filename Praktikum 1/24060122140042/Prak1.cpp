#include <GL/glut.h>

void myInit(void){
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 600, 0.0, 600);
}

void ipong(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.0f,0.0f, 0.0f);
	glVertex2i(200, 500);
	glVertex2i(400, 500);
	glVertex2i(200, 200);
	glVertex2i(400, 200);
	glEnd();
	
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(208, 492);
	glVertex2i(392, 492);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2i(208, 208);
	glVertex2i(392, 208);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(265, 492);
	glVertex2i(335, 492);
	glVertex2i(330, 482);
	glVertex2i(270, 482);
	glEnd();
	
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_QUADS);
	glColor4f(1.0f, 1.0f, 1.0f, 0.7f);
	glVertex2i(220, 260);
	glVertex2i(380, 260);
	glVertex2i(380, 220);
	glVertex2i(220, 220);
	glEnd();
	glDisable(GL_BLEND);
		
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(225, 475);
	glVertex2i(255, 475);
	glVertex2i(255, 445);
	glVertex2i(225, 445);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2i(265, 475);
	glVertex2i(295, 475);
	glVertex2i(295, 445);
	glVertex2i(265, 445);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2i(305, 475);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2i(335, 475);
	glVertex2i(335, 445);
	glVertex2i(305, 445);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.2f, 0.0f, 0.3f);
	glVertex2i(345, 475);
	glVertex2i(375, 475);
	glVertex2i(375, 445);
	glVertex2i(345, 445);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(225, 425);
	glVertex2i(255, 425);
	glVertex2i(255, 395);
	glVertex2i(225, 395);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2i(265, 425);
	glVertex2i(295, 425);
	glVertex2i(295, 395);
	glVertex2i(265, 395);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2i(305, 425);
	glVertex2i(335, 425);
	glVertex2i(335, 395);
	glVertex2i(305, 395);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(345, 425);
	glVertex2i(375, 425);
	glVertex2i(375, 395);
	glVertex2i(345, 395);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2i(225, 375);
	glVertex2i(255, 375);
	glVertex2i(255, 345);
	glVertex2i(225, 345);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(265, 375);
	glVertex2i(295, 375);
	glVertex2i(295, 345);
	glVertex2i(265, 345);
	glEnd();
	
	
	glBegin(GL_QUADS);
	glColor3f(0.9f, 1.0f, 0.3f);
	glVertex2i(225, 255);
	glVertex2i(255, 255);
	glVertex2i(255, 225);
	glVertex2i(225, 225);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2i(265, 255);
	glVertex2i(295, 255);
	glVertex2i(295, 225);
	glVertex2i(265, 225);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2i(305, 255);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2i(335, 255);
	glVertex2i(335, 225);
	glVertex2i(305, 225);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.21f, 0.30f, 0.3f);
	glVertex2i(345, 255);
	glVertex2i(375, 255);
	glVertex2i(375, 225);
	glVertex2i(345, 225);
	glEnd();
	glFlush();
}

void No1(void) {
    glBegin(GL_LINE_STRIP);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(50, 500);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(100, 550);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(150, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(200, 550);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(250, 550);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(270, 500);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(230, 525);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(350, 550);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(400, 510);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(360, 490);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(320, 490);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(300, 510);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(490, 550);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(450, 500);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(520, 490);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(480, 450);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(50, 400);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(100, 400);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(150, 350);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(100, 350);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(260, 350);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(200, 400);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(250, 410);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(190, 350);
    glColor3f(0.53f, 0.81f, 0.98f);
    glVertex2i(300, 360);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(600, 600);
	//glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("x");
	myInit();
	glutDisplayFunc(No1);
    glutMainLoop();
    return 0;
}



