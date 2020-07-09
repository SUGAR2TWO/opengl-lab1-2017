#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>
#include <cmath>

void Render()
{	
	float a,x,y,z;
	int i;

	glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
	/*glVertex3f(3,1,0);
	glVertex3f(-2,4,0);*/
	glVertex3f(2,7,0);
	for( i = 0; i <= 20; i++ )
			   {
				   
                   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 0);
				   glVertex3f(2,7,0);
               }
	
glEnd();

glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
	
	for( i = 20; i <= 25; i++ )
			   {
				   
                   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 0);
				   glVertex3f(-5,6,0);
               }
	
glEnd();

glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
	glVertex3f(-5,6,0);
	
	for( i = 20; i <= 20; i++ )
			   {
				   
                   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 0);
				   glVertex3f(-2,4,0);
				   glVertex3f(2,7,0);
				   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 0);
               }
	
glEnd();


glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
	/*glVertex3f(3,1,0);
	glVertex3f(-2,4,0);*/
	glVertex3f(2,7,5);
	for( i = 0; i <= 20; i++ )
			   {
				   
                   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 5);
				   glVertex3f(2,7,5);
               }
	
glEnd();

glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
	
	for( i = 20; i <= 25; i++ )
			   {
				   
                   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 5);
				   glVertex3f(-5,6,5);
               }
	
glEnd();

glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
	glVertex3f(-5,6,5);
	
	for( i = 20; i <= 20; i++ )
			   {
				   
                   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 5);
				   glVertex3f(-2,4,5);
				   glVertex3f(2,7,5);
				   a= (float)i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 5);
               }
	
glEnd();


glBegin(GL_QUADS);
glColor3f( 1.0f,1.0f,0.0f);
glNormal3f(0,0,1);
    glVertex3f(-5,6,0);
	glVertex3f(-2,4,0);
	glVertex3f(-2,4,5);
	glVertex3f(-5,6,5);	
glEnd();

glBegin(GL_QUADS);
glColor3f( 0.0f,1.0f,0.0f);
glNormal3f(0,0,1);
	glVertex3f(-2,4,0);
	glVertex3f(-2,4,5);
	glVertex3f(2,7,5);
	glVertex3f(2,7,0);
glEnd();

glBegin(GL_QUADS);
glColor3f( 1.0f,0.0f,0.0f);
glNormal3f(0,0,1);
    glVertex3f(-5,6,0);
	glVertex3f(-4,1,0);
	glVertex3f(-4,1,5);
	glVertex3f(-5,6,5);	
glEnd();

glColor3f(0.0f,1.0f,1.5f);

    glBegin( GL_TRIANGLE_STRIP);
               for( i = -81; i <= 100; i++ )
			   {
                   a= i/360.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.04f+2.5f, sin( a ) * 3.05f+4, 0);
				   glVertex3f( cos( a ) * 3.04f+2.5f, sin( a ) * 3.05f+4, 5);
               }
    glEnd();

	/*glBegin( GL_QUAD_STRIP);
               for( i = -81; i <= 100; i++ )
			   {
                   a= i/360.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.04f+2.5f, sin( a ) * 3.05f+4, 0);
				   glVertex3f( cos( a ) * 3.04f+2.5f, sin( a ) * 3.05f+4, 5);
               }
    glEnd();*/



glColor3f(0.0f,1.0f,0.0f);
	glBegin( GL_QUAD_STRIP);
               for( i = 0; i <= 25; i++ )
			   {
                   
				   a= i/50.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 0);
				   glVertex3f( cos( a ) * 3.5f-0.5f, sin( a ) * 1.5f+1, 5);
               }
    glEnd();

glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
glVertex3f(2.5,4,0);
	 for( i = -81; i <= 100; i++ )
			   {
                   a= i/360.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.04f+2.5f, sin( a ) * 3.05f+4, 0);				   
				   glVertex3f(2.5,4,0);
               }
glEnd();

glBegin(GL_TRIANGLE_STRIP);
glColor3f( 1.0f,0.0f,1.0f);
glNormal3f(0,0,1);
glVertex3f(2.5,4,5);
	 for( i = -81; i <= 100; i++ )
			   {
                   a= i/360.0f*2.0f*3.1415f;
				   glVertex3f( cos( a ) * 3.04f+2.5f, sin( a ) * 3.05f+4, 5);				   
				   glVertex3f(2.5,4,5);
               }
	
glEnd();
}   

