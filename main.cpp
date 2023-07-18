#include<windows.h>
#include<gl/glut.h>
#include<stdlib.h>

int is_depth;
void myinit(void) {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
}

void mydisplay(void)
{
    if (is_depth) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }
    else {
        glClear(GL_COLOR_BUFFER_BIT);
    }

    glLineWidth(2.0);
    glColor3f(1.0, 1.0, 1.0);

    //tiang depan kiri
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(-23.0, 20.0, 60);
    glVertex3f(-23.0, -20.0, 60);
    glVertex3f(-18.0, -20.0, 60);
    glVertex3f(-18.0, 20.0, 60);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(-23.0, 20.0, 55);
    glVertex3f(-23.0, -20.0, 55);
    glVertex3f(-18.0, -20.0, 55);
    glVertex3f(-18.0, 20.0, 55);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(-23.0, -20.0, 60);
    glVertex3f(-23.0, 20.0, 60);
    glVertex3f(-23.0, 20.0, 55);
    glVertex3f(-23.0, -20.0, 55);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(-18.0, -20.0, 60);
    glVertex3f(-18.0, 20.0, 60);
    glVertex3f(-18.0, 20.0, 55);
    glVertex3f(-18.0, -20.0, 55);
    glEnd();

    //tiang depan kqnqn
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(8.0, 20.0, 60);
    glVertex3f(8.0, -20.0, 60);
    glVertex3f(13.0, -20.0, 60);
    glVertex3f(13.0, 20.0, 60);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(13.0, 20.0, 60);
    glVertex3f(13.0, -20.0, 60);
    glVertex3f(13.0, -20.0, 55);
    glVertex3f(13.0, 20.0, 55);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(8.0, 20.0, 60);
    glVertex3f(8.0, -20.0, 60);
    glVertex3f(8.0, -20.0, 55);
    glVertex3f(8.0, 20.0, 55);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(8.0, 20.0, 55);
    glVertex3f(8.0, -20.0, 55);
    glVertex3f(13.0, -20.0, 55);
    glVertex3f(13.0, 20.0, 55);
    glEnd();

    //segitiga depan
        glBegin(GL_POLYGON);
    glColor3f(0.525,0.525,0.525);
    glVertex3f(-23.0, 20.0, 60);
    glVertex3f(-5.0, 40.0, 60);
    glVertex3f(13.0, 20.0, 60);
    glEnd();

    //Atap depan kiri
        glBegin(GL_POLYGON);
   glColor3f(0.45,0.45,0.45);
    glVertex3f(-23.0, 20.0, 60);
    glVertex3f(-23.0, 20.0, -15);
    glVertex3f(-5.0, 40.0, -15);
    glVertex3f(-5.0, 40.0, 60);
    glEnd();

        //Atap depan Kanan
        glBegin(GL_POLYGON);
   glColor3f(0.45,0.45,0.45);
    glVertex3f(13.0, 20.0, 60);
    glVertex3f(13.0, 20.0, -15);
    glVertex3f(-5.0, 40.0, -15);
    glVertex3f(-5.0, 40.0, 60);
    glEnd();


      // Segitiga samping kiri
    glBegin(GL_TRIANGLES);
    glColor3f(0.45,0.45,0.45);
    glVertex3f(-60.0, 20.0, 30);//depan
    glVertex3f(-60.0, 40.0, -15);//tengah
    glVertex3f(-60.0, 20.0, -50);//belakang
    glEnd();

    // atap depan
    glBegin(GL_POLYGON);
   glColor3f(0.45,0.45,0.45);
    glVertex3f(-60.0, 40.0, -15);
    glVertex3f(-60.0, 20.0, 30);
    glVertex3f(60.0, 20.0, 30);
    glVertex3f(60.0, 40.0, -15);
    glEnd();

      // atap belakang
    glBegin(GL_POLYGON);
   glColor3f(0.45,0.45,0.45);
    glVertex3f(-60.0, 40.0, -15);
    glVertex3f(-60.0, 20.0, -50);
    glVertex3f(60.0, 20.0, -50);
    glVertex3f(60.0, 40.0, -15);
    glEnd();

     // Segitiga samping kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.45,0.45,0.45);
    glVertex3f(60.0, 20.0, 30);//depan
    glVertex3f(60.0, 40.0, -15);//tengah
    glVertex3f(60.0, 20.0, -50);//belakang
    glEnd();

      //Dinding depan
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-60.0, -20.0, 20);
    glVertex3f(-60.0, 20.0, 20);
    glVertex3f(20.0, 20.0, 20);
    glVertex3f(20.0, -20.0, 20);
    glEnd();

    // pintu depan
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.4,0.4);
    glVertex3f(-12.0, 10.0, 20.1);
    glVertex3f(-12.0, -20.0, 20.1);
    glVertex3f(4.0, -20.0, 20.1);
    glVertex3f(4.0, 10.0, 20.1);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-11.0, -8.0, 20.2);
    glVertex3f(-11.0, 5.0, 20.2);
    glVertex3f(-5.0, 5.0, 20.2);
    glVertex3f(-5.0, -8.0, 20.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-3.0, 8.0, 20.2);
    glVertex3f(-3.0, 6.0, 20.2);
    glVertex3f(3.0, 6.0, 20.2);
    glVertex3f(3.0, 8.0, 20.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-11.0, 6.0, 20.2);
    glVertex3f(-11.0, 8.0, 20.2);
    glVertex3f(-5.0, 8.0, 20.2);
    glVertex3f(-5.0, 6.0, 20.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-3.0, 5.0, 20.2);
    glVertex3f(-3.0, -8.0, 20.2);
    glVertex3f(3.0, -8.0, 20.2);
    glVertex3f(3.0, 5.0, 20.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.90,0.90,0.90);
    glVertex3f(-4.0, 10.0, 20.2);
    glVertex3f(-4.0, -20.0, 20.2);
    glEnd();

    //jendela atas
    glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-12.0, 12.0, 20.2);
    glVertex3f(-12.0, 16.0, 20.2);
    glVertex3f(4.0, 16.0, 20.2);
    glVertex3f(4.0, 12.0, 20.2);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-12.0, 12.0, 20.2);
    glVertex3f(-12.0, 16.0, 20.2);
    glVertex3f(4.0, 16.0, 20.2);
    glVertex3f(4.0, 12.0, 20.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.90,0.90,0.90);
    glVertex3f(-4.0, 16.0, 20.3);
    glVertex3f(-4.0, 12.0, 20.3);
    glEnd();


    // jendela depan samping kiri
    glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-55.0, 15.0, 20.1);
    glVertex3f(-55.0, -10.0, 20.1);
    glVertex3f(-30.0, -10.0, 20.1);
    glVertex3f(-30.0, 15.0, 20.1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-43.0, 15.0, 20.2);
    glVertex3f(-43.0, -10.0, 20.2);
    glEnd();

            glBegin(GL_LINES);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-55.0, 10.0, 20.2);
    glVertex3f(-30.0, 10.0, 20.2);
    glEnd();

        glBegin(GL_LINE_LOOP);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-55.0, 15.0, 20.2);
    glVertex3f(-55.0, -10.0, 20.2);
    glVertex3f(-30.0, -10.0, 20.2);
    glVertex3f(-30.0, 15.0, 20.2);
    glEnd();

    //jendela samping kiri
    glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-60.1, 15.0, -30.0);
    glVertex3f(-60.1, 10.0, -30.0);
    glVertex3f(-60.1, 10.0, -25.0);
    glVertex3f(-60.1, 15.0, -25.0);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-60.1, 15.0, -20.0);
    glVertex3f(-60.1, 10.0, -20.0);
    glVertex3f(-60.1, 10.0, -15.0);
    glVertex3f(-60.1, 15.0, -15.0);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-60.1, 15.0, -10.0);
    glVertex3f(-60.1, 10.0, -10.0);
    glVertex3f(-60.1, 10.0, -5.0);
    glVertex3f(-60.1, 15.0, -5.0);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(-60.1, 15.0, 0.0);
    glVertex3f(-60.1, 10.0, 0.0);
    glVertex3f(-60.1, 10.0, 5.0);
    glVertex3f(-60.1, 15.0, 5.0);
    glEnd();


    // jendela depan samping kanan
    glBegin(GL_POLYGON);
    glColor3f(0.55,0.8,0.8);
    glVertex3f(25.0, 15.0, 10.1);
    glVertex3f(25.0, -10.0, 10.1);
    glVertex3f(55.0, -10.0, 10.1);
    glVertex3f(55.0, 15.0, 10.1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(25.0, 10.0, 10.2);
    glVertex3f(55.0, 10.0, 10.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(40.0, 15.0, 10.2);
    glVertex3f(40.0, -10.0, 10.2);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(25.0, 15.0, 10.2);
    glVertex3f(25.0, -10.0, 10.2);
    glVertex3f(55.0, -10.0, 10.2);
    glVertex3f(55.0, 15.0, 10.2);
    glEnd();

    //Dinding belakang
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-60.0, -20.0, -50);
    glVertex3f(-60.0, 20.0, -50);
    glVertex3f(60.0, 20.0, -50);
    glVertex3f(60.0, -20.0, -50);
    glEnd();

    //atas depan 1
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-60.0, 20.0, 30);
    glVertex3f(-60.0, 20.0, -50);
    glVertex3f(20.0, 20.0, -50);
    glVertex3f(20.0, 20.0, 30);
    glEnd();

    // atas depan 2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-23.0, 20.0, 20);
    glVertex3f(-23.0, 20.0, 60);
    glVertex3f(13.0,  20.0, 60);
    glVertex3f(13.0,  20.0, 20);
    glEnd();

    // Segitiga 2 depan
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-23.0, 20.0,  20);
    glVertex3f(5.0,   20.0, 60);
    glVertex3f(13.0,  20.0, 60);
    glEnd();

    // tembok bawah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-60.0, -20.0, 20);
    glVertex3f(-60.0, -20.0, -50);
    glVertex3f(20.0, -20.0, -50);
    glVertex3f(20.0, -20.0, 20);
    glEnd();

    // teras depan
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 0.90);
    glVertex3f(-23.0, -20.0, 20);
    glVertex3f(-23.0, -20.0, 60);
    glVertex3f(13.0, -20.0, 60);
    glVertex3f(13.0, -20.0, 20);
    glEnd();

        glBegin(GL_LINE_LOOP);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-23.1, -19.9, 20);
    glVertex3f(-23.1, -19.9, 60);
    glVertex3f(13.1, -19.9, 60);
    glVertex3f(13.1, -19.9, 20);
    glEnd();

    // tanah / jalan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.30, 0.0);
    glVertex3f(-80.0, -20.1, 70);
    glVertex3f(-80.0, -20.1, -70);
    glVertex3f(80.0, -20.1, -70);
    glVertex3f(80.0, -20.1, 70);
    glEnd();

    //Dinding kiri
    glBegin(GL_POLYGON);
      glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-60.0, 20.0, 20);
    glVertex3f(-60.0, -20.0, 20);
    glVertex3f(-60.0, -20.0, -50);
    glVertex3f(-60.0, 20.0, -50);
    glEnd();

    //pintu samping kiri
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.0);
    glVertex3f(-60.1, 10.0, -45.1);
    glVertex3f(-60.1, -20.0, -45.1);
    glVertex3f(-60.1, -20.0, -35.1);
    glVertex3f(-60.1, 10.0, -35.1);
    glEnd();

        glBegin(GL_LINE_LOOP);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-60.1, 10.0, -45.2);
    glVertex3f(-60.1, -20.0, -45.2);
    glVertex3f(-60.1, -20.0, -35.2);
    glVertex3f(-60.1, 10.0, -35.2);
    glEnd();

    //Dinding kanan
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(20.0, 20.0, 20);
    glVertex3f(20.0, -20.0, 20);
    glVertex3f(20.0, -20.0, -30);
    glVertex3f(20.0, 20.0, -30);
    glEnd();

    //Dinding depan kanan 2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(20.0, 20.0, 10);
    glVertex3f(20.0, -20.0, 10);
    glVertex3f(60.0, -20.0, 10);
    glVertex3f(60.0, 20.0, 10);
    glEnd();

    //Dinding samping kanan 2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(60.0, 20.0, 10);
    glVertex3f(60.0, -20.0, 10);
    glVertex3f(60.0, -20.0,-50);
    glVertex3f(60.0, 20.0, -50);
    glEnd();

    //Dinding atas kanan 2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-20.0, 20.0, 30);
    glVertex3f(-20.0, 20.0, -50);
    glVertex3f(60.0, 20.0, -50);
    glVertex3f(60.0, 20.0, 30);
    glEnd();

    //Dinding bawah kanan 2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-20.0, -20.0, 10);
    glVertex3f(-20.0, -20.0, -50);
    glVertex3f(60.0, -20.0, -50);
    glVertex3f(60.0, -20.0, 10);
    glEnd();

    //lemari
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(-55.0, -20.0, -48);
    glVertex3f(-55.0, 15.0, -48);
    glVertex3f(-36.0, 15.0, -48);
    glVertex3f(-36.0, -20.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-55.0, -20.0, -38);
    glVertex3f(-55.0, 15.0, -38);
    glVertex3f(-55.0, 15.0, -48);
    glVertex3f(-55.0, -20.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-36.0, -20.0, -38);
    glVertex3f(-36.0, 15.0, -38);
    glVertex3f(-36.0, 15.0, -48);
    glVertex3f(-36.0, -20.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-55.0, 15.0, -38);
    glVertex3f(-36.0, 15.0, -38);
    glVertex3f(-36.0, 15.0, -48);
    glVertex3f(-55.0, 15.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65,0.33,0.18);
    glVertex3f(-55.0, -20.0, -38);
    glVertex3f(-55.0, 15.0, -38);
    glVertex3f(-36.0, 15.0, -38);
    glVertex3f(-36.0, -20.0, -38);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.70,0.70,0.70);
    glVertex3f(-48.0, -3.0, -37.7);
    glVertex3f(-47.0, -3.0, -37.7);
    glVertex3f(-47.0, -2.0, -37.7);
    glVertex3f(-48.0, -2.0, -37.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.70,0.70,0.70);
    glVertex3f(-45.0, -3.0, -37.7);
    glVertex3f(-44.0, -3.0, -37.7);
    glVertex3f(-44.0, -2.0, -37.7);
    glVertex3f(-45.0, -2.0, -37.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.70,0.70,0.70);
    glVertex3f(-46.0, 15.0, -37.7);
    glVertex3f(-46.0, -20.0, -37.7);
    glEnd();

    //Kulkas
    glBegin(GL_POLYGON);
    glColor3f(0.80,0.80,0.80);
    glVertex3f(40.0, -20.0, -48);
    glVertex3f(40.0, 15.0, -48);
    glVertex3f(55.0, 15.0, -48);
    glVertex3f(55.0, -20.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.80,0.80,0.80);
    glVertex3f(40.0, -20.0, -38);
    glVertex3f(40.0, 15.0, -38);
    glVertex3f(40.0, 15.0, -48);
    glVertex3f(40.0, -20.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.80,0.80,0.80);
    glVertex3f(55.0, -20.0, -38);
    glVertex3f(55.0, 15.0, -38);
    glVertex3f(55.0, 15.0, -48);
    glVertex3f(55.0, -20.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.80,0.80,0.80);
    glVertex3f(40.0, 15.0, -38);
    glVertex3f(55.0, 15.0, -38);
    glVertex3f(55.0, 15.0, -48);
    glVertex3f(40.0, 15.0, -48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.80,0.80,0.80);
    glVertex3f(40.0, -20.0, -38);
    glVertex3f(40.0, 15.0, -38);
    glVertex3f(55.0, 15.0, -38);
    glVertex3f(55.0, -20.0, -38);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(53.0, 1.0, -37.8);
    glVertex3f(53.0, 6.0, -37.8);
    glVertex3f(54.0, 6.0, -37.8);
    glVertex3f(54.0, 1.0, -37.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(53.0, -1.0, -37.8);
    glVertex3f(53.0, -8.0, -37.8);
    glVertex3f(54.0, -8.0, -37.8);
    glVertex3f(54.0, -1.0, -37.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(40.0, 0.0, -37.8);
    glVertex3f(55.0, 0.0, -37.8);
    glEnd();

    glutSwapBuffers();
    glFlush();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);//maju
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);//kiri
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);//mundur
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);//kanan
        break;
    case 'q':
    case 'Q':
        glTranslatef(0.0, 3.0, 0.0);//atas
        break;
    case 'e':
    case 'E':
        glTranslatef(0.0, -3.0, 0.0);//bawah
        break;
    case 'k':
        glRotatef(2.0, 1.0, 0.0, 0.0);//putar sumbu x
        break;
    case 'i':
        glRotatef(-2.0, 1.0, 0.0, 0.0);//putar sumbu x
        break;
    case 'l':
        glRotatef(2.0, 0.0, 1.0, 0.0);//putar sumbu y
        break;
    case 'j':
        glRotatef(-2.0, 0.0, 1.0, 0.0);//putar sumbu y
        break;
    case 'u':
        glRotatef(2.0, 0.0, 0.0, 1.0);//putar sumbu z
        break;
    case 'o':
        glRotatef(-2.0, 0.0, 0.0, 1.0);//putar sumbu z
        break;
    }
    mydisplay();
}

void ukuran(int lebar, int tinggi) {
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    gluPerspective(80.0, lebar / tinggi, 5.0, 500.0);//default setting
    glTranslatef(0.0, -5.0, -200.0);//untuk ngatur prespektif
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(250, 100);
    glutCreateWindow("Rizky Satya Pambudi_672020148");
    myinit();
    glutDisplayFunc(mydisplay);
    glutReshapeFunc(ukuran);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
