#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */



#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0,1.0,1.0,1.5);//dark blue
 // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(1,-0.4);
	glVertex2f(1,-0.41);
	glVertex2f(-1,-0.41);
	glVertex2f(-1,-0.4);
		glEnd();

	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-1,-0.25);
	glVertex2f(-1,-0.24);
	glVertex2f(1,-0.24);
	glVertex2f(1,-0.25);
		glEnd();

      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.9,-0.4);
       glVertex2f(-1,-0.25);

     glEnd();

      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.8,-0.4);
       glVertex2f(-0.9,-0.25);

     glEnd();
       glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.7,-0.4);
       glVertex2f(-0.8,-0.25);





     glEnd();
       glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.6,-0.4);
       glVertex2f(-0.7,-0.25);


     glEnd();
       glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.5,-0.4);
       glVertex2f(-0.6,-0.25);

     glEnd();

       glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.4,-0.4);
       glVertex2f(-0.5,-0.25);


    glEnd();
       glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.3,-0.4);
       glVertex2f(-0.4,-0.25);

     glEnd();
     glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.2,-0.4);
       glVertex2f(-0.3,-0.25);

     glEnd();
     glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(-0.1,-0.4);
       glVertex2f(-0.2,-0.25);

     glEnd();
     glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.0,-0.4);
       glVertex2f(-0.1,-0.25);

     glEnd();
     glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.1,-0.4);
       glVertex2f(0.0,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.2,-0.4);
       glVertex2f(0.1,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.3,-0.4);
       glVertex2f(0.2,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.4,-0.4);
       glVertex2f(0.3,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.5,-0.4);
       glVertex2f(0.4,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.6,-0.4);
       glVertex2f(0.5,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.7,-0.4);
       glVertex2f(0.6,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.8,-0.4);
       glVertex2f(0.7,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(0.9,-0.4);
       glVertex2f(0.8,-0.25);

     glEnd();
      glBegin(GL_LINES);
      glColor3f(0,0,0);
       glLineWidth(10);
      glVertex2f(1,-0.4);
       glVertex2f(0.9,-0.25);

     glEnd();
     int i;

	GLfloat x=-0.9f; GLfloat y=-0.30f; GLfloat radius =.08f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=-0.8f; GLfloat y1=-0.31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x2=-0.5f; GLfloat y2=-0.31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x3=-0.4f; GLfloat y3=-0.31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////
	GLfloat x4=0.1f; GLfloat y4=-0.31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius * cos(i *  twicePi / triangleAmount)),
			    y4+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x5=0.0f; GLfloat y5=-0.31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius * cos(i *  twicePi / triangleAmount)),
			    y5+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x6=0.56f; GLfloat y6=-0.31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius * cos(i *  twicePi / triangleAmount)),
			    y6+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x7=0.45f; GLfloat y7=-0.31f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0.3);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius * cos(i *  twicePi / triangleAmount)),
			    y7+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
   glColor3f(0.0f, 0.2f, 0.5f);//cyan
	glVertex2f(-1,-0.29);
	glVertex2f(-0.25,-0.29);
	glVertex2f(-0.25,0.0);
	glVertex2f(-1.0,0.0);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.2f, 0.5f);//cyan
	glVertex2f(-0.15,-0.29);
	glVertex2f(0.6,-0.29);
	glVertex2f(0.6,0.0);
	glVertex2f(-0.15,0.0);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3f(0.8f, 0.5f, 0.8f);//cyan
    glVertex2f(0.6,-0.29);
	glVertex2f(0.8,-0.29);
	glVertex2f(0.6,0.0);
	 glEnd();
	 glBegin(GL_QUADS);
    glColor3f(0.0f, 0.2f, 0.5f);//cyan
	glVertex2f(-0.4,-0.2);
	glVertex2f(0.6,-0.2);
	glVertex2f(0.6,-0.15);
	glVertex2f(-0.4,-0.15);
    glEnd();


    glBegin(GL_QUADS);
   glColor3f(0.5f, 0.2f, 0.5f);//cyan
	glVertex2f(-1,-0.15);
	glVertex2f(-0.25,-0.15);
	glVertex2f(-0.25,0.0);
	glVertex2f(-1.0,0.0);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(0.5f, 0.2f, 0.5f);//cyan
	glVertex2f(-0.15,-0.15);
	glVertex2f(0.6,-0.15);
	glVertex2f(0.6,0.0);
	glVertex2f(-0.15,0.0);
    glEnd();






	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
