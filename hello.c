#include<GL/glut.h>
#include<GL/gl.h>
 
HELLO


void display() {
    glClearColor(1,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void main(int argc, char**argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Hello World");
    glutMainLoop();
}
