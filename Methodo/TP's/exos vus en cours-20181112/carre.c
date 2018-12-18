#include <GL/glut.h>
#include <math.h>

void carre ()
{
  glClear (GL_COLOR_BUFFER_BIT); /*nettoyer le buffer des autres coulers*/

  glColor3f (1.0, 1.0, 1.0); /*dessiner en blanc rouge_vert_bleu  */
  glRectf (50, 50, 150, 150);/*dessiner un rectangle on voit les coordonnees  */

  glColor3f (1.0, 0.5, 0.5);
  /*glBegin (GL_QUADS);
     glVertex2f ((-50.0 * cos (3.141592 / 6.0) + 50.0 * sin (3.141592 / 6.0)) + 300.0, (-50.0 * sin (3.141592 / 6.0) - 50.0 * cos (3.141592 / 6.0)) + 300.0); 
     glVertex2f (( 50.0 * cos (3.141592 / 6.0) + 50.0 * sin (3.141592 / 6.0)) + 300.0, ( 50.0 * sin (3.141592 / 6.0) - 50.0 * cos (3.141592 / 6.0)) + 300.0); 
     glVertex2f (( 50.0 * cos (3.141592 / 6.0) - 50.0 * sin (3.141592 / 6.0)) + 300.0, ( 50.0 * sin (3.141592 / 6.0) + 50.0 * cos (3.141592 / 6.0)) + 300.0);
     glVertex2f ((-50.0 * cos (3.141592 / 6.0) - 50.0 * sin (3.141592 / 6.0)) + 300.0, (-50.0 * sin (3.141592 / 6.0) + 50.0 * cos (3.141592 / 6.0)) + 300.0); 
  glEnd ();*/
  
  glPushMatrix ();
  glTranslatef (300,300, 0);
  glRotatef (30, 0, 0, 1);
  glRectf (-50, -50, 50, 50);
  glPopMatrix ();
   
  glutSwapBuffers ();
}

void init ()
{
   glClearColor (0.0, 1.0, 0.0, 0.0);

   glViewport (0, 0, 800, 800);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   glOrtho (0.0, 800.0, 0, 800.0, -1.0, 1.0);
}

int main (int argc, char ** argv)
{
   glutInit (&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("carre");
   init ();
   glutDisplayFunc (carre);
   glutMainLoop ();
   return 0;
}

