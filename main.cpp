#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

int x, y;
int where_to_rotate = 0;
float rotate_angle = 0;
float x_x = 0, y_y = 0;

void sky(int x, int y)
{
    glColor3f(0.4, 0.8, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(x - 1500, y + 1800);
    glVertex2f(x + 4000, y + 1800);
    glVertex2f(x + 4000, y - 2000);
    glVertex2f(x - 1500, y - 2000);
    glVertex2f(x - 1500, y + 1800);
    glEnd();
}

void earth(int x, int y)
{
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x - 1500, y - 4000);
    glVertex2f(x + 4000, y - 4000);
    glVertex2f(x + 4000, y - 2000);
    glVertex2f(x - 1500, y - 2000);
    glVertex2f(x - 1500, y - 4000);
    glEnd();
}

void house1(int x, int y)
{
    glColor3f(0.5, 0.8, 0.1);
    glBegin(GL_POLYGON);
    glVertex2f(x + 1000, y - 2400);
    glVertex2f(x + 1500, y - 2400);
    glVertex2f(x + 1500, y - 2750);
    glVertex2f(x + 1000, y - 2750);
    glVertex2f(x + 1000, y - 2400);
    glEnd();
}

void house2(int x, int y)
{
    glColor3f(0.9, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(x + 000, y - 3000);
    glVertex2f(x + 500, y - 3000);
    glVertex2f(x + 500, y - 2550);
    glVertex2f(x + 000, y - 2550);
    glVertex2f(x + 000, y - 3000);
    glEnd();
}

void house3(int x, int y)
{
    glColor3f(0.1, 0.5, 0.8);
    glBegin(GL_POLYGON);
    glVertex2f(x + 2500, y - 3500);
    glVertex2f(x + 3000, y - 3500);
    glVertex2f(x + 3000, y - 2950);
    glVertex2f(x + 2500, y - 2950);
    glVertex2f(x + 2500, y - 3500);
    glEnd();
}

void door1(int x, int y)
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 1150, y - 2750);
    glVertex2f(x + 1300, y - 2750);
    glVertex2f(x + 1300, y - 2500);
    glVertex2f(x + 1150, y - 2500);
    glVertex2f(x + 1150, y - 2750);
    glEnd();
}

void door2(int x, int y)
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 150, y - 0);
    glVertex2f(x + 300, y - 0);
    glVertex2f(x + 300, y + 250);
    glVertex2f(x + 150, y + 250);
    glVertex2f(x + 150, y - 0);
    glEnd();
}

void door3(int x, int y)
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 150, y - 0);
    glVertex2f(x + 300, y - 0);
    glVertex2f(x + 300, y + 250);
    glVertex2f(x + 150, y + 250);
    glVertex2f(x + 150, y - 0);
    glEnd();
}

void door1l(int x, int y)
{
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 1150, y - 2750);
    glVertex2f(x + 1300, y - 2750);
    glVertex2f(x + 1300, y - 2500);
    glVertex2f(x + 1150, y - 2500);
    glVertex2f(x + 1150, y - 2750);
    glEnd();
}

void door2l(int x, int y)
{
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 150, y - 0);
    glVertex2f(x + 300, y - 0);
    glVertex2f(x + 300, y + 250);
    glVertex2f(x + 150, y + 250);
    glVertex2f(x + 150, y - 0);
    glEnd();
}

void door3l(int x, int y)
{
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 150, y - 0);
    glVertex2f(x + 300, y - 0);
    glVertex2f(x + 300, y + 250);
    glVertex2f(x + 150, y + 250);
    glVertex2f(x + 150, y - 0);
    glEnd();
}

void roof1(int x, int y)
{
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 1000, y - 2400);
    glVertex2f(x + 1500, y - 2400);
    glVertex2f(x + 1250, y - 2100);
    glVertex2f(x + 1000, y - 2400);
    glEnd();
}

void roof2(int x, int y)
{
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 000, y - 2550);
    glVertex2f(x + 500, y - 2550);
    glVertex2f(x + 250, y - 2200);
    glVertex2f(x + 000, y - 2550);
    glEnd();
}

void roof3(int x, int y)
{
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 3000, y - 2950);
    glVertex2f(x + 2500, y - 2950);
    glVertex2f(x + 2750, y - 2650);
    glVertex2f(x + 3000, y - 2950);
    glEnd();
}

void mountain1(int x, int y)
{
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x - 1500, y - 2000);
    glVertex2f(x - 800, y - 700);
    glVertex2f(x - 200, y - 2000);
    glVertex2f(x - 1500, y - 2000);
    glEnd();
}

void mountain2(int x, int y)
{
    glColor3f(0.5, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x - 200, y - 2000);
    glVertex2f(x + 300, y - 300);
    glVertex2f(x + 700, y - 2000);
    glVertex2f(x - 200, y - 2000);
    glEnd();
}

void mountain3(int x, int y)
{
    glColor3f(0.5, 0.3, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 700, y - 2000);
    glVertex2f(x + 1400, y - 800);
    glVertex2f(x + 1800, y - 2000);
    glVertex2f(x + 700, y - 2000);
    glEnd();
}

void mountain4(int x, int y)
{
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 1800, y - 2000);
    glVertex2f(x + 2250, y - 600);
    glVertex2f(x + 2900, y - 2000);
    glVertex2f(x + 1800, y - 2000);
    glEnd();
}

void mountain5(int x, int y)
{
    glColor3f(0.5, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x + 2900, y - 2000);
    glVertex2f(x + 3500, y - 990);
    glVertex2f(x + 4000, y - 2000);
    glVertex2f(x + 2900, y - 2000);
    glEnd();
}

void skyn(int x, int y)
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x - 1500, y + 1800);
    glVertex2f(x + 4000, y + 1800);
    glVertex2f(x + 4000, y - 2000);
    glVertex2f(x - 1500, y - 2000);
    glVertex2f(x - 1500, y + 1800);
    glEnd();
}

void earthn(int x, int y)
{
    glColor3f(0.0, 0.4, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(x - 1500, y - 4000);
    glVertex2f(x + 4000, y - 4000);
    glVertex2f(x + 4000, y - 2000);
    glVertex2f(x - 1500, y - 2000);
    glVertex2f(x - 1500, y - 4000);
    glEnd();
}

void draw_pixel(float x1, float y1)
{
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2f(x1, y1);
    glEnd();
}

void draw_STAR1(float x1, float y1)
{
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2f(x1, y1);
    glEnd();
}

void draw_STAR2(float x1, float y1)
{
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(3);
    glBegin(GL_POINTS);
    glVertex2f(x1, y1);
    glEnd();
}

void blade1(int x, int y)
{
    glColor3f(0.52, 0.52, 0.52);
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + 800, y + 800);
    glVertex2f(x + 250, y + 30);
    glVertex2f(x + 30, y + 250);
    glVertex2f(x + 800, y + 800);
    glEnd();
}

void blade2(int x, int y)
{
    glColor3f(0.52, 0.52, 0.52);
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + 800, y + 800);
    glVertex2f(x + 250, y + 30);
    glVertex2f(x + 30, y + 250);
    glVertex2f(x + 800, y + 800);
    glEnd();
}

void blade3(int x, int y)
{
    glColor3f(0.52, 0.52, 0.52);
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + 800, y + 800);
    glVertex2f(x + 250, y + 30);
    glVertex2f(x + 30, y + 250);
    glVertex2f(x + 800, y + 800);
    glEnd();
}

void stand(int x, int y) {
    glColor3f(0.52, 0.52, 0.52);
    glBegin(GL_POLYGON);
    glVertex2f(x + 10, y + 10);
    glVertex2f(x - 10, y + 10);
    glVertex2f(x + 100, y - 1800);
    glVertex2f(x - 100, y - 1800);
    glVertex2f(x + 10, y + 10);
    glEnd();
}

void morning()
{
    earth(0, 0);
    house1(0, 0);
    house2(0, 0);
    house3(0, 0);
    roof1(0, 0);
    roof2(0, 0);
    roof3(0, 0);
    sky(0, 0);
    mountain1(0, 0);
    mountain2(0, 0);
    mountain3(0, 0);
    mountain4(0, 0);
    mountain5(0, 0);
}

void night()
{
    earthn(0, 0);
    house1(0, 0);
    house2(0, 0);
    house3(0, 0);
    roof1(0, 0);
    roof2(0, 0);
    roof3(0, 0);
    door1l(0, 0);
    door2l(0, -3000);
    door3l(2500, -3500);
    skyn(0, 0);
    mountain1(0, 0);
    mountain2(0, 0);
    mountain3(0, 0);
    mountain4(0, 0);
    mountain5(0, 0);
    draw_STAR1(-1450, 1600);
    draw_STAR2(-1290, 1590);
    draw_STAR1(1450, 1780);
    draw_STAR2(100, 1400);
    draw_STAR1(-1450, 1790);
    draw_STAR2(-90, 1490);
    draw_STAR1(80, 1690);
    draw_STAR2(290, 1240);
    draw_STAR1(40, 1390);
    draw_STAR2(-1290, 1500);
    draw_STAR1(3450, 1650);
    draw_STAR2(190, 1450);
    draw_STAR1(350, 1650);
    draw_STAR2(690, 1090);
    draw_STAR1(500, 1290);
    draw_STAR2(290, 1570);
    draw_STAR2(-90, 1410);
    draw_STAR1(0, 1500);
    draw_STAR2(290, 1720);
    draw_STAR1(-1450, 1300);
    draw_STAR2(1290, 1450);
    draw_STAR1(2450, 1230);
    draw_STAR2(490, 1393);
    draw_STAR1(750, 1680);
    draw_STAR2(90, 1050);
    draw_STAR1(500, 1620);
    draw_STAR2(290, 1430);
    draw_STAR2(2290, 1100);
    draw_STAR1(2950, 1710);
    draw_STAR2(490, 1520);
    draw_STAR1(3050, 1610);
    draw_STAR2(1990, 1010);
    draw_STAR1(1750, 1680);
    draw_STAR2(2590, 1330);
    draw_STAR2(-1000, 1430);
    draw_STAR2(-800, 1100);
    draw_STAR1(-950, 1710);
    draw_STAR2(-720, 1520);
    draw_STAR1(-660, 1610);
    draw_STAR2(-140, 1010);
    draw_STAR1(-150, 1680);
    draw_STAR2(-50, 1330);
    draw_STAR2(3390, 1050);
    draw_STAR1(2500, 1620);
    draw_STAR2(2290, 1430);
    draw_STAR2(2790, 1100);
    draw_STAR1(2950, 1710);
    draw_STAR2(3490, 1520);
    draw_STAR1(3050, 1610);
    draw_STAR2(2990, 1010);
    draw_STAR1(2150, 1680);
    draw_STAR2(3790, 1330);
    draw_STAR2(3000, 1430);
    draw_STAR2(2800, 1100);
    draw_STAR1(3950, 1710);
    draw_STAR2(2720, 1520);
    draw_STAR1(3660, 1610);
    draw_STAR2(2140, 1010);
    draw_STAR1(3150, 1680);
    draw_STAR2(2250, 1330);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    if (where_to_rotate == 1)
    {
        morning();
        door1l(0, 0);
        door2l(0, -3000);
        door3l(2500, -3500);
        x_x = 0;
        y_y = 0;
        rotate_angle += 0.5;
    }
    glColor3f(1, 1, 1);
    draw_pixel(0, 0);
    stand(x_x, y_y);

    if (where_to_rotate == 2)
    {
        morning();
        door1l(0, 0);
        door2l(0, -3000);
        door3l(2500, -3500);
        x_x = 0;
        y_y = 0;
        rotate_angle -= 0.5;
    }
    glColor3f(1, 1, 1);
    draw_pixel(0, 0);
    stand(x_x, y_y);

    if (where_to_rotate == 3)
    {
        morning();
        door1(0, 0);
        door2(0, -3000);
        door3(2500, -3500);

    }

    if (where_to_rotate == 4)
    {
        night();
        door1l(0, 0);
        door2l(0, -3000);
        door3l(2500, -3500);

        x_x = 0;
        y_y = 0;
        rotate_angle += 0.6;
    }

    if (where_to_rotate == 5)
    {
        night();
        door1l(0, 0);
        door2l(0, -3000);
        door3l(2500, -3500);

        x_x = 0;
        y_y = 0;
        rotate_angle -= 0.6;
    }

    if (where_to_rotate == 6)
    {
        night();
        door1(0, 0);
        door2(0, -3000);
        door3(2500, -3500);
    }

    glColor3f(1, 1, 1);
    draw_pixel(0, 0);
    stand(x_x, y_y);

    glRotatef(rotate_angle, 0, 0, 1);

    blade1(x_x, y_y);

    blade2(x_x, y_y);
    glRotated(120, 0, 0, 1);
    blade3(x_x, y_y);

    blade3(x_x, y_y);
    glRotated(120, 0, 0, 1);
    blade1(x_x, y_y);

    glutPostRedisplay();
    glutSwapBuffers();
}

void init()
{
    glClearColor(0, 0, 0, 1); //black
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1500, 4000, -4000, 1800);           //L R B T
    glMatrixMode(GL_MODELVIEW);
}

void rotateMenu(int option)
{
    if (option == 1)
        where_to_rotate = 1;

    if (option == 2)
        where_to_rotate = 2;

    if (option == 3)
        where_to_rotate = 3;

    if (option == 4)
        where_to_rotate = 4;

    if (option == 5)
        where_to_rotate = 5;

    if (option == 6)
        where_to_rotate = 6;

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Wind Mill");

    init();

    glutDisplayFunc(display);

    glutCreateMenu(rotateMenu);

    glutAddMenuEntry("Morning, when wind blows from right side", 1);
    glutAddMenuEntry("Morning, when wind blows from left side", 2);
    glutAddMenuEntry("Morning, when there is no wind", 3);
    glutAddMenuEntry("Night, when wind blows from right side", 4);
    glutAddMenuEntry("Night, when wind blows from left side", 5);
    glutAddMenuEntry("Night, when there is no wind", 6);

    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutMainLoop();
}