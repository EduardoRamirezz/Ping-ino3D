#include <GL/glut.h>

float rotate_y = 0;
float rotate_x = 0;
float scale = 600.0f; 

void display() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotatef(rotate_x, 1.0, 0.0, 0.0);
    glRotatef(rotate_y, 0.0, 1.0, 0.0);
    
    //IMAGEN TRASERA
    glColor3f(0.2, 0.2, 1.0); 
    glBegin(GL_TRIANGLES);
	glVertex3f(199.00/scale, 20.00/scale, 8.00/scale);//1
	glVertex3f(161.00/scale, 20.00/scale, 8.00/scale);
	glVertex3f(180.00/scale, 39.00/scale, 8.00/scale);
	
	glVertex3f(160.00/scale, 21.00/scale, 8.00/scale);//2
	glVertex3f(179.00/scale, 40.00/scale, 8.00/scale);
	glVertex3f(141.00/scale, 59.00/scale, 8.00/scale);
	
	glVertex3f(159.00/scale, 21.00/scale, 8.00/scale);//3
	glVertex3f(139.00/scale, 59.00/scale, 8.00/scale);
	glVertex3f(121.00/scale, 59.00/scale, 8.00/scale);
	
	glVertex3f(180.00/scale, 41.00/scale, 8.00/scale);//4
	glVertex3f(141.00/scale, 60.00/scale, 8.00/scale);
	glVertex3f(180.00/scale, 99.00/scale, 8.00/scale);
		
	glVertex3f(140.00/scale, 61.00/scale, 8.00/scale);//5
	glVertex3f(101.00/scale, 100.00/scale, 8.00/scale);
	glVertex3f(179.00/scale, 100.00/scale, 8.00/scale);
		
	glVertex3f(139.00/scale, 61.00/scale, 8.00/scale);//6
	glVertex3f(121.00/scale, 61.00/scale, 8.00/scale);
	glVertex3f(101.00/scale, 99.00/scale, 8.00/scale);
	
	glVertex3f(100.00/scale, 99.00/scale, 8.00/scale);//7
	glVertex3f(95.00/scale, 41.00/scale, 8.00/scale);
	glVertex3f(119.00/scale, 60.00/scale, 8.00/scale);
	
	glVertex3f(101.00/scale, 101.00/scale, 8.00/scale);//8
	glVertex3f(179.00/scale, 101.00/scale, 8.00/scale);
	glVertex3f(110.00/scale, 159.00/scale, 8.00/scale);
	
	glVertex3f(179.00/scale, 103.00/scale, 8.00/scale);//9
	glVertex3f(112.00/scale, 158.00/scale, 8.00/scale);
	glVertex3f(188.00/scale, 148.00/scale, 8.00/scale);
	
	glVertex3f(111.00/scale, 160.00/scale, 8.00/scale);//10
	glVertex3f(189.00/scale, 150.00/scale, 8.00/scale);
	glVertex3f(160.00/scale, 218.00/scale, 8.00/scale);
		
	glVertex3f(190.00/scale, 151.00/scale, 8.00/scale);//11
	glVertex3f(161.00/scale, 220.00/scale, 8.00/scale);
	glVertex3f(199.00/scale, 219.00/scale, 8.00/scale);
	
	glVertex3f(110.00/scale, 161.00/scale, 8.00/scale);//12
	glVertex3f(159.00/scale, 220.00/scale, 8.00/scale);
	glVertex3f(111.00/scale, 279.00/scale, 8.00/scale);
	
	glVertex3f(161.00/scale, 221.00/scale, 8.00/scale);//13
	glVertex3f(199.00/scale, 241.00/scale, 8.00/scale);
	glVertex3f(189.00/scale, 318.00/scale, 8.00/scale);
	
	glVertex3f(160.00/scale, 221.00/scale, 8.00/scale);//14
	glVertex3f(111.00/scale, 280.00/scale, 8.00/scale);
	glVertex3f(189.00/scale, 319.00/scale, 8.00/scale);
		
	glVertex3f(111.00/scale, 281.00/scale, 8.00/scale);//15
	glVertex3f(121.00/scale, 339.00/scale, 8.00/scale);
	glVertex3f(189.00/scale, 320.00/scale, 8.00/scale);
	
	glVertex3f(110.00/scale, 280.00/scale, 8.00/scale);//16
	glVertex3f(40.00/scale, 240.00/scale, 8.00/scale);
	glVertex3f(119.00/scale, 339.00/scale, 8.00/scale);
	
	glVertex3f(190.00/scale, 321.00/scale, 8.00/scale);//17
	glVertex3f(121.00/scale, 340.00/scale, 8.00/scale);
	glVertex3f(170.00/scale, 379.00/scale, 8.00/scale);
		
	glVertex3f(120.00/scale, 341.00/scale, 8.00/scale);//18
	glVertex3f(130.00/scale, 300.00/scale, 8.00/scale);
	glVertex3f(169.00/scale, 380.00/scale, 8.00/scale);
	
	glVertex3f(169.00/scale, 381.00/scale, 8.00/scale);//19
	glVertex3f(131.00/scale, 400.00/scale, 8.00/scale);
	glVertex3f(140.00/scale, 518.00/scale, 8.00/scale);
	
	glVertex3f(170.00/scale, 381.00/scale, 8.00/scale);//20
	glVertex3f(179.00/scale, 400.00/scale, 8.00/scale);
	glVertex3f(141.00/scale, 519.00/scale, 8.00/scale);
		
	glVertex3f(180.00/scale, 401.00/scale, 8.00/scale);//21
	glVertex3f(142.00/scale, 520.00/scale, 8.00/scale);
	glVertex3f(180.00/scale, 520.00/scale, 8.00/scale);
	
	glVertex3f(181.00/scale, 401.00/scale, 8.00/scale);//22
	glVertex3f(181.00/scale, 520.00/scale, 8.00/scale);
	glVertex3f(219.00/scale, 520.00/scale, 8.00/scale);
	

	
	//IMAGEN DELANTERA
	glColor3f(0.0, 0.0, 0.0); 
	glBegin(GL_TRIANGLES);
	glVertex3f(199.00/scale, 20.00/scale, -8.00/scale);//1
	glVertex3f(161.00/scale, 20.00/scale, -8.00/scale);
	glVertex3f(180.00/scale, 39.00/scale, -8.00/scale);
	
	glVertex3f(160.00/scale, 21.00/scale, -8.00/scale);//2
	glVertex3f(179.00/scale, 40.00/scale, -8.00/scale);
	glVertex3f(141.00/scale, 59.00/scale, -8.00/scale);
	
	glVertex3f(159.00/scale, 21.00/scale, -8.00/scale);//3
	glVertex3f(139.00/scale, 59.00/scale, -8.00/scale);
	glVertex3f(121.00/scale, 59.00/scale, -8.00/scale);
	
	glVertex3f(180.00/scale, 41.00/scale, -8.00/scale);//4
	glVertex3f(141.00/scale, 60.00/scale, -8.00/scale);
	glVertex3f(180.00/scale, 99.00/scale, -8.00/scale);
		
	glVertex3f(140.00/scale, 61.00/scale, -8.00/scale);//5
	glVertex3f(101.00/scale, 100.00/scale, -8.00/scale);
	glVertex3f(179.00/scale, 100.00/scale, -8.00/scale);
		
	glVertex3f(139.00/scale, 61.00/scale, -8.00/scale);//6
	glVertex3f(121.00/scale, 61.00/scale, -8.00/scale);
	glVertex3f(101.00/scale, 99.00/scale, -8.00/scale);
	
	glVertex3f(100.00/scale, 99.00/scale, -8.00/scale);//7
	glVertex3f(95.00/scale, 41.00/scale, -8.00/scale);
	glVertex3f(119.00/scale, 60.00/scale, -8.00/scale);
	
	glVertex3f(101.00/scale, 101.00/scale, -8.00/scale);//8
	glVertex3f(179.00/scale, 101.00/scale, -8.00/scale);
	glVertex3f(110.00/scale, 159.00/scale, -8.00/scale);
	
	glVertex3f(179.00/scale, 103.00/scale, -8.00/scale);//9
	glVertex3f(112.00/scale, 158.00/scale, -8.00/scale);
	glVertex3f(188.00/scale, 148.00/scale, -8.00/scale);
	
	glVertex3f(111.00/scale, 160.00/scale, -8.00/scale);//10
	glVertex3f(189.00/scale, 150.00/scale, -8.00/scale);
	glVertex3f(160.00/scale, 218.00/scale, -8.00/scale);
		
	glVertex3f(190.00/scale, 151.00/scale, -8.00/scale);//11
	glVertex3f(161.00/scale, 220.00/scale, -8.00/scale);
	glVertex3f(199.00/scale, 239.00/scale, -8.00/scale);
	
	glVertex3f(110.00/scale, 161.00/scale, -8.00/scale);//12
	glVertex3f(159.00/scale, 220.00/scale, -8.00/scale);
	glVertex3f(111.00/scale, 279.00/scale, -8.00/scale);
	
	glVertex3f(161.00/scale, 221.00/scale, -8.00/scale);//13
	glVertex3f(199.00/scale, 241.00/scale, -8.00/scale);
	glVertex3f(189.00/scale, 318.00/scale, -8.00/scale);
	
	glVertex3f(160.00/scale, 221.00/scale, -8.00/scale);//14
	glVertex3f(111.00/scale, 280.00/scale, -8.00/scale);
	glVertex3f(189.00/scale, 319.00/scale, -8.00/scale);
		
	glVertex3f(111.00/scale, 281.00/scale, -8.00/scale);//15
	glVertex3f(121.00/scale, 339.00/scale, -8.00/scale);
	glVertex3f(189.00/scale, 320.00/scale, -8.00/scale);
	
	glVertex3f(110.00/scale, 280.00/scale, -8.00/scale);//16
	glVertex3f(40.00/scale, 240.00/scale, -8.00/scale);
	glVertex3f(119.00/scale, 339.00/scale, -8.00/scale);
	
	glVertex3f(190.00/scale, 321.00/scale, -8.00/scale);//17
	glVertex3f(121.00/scale, 340.00/scale, -8.00/scale);
	glVertex3f(170.00/scale, 379.00/scale, -8.00/scale);
		
	glVertex3f(120.00/scale, 341.00/scale, -8.00/scale);//18
	glVertex3f(130.00/scale, 399.00/scale, -8.00/scale);
	glVertex3f(169.00/scale, 380.00/scale, -8.00/scale);
	
	glVertex3f(169.00/scale, 381.00/scale, -8.00/scale);//19
	glVertex3f(131.00/scale, 400.00/scale, -8.00/scale);
	glVertex3f(140.00/scale, 518.00/scale, -8.00/scale);
	
	glVertex3f(170.00/scale, 381.00/scale, -8.00/scale);//20
	glVertex3f(179.00/scale, 400.00/scale, -8.00/scale);
	glVertex3f(141.00/scale, 519.00/scale, -8.00/scale);
		
	glVertex3f(180.00/scale, 401.00/scale, -8.00/scale);//21
	glVertex3f(142.00/scale, 520.00/scale, -8.00/scale);
	glVertex3f(180.00/scale, 520.00/scale, -8.00/scale);
	
	glVertex3f(181.00/scale, 401.00/scale, -8.00/scale);//22
	glVertex3f(181.00/scale, 520.00/scale, -8.00/scale);
	glVertex3f(219.00/scale, 520.00/scale, -8.00/scale);
	
	glEnd();
	
	//LATERALES
	glColor3f(1.0, 0.2, 0.3); //Engloba todo para un mismo color
	glBegin(GL_QUADS);
	glVertex3f(159.00/scale, 21.00/scale, 8.00/scale);//1
	glVertex3f(159.00/scale, 21.00/scale, -8.00/scale);
	glVertex3f(121.00/scale, 59.00/scale, -8.00/scale);
	glVertex3f(121.00/scale, 59.00/scale, 8.00/scale);
	
	glVertex3f(119.00/scale, 60.00/scale, -8.00/scale);//2
	glVertex3f(119.00/scale, 60.00/scale, 8.00/scale);
	glVertex3f(95.00/scale, 41.00/scale, 8.00/scale);
	glVertex3f(95.00/scale, 41.00/scale, -8.00/scale);
	
	glVertex3f(95.00/scale, 41.00/scale, 8.00/scale);//3
	glVertex3f(95.00/scale, 41.00/scale, -8.00/scale);
	glVertex3f(100.00/scale, 99.00/scale, -8.00/scale);
	glVertex3f(100.00/scale, 99.00/scale, 8.00/scale);
	
	glVertex3f(101.00/scale, 101.00/scale, -8.00/scale);//4
	glVertex3f(101.00/scale, 101.00/scale, 8.00/scale);
	glVertex3f(110.00/scale, 159.00/scale, 8.00/scale);
	glVertex3f(110.00/scale, 159.00/scale, -8.00/scale);
	
	glVertex3f(110.00/scale, 161.00/scale, 8.00/scale);//5
	glVertex3f(110.00/scale, 161.00/scale, -8.00/scale);
	glVertex3f(111.00/scale, 279.00/scale, -8.00/scale);
	glVertex3f(111.00/scale, 279.00/scale, 8.00/scale);
	
	glVertex3f(110.00/scale, 280.00/scale, -8.00/scale);//6
	glVertex3f(110.00/scale, 280.00/scale, 8.00/scale);
	glVertex3f(40.00/scale, 240.00/scale, 8.00/scale);
	glVertex3f(40.00/scale, 240.00/scale, -8.00/scale);
	
	glVertex3f(40.00/scale, 240.00/scale, 8.00/scale);//7
	glVertex3f(40.00/scale, 240.00/scale, -8.00/scale);
	glVertex3f(119.00/scale, 339.00/scale, -8.00/scale);
	glVertex3f(119.00/scale, 339.00/scale, 8.00/scale);
	
	glVertex3f(120.00/scale, 341.00/scale, -8.00/scale);//8
	glVertex3f(120.00/scale, 341.00/scale, 8.00/scale);
	glVertex3f(130.00/scale, 399.00/scale, 8.00/scale);
	glVertex3f(130.00/scale, 399.00/scale, -8.00/scale);
	
	glVertex3f(131.00/scale, 400.00/scale, 8.00/scale);//9
	glVertex3f(131.00/scale, 400.00/scale, -8.00/scale);
	glVertex3f(140.00/scale, 518.00/scale, -8.00/scale);
	glVertex3f(140.00/scale, 518.00/scale, 8.00/scale);
	
	glVertex3f(142.00/scale, 520.00/scale, -8.00/scale);//10
	glVertex3f(142.00/scale, 520.00/scale, 8.00/scale);
	glVertex3f(180.00/scale, 520.00/scale, 8.00/scale);
	glVertex3f(180.00/scale, 520.00/scale, -8.00/scale);
	
	glVertex3f(181.00/scale, 520.00/scale, 8.00/scale);//11
	glVertex3f(181.00/scale, 520.00/scale, -8.00/scale);
	glVertex3f(219.00/scale, 520.00/scale, -8.00/scale);
	glVertex3f(219.00/scale, 520.00/scale, 8.00/scale);
	
	glVertex3f(219.00/scale, 520.00/scale, -8.00/scale);//12
	glVertex3f(219.00/scale, 520.00/scale, 8.00/scale);
	glVertex3f(181.00/scale, 401.00/scale, 8.00/scale);
	glVertex3f(181.00/scale, 401.00/scale, -8.00/scale);
	
	glVertex3f(179.00/scale, 400.00/scale, 8.00/scale);//13
	glVertex3f(179.00/scale, 400.00/scale, -8.00/scale);
	glVertex3f(170.00/scale, 381.00/scale, -8.00/scale);
	glVertex3f(170.00/scale, 381.00/scale, 8.00/scale);
	
	glVertex3f(170.00/scale, 379.00/scale, -8.00/scale);//14
	glVertex3f(170.00/scale, 379.00/scale, 8.00/scale);
	glVertex3f(190.00/scale, 321.00/scale, 8.00/scale);
	glVertex3f(190.00/scale, 321.00/scale, -8.00/scale);
	
	glVertex3f(189.00/scale, 318.00/scale, 8.00/scale);//15
	glVertex3f(189.00/scale, 318.00/scale, -8.00/scale);
	glVertex3f(199.00/scale, 241.00/scale, -8.00/scale);
	glVertex3f(199.00/scale, 241.00/scale, 8.00/scale);

	glVertex3f(199.00/scale, 239.00/scale, -8.00/scale);//16
	glVertex3f(199.00/scale, 239.00/scale, 8.00/scale);
	glVertex3f(190.00/scale, 151.00/scale, 8.00/scale);
	glVertex3f(190.00/scale, 151.00/scale, -8.00/scale);
	
	glVertex3f(188.00/scale, 148.00/scale, 8.00/scale);//17
	glVertex3f(188.00/scale, 148.00/scale, -8.00/scale);
	glVertex3f(179.00/scale, 103.00/scale, -8.00/scale);
	glVertex3f(179.00/scale, 103.00/scale, 8.00/scale);
	
	glVertex3f(180.00/scale, 99.00/scale, -8.00/scale);//18
	glVertex3f(180.00/scale, 99.00/scale, 8.00/scale);
	glVertex3f(180.00/scale, 41.00/scale, 8.00/scale);
	glVertex3f(180.00/scale, 41.00/scale, -8.00/scale);
	
	glVertex3f(180.00/scale, 39.00/scale, 8.00/scale);//19
	glVertex3f(180.00/scale, 39.00/scale, -8.00/scale);
	glVertex3f(199.00/scale, 20.00/scale, -8.00/scale);
	glVertex3f(199.00/scale, 20.00/scale, 8.00/scale);
	
	glVertex3f(199.00/scale, 20.00/scale, -8.00/scale);//20
	glVertex3f(199.00/scale, 20.00/scale, 8.00/scale);
	glVertex3f(161.00/scale, 20.00/scale, 8.00/scale);
	glVertex3f(161.00/scale, 20.00/scale, -8.00/scale);
	


	
	glEnd();
    glutSwapBuffers();
}

void specialKeys(int key, int x, int y) {
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 5;
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 5;
    else if (key == GLUT_KEY_UP)
        rotate_x += 5;
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 5;
    glutPostRedisplay();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    int screenWidth = glutGet(GLUT_SCREEN_WIDTH);
    int screenHeight = glutGet(GLUT_SCREEN_HEIGHT);
    glutInitWindowSize(screenWidth, screenHeight);
    glutCreateWindow("Pingüino 3D");
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    glutMainLoop();
    return 0;
}
