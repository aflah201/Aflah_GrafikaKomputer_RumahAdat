#include "stdafx.h"
#include <glut.h>
#include <math.h>

void userdraw()
{
	/* Tembok depan */
	glColor3f(0,0,0);
	glLineWidth(2.);
	glBegin(GL_LINE_LOOP);
	glVertex2f(40.,40.);
	glVertex2f(360.,40.);
	glVertex2f(360.,320.);
	glVertex2f(40.,320.);
	glEnd();

	/* Tembok Belakang */
	glBegin(GL_LINE_LOOP);
	glVertex2f(360.,40.);
	glVertex2f(800.,40.);
	glVertex2f(800.,320.);
	glVertex2f(360.,320.);
	glEnd();

	/* Atap Depan */
	glBegin(GL_LINE_LOOP);
	glVertex2f(40.,320.);
	glVertex2f(360.,320.);
	glVertex2f(200.,560.);
	glEnd();

	/* Atap Belakang */
	glBegin(GL_LINE_LOOP);
	glVertex2f(360.,320.);
	glVertex2f(840.,320.);
	glVertex2f(700.,560.);
	glVertex2f(200.,560.);
	glEnd();

	/* Jendela Depan */
	glBegin(GL_LINE_LOOP);
	glVertex2f(60.,120.);
	glVertex2f(220.,120.);
	glVertex2f(220.,240.);
	glVertex2f(60.,240.);
	glEnd();

	/* Sekat Jendela Depan */
	glBegin(GL_LINE_STRIP);
	glVertex2f(160.,120.);
	glVertex2f(160.,240.);
	glEnd();

	/* Pintu Depan */
	glBegin(GL_LINE_LOOP);
	glVertex2f(240.,40.);
	glVertex2f(340.,40.);
	glVertex2f(340.,240.);
	glVertex2f(240.,240.);
	glEnd();

	/* Ventilasi Depan */
	glBegin(GL_LINE_LOOP);
	glVertex2f(60.,260.);
	glVertex2f(220.,260.);
	glVertex2f(220.,300.);
	glVertex2f(60.,300.);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(240.,260.);
	glVertex2f(340.,260.);
	glVertex2f(340.,300.);
	glVertex2f(240.,300.);
	glEnd();

	/* Jendela Belakang */
	glBegin(GL_LINE_LOOP);
	glVertex2f(400.,120.);
	glVertex2f(560.,120.);
	glVertex2f(560.,240.);
	glVertex2f(400.,240.);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(600.,120.);
	glVertex2f(760.,120.);
	glVertex2f(760.,240.);
	glVertex2f(600.,240.);
	glEnd();

	/* Sekat Jendela Belakang */
	glBegin(GL_LINE_STRIP);
	glVertex2f(500.,120.);
	glVertex2f(500.,240.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(700.,120.);
	glVertex2f(700.,240.);
	glEnd();

	/* Ventilasi Belakang */
	glBegin(GL_LINE_LOOP);
	glVertex2f(400.,260.);
	glVertex2f(560.,260.);
	glVertex2f(560.,300.);
	glVertex2f(400.,300.);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(600.,260.);
	glVertex2f(760.,260.);
	glVertex2f(760.,300.);
	glVertex2f(600.,300.);
	glEnd();

}

void warnaRumahAdat()
{
	/* Warna Tembok Awal */
	glColor3f(0.95,0.61,0.06);
	glBegin(GL_POLYGON);
	glVertex2f(260.,140.);
	glVertex2f(980.,140.);
	glVertex2f(980.,320.);
	glVertex2f(260.,320.);
	glEnd();

	/* Warna Garis Tiang 1 */
	glColor3f(0.82,0.32,0);
	glBegin(GL_POLYGON);
	glVertex2f(260.,140.);
	glVertex2f(280.,140.);
	glVertex2f(280.,340.);
	glVertex2f(260.,340.);
	glEnd();

	/* Warna Garis Tiang 2 */
	glBegin(GL_POLYGON);
	glVertex2f(960.,140.);
	glVertex2f(980.,140.);
	glVertex2f(980.,340.);
	glVertex2f(960.,340.);
	glEnd();

	/* Warna Jendela Kiri */
	glColor3f(0.94,0.76,0.05);
	glBegin(GL_POLYGON);
	glVertex2f(300.,180.);
	glVertex2f(420.,180.);
	glVertex2f(420.,280.);
	glVertex2f(300.,280.);
	glEnd();

	/* Warna Jendela Kanan */
	glBegin(GL_POLYGON);
	glVertex2f(820.,180.);
	glVertex2f(940.,180.);
	glVertex2f(940.,280.);
	glVertex2f(820.,280.);
	glEnd();

	/* Warna Jendela Tengah 1 */
	glBegin(GL_POLYGON);
	glVertex2f(480.,180.);
	glVertex2f(540.,180.);
	glVertex2f(540.,280.);
	glVertex2f(480.,280.);
	glEnd();

	/* Warna Jendela Tengah 2 */
	glBegin(GL_POLYGON);
	glVertex2f(700.,180.);
	glVertex2f(760.,180.);
	glVertex2f(760.,280.);
	glVertex2f(700.,280.);
	glEnd();

	/* Warna Pintu */
	glColor3f(0.90,0.49,0.13);
	glBegin(GL_POLYGON);
	glVertex2f(560.,140.);
	glVertex2f(680.,140.);
	glVertex2f(680.,280.);
	glVertex2f(560.,280.);
	glEnd();

	/* Warna Alas Lantai */
	glColor3f(0.94,0.76,0.05);
	glBegin(GL_POLYGON);
	glVertex2f(200.,100.);
	glVertex2f(1040.,100.);
	glVertex2f(980.,140.);
	glVertex2f(260.,140.);
	glEnd();

	/* Warna Alas Lantai 2 */
	glColor3f(0.94,0.76,0.05);
	glBegin(GL_POLYGON);
	glVertex2f(120.,60.);
	glVertex2f(1120.,60.);
	glVertex2f(1012.,140.);
	glVertex2f(232.,140.);
	glEnd();

	/* Warna Ketebalan Lantai */
	glColor3f(0.95,0.61,0.06);
	glBegin(GL_POLYGON);
	glVertex2f(200.,80.);
	glVertex2f(1040.,80.);
	glVertex2f(1040.,100.);
	glVertex2f(200.,100.);
	glEnd();

	/* Ketebalan Lantai 2 */
	glColor3f(0.95,0.61,0.06);
	glBegin(GL_POLYGON);
	glVertex2f(120.,40.);
	glVertex2f(1120.,40.);
	glVertex2f(1120.,60.);
	glVertex2f(120.,60.);
	glEnd();

	glColor3f(0,0,0);
	/* Alas Lantai 2 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(120.,60.);
	glVertex2f(1120.,60.);
	glVertex2f(1012.,140.);
	glVertex2f(232.,140.);
	glEnd();

	/* Ketebalan Lantai 2 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(120.,40.);
	glVertex2f(1120.,40.);
	glVertex2f(1120.,60.);
	glVertex2f(120.,60.);
	glEnd();

	/* Alas Lantai */
	glBegin(GL_LINE_LOOP);
	glVertex2f(200.,100.);
	glVertex2f(1040.,100.);
	glVertex2f(980.,140.);
	glVertex2f(260.,140.);
	glEnd();

	/* Ketebalan Lantai */
	glBegin(GL_LINE_LOOP);
	glVertex2f(200.,80.);
	glVertex2f(1040.,80.);
	glVertex2f(1040.,100.);
	glVertex2f(200.,100.);
	glEnd();

	/* Warna Tiang Depan */
	glColor3f(0.82,0.32,0);
	glBegin(GL_POLYGON);
	glVertex2f(140.,60.);
	glVertex2f(160.,60.);
	glVertex2f(160.,320.);
	glVertex2f(140.,320.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(440.,60.);
	glVertex2f(460.,60.);
	glVertex2f(460.,320.);
	glVertex2f(440.,320.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(780.,60.);
	glVertex2f(800.,60.);
	glVertex2f(800.,320.);
	glVertex2f(780.,320.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1080.,60.);
	glVertex2f(1100.,60.);
	glVertex2f(1100.,320.);
	glVertex2f(1080.,320.);
	glEnd();

	/* Warna Atap Rumah */
	glColor3f(0.82,0.32,0);
	glBegin(GL_POLYGON);
	glVertex2f(40.,340.);
	glVertex2f(1200.,340.);
	glVertex2f(980.,400.);
	glVertex2f(260.,400.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(260.,400.);
	glVertex2f(980.,400.);
	glVertex2f(800.,500.);
	glVertex2f(440.,500.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(440.,500.);
	glVertex2f(800.,500.);
	glVertex2f(700.,700.);
	glVertex2f(520.,700.);
	glEnd();

	glColor3f(0,0,0);

	glBegin(GL_LINE_LOOP);
	glVertex2f(260.,140.);
	glVertex2f(980.,140.);
	glVertex2f(980.,320.);
	glVertex2f(260.,320.);
	glEnd();

	/* Garis Tiang Rumah 1 */
	glBegin(GL_LINE_STRIP);
	glVertex2f(280.,140.);
	glVertex2f(280.,320.);
	glEnd();

	/* Garis Tiang Rumah 2 */
	glBegin(GL_LINE_STRIP);
	glVertex2f(960.,140.);
	glVertex2f(960.,320.);
	glEnd();

	/* Tiang 1 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(140.,60.);
	glVertex2f(160.,60.);
	glVertex2f(160.,320.);
	glVertex2f(140.,320.);
	glEnd();

	/* Tiang 2 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(440.,60.);
	glVertex2f(460.,60.);
	glVertex2f(460.,320.);
	glVertex2f(440.,320.);
	glEnd();

	/* Tiang 3 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(780.,60.);
	glVertex2f(800.,60.);
	glVertex2f(800.,320.);
	glVertex2f(780.,320.);
	glEnd();

	/* Tiang 4 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(1080.,60.);
	glVertex2f(1100.,60.);
	glVertex2f(1100.,320.);
	glVertex2f(1080.,320.);
	glEnd();

	/* Warna Variasi Atap */
	glColor3f(0.90,0.49,0.13);
	glBegin(GL_POLYGON);
	glVertex2f(40.,300.);
	glVertex2f(60.,320.);
	glVertex2f(60.,340.);
	glVertex2f(40.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(60.,320.);
	glVertex2f(80.,300.);
	glVertex2f(100.,320.);
	glVertex2f(100.,340.);
	glVertex2f(60.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(100.,320.);
	glVertex2f(120.,300.);
	glVertex2f(140.,320.);
	glVertex2f(140.,340.);
	glVertex2f(100.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(140.,320.);
	glVertex2f(160.,300.);
	glVertex2f(180.,320.);
	glVertex2f(180.,340.);
	glVertex2f(140.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(180.,320.);
	glVertex2f(200.,300.);
	glVertex2f(220.,320.);
	glVertex2f(220.,340.);
	glVertex2f(180.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(220.,320.);
	glVertex2f(240.,300.);
	glVertex2f(260.,320.);
	glVertex2f(260.,340.);
	glVertex2f(220.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(260.,320.);
	glVertex2f(280.,300.);
	glVertex2f(300.,320.);
	glVertex2f(300.,340.);
	glVertex2f(260.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(300.,320.);
	glVertex2f(320.,300.);
	glVertex2f(340.,320.);
	glVertex2f(340.,340.);
	glVertex2f(300.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(340.,320.);
	glVertex2f(360.,300.);
	glVertex2f(380.,320.);
	glVertex2f(380.,340.);
	glVertex2f(340.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(380.,320.);
	glVertex2f(400.,300.);
	glVertex2f(420.,320.);
	glVertex2f(420.,340.);
	glVertex2f(380.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(420.,320.);
	glVertex2f(440.,300.);
	glVertex2f(460.,320.);
	glVertex2f(460.,340.);
	glVertex2f(420.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(460.,320.);
	glVertex2f(480.,300.);
	glVertex2f(500.,320.);
	glVertex2f(500.,340.);
	glVertex2f(460.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(500.,320.);
	glVertex2f(520.,300.);
	glVertex2f(540.,320.);
	glVertex2f(540.,340.);
	glVertex2f(500.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(540.,320.);
	glVertex2f(560.,300.);
	glVertex2f(580.,320.);
	glVertex2f(580.,340.);
	glVertex2f(540.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(580.,320.);
	glVertex2f(600.,300.);
	glVertex2f(620.,320.);
	glVertex2f(620.,340.);
	glVertex2f(580.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(620.,320.);
	glVertex2f(640.,300.);
	glVertex2f(660.,320.);
	glVertex2f(660.,340.);
	glVertex2f(620.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(660.,320.);
	glVertex2f(680.,300.);
	glVertex2f(700.,320.);
	glVertex2f(700.,340.);
	glVertex2f(660.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(700.,320.);
	glVertex2f(720.,300.);
	glVertex2f(740.,320.);
	glVertex2f(740.,340.);
	glVertex2f(700.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(740.,320.);
	glVertex2f(760.,300.);
	glVertex2f(780.,320.);
	glVertex2f(780.,340.);
	glVertex2f(740.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(780.,320.);
	glVertex2f(800.,300.);
	glVertex2f(820.,320.);
	glVertex2f(820.,340.);
	glVertex2f(780.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(820.,320.);
	glVertex2f(840.,300.);
	glVertex2f(860.,320.);
	glVertex2f(860.,340.);
	glVertex2f(820.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(860.,320.);
	glVertex2f(880.,300.);
	glVertex2f(900.,320.);
	glVertex2f(900.,340.);
	glVertex2f(860.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(900.,320.);
	glVertex2f(920.,300.);
	glVertex2f(940.,320.);
	glVertex2f(940.,340.);
	glVertex2f(900.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(940.,320.);
	glVertex2f(960.,300.);
	glVertex2f(980.,320.);
	glVertex2f(980.,340.);
	glVertex2f(940.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(980.,320.);
	glVertex2f(1000.,300.);
	glVertex2f(1020.,320.);
	glVertex2f(1020.,340.);
	glVertex2f(980.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1020.,320.);
	glVertex2f(1040.,300.);
	glVertex2f(1060.,320.);
	glVertex2f(1060.,340.);
	glVertex2f(1020.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1060.,320.);
	glVertex2f(1080.,300.);
	glVertex2f(1100.,320.);
	glVertex2f(1100.,340.);
	glVertex2f(1060.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1100.,320.);
	glVertex2f(1120.,300.);
	glVertex2f(1140.,320.);
	glVertex2f(1140.,340.);
	glVertex2f(1100.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1140.,320.);
	glVertex2f(1160.,300.);
	glVertex2f(1180.,320.);
	glVertex2f(1180.,340.);
	glVertex2f(1140.,340.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1180.,320.);
	glVertex2f(1200.,300.);
	glVertex2f(1200.,340.);
	glVertex2f(1180.,340.);
	glEnd();

}

void rumahAdat()
{
	/* Tembok Awal */
	glColor3f(0,0,0);
	glLineWidth(2.);

	/* Jendela Kiri */
	glBegin(GL_LINE_LOOP);
	glVertex2f(300.,180.);
	glVertex2f(420.,180.);
	glVertex2f(420.,280.);
	glVertex2f(300.,280.);
	glEnd();

	/* Jendela Kanan */
	glBegin(GL_LINE_LOOP);
	glVertex2f(820.,180.);
	glVertex2f(940.,180.);
	glVertex2f(940.,280.);
	glVertex2f(820.,280.);
	glEnd();

	/* Garis Cendela Kiri */
	glBegin(GL_LINE_STRIP);
	glVertex2f(340.,180.);
	glVertex2f(340.,280.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(380.,180.);
	glVertex2f(380.,280.);
	glEnd();

	/* Garis Cendela Kanan */
	glBegin(GL_LINE_STRIP);
	glVertex2f(860.,180.);
	glVertex2f(860.,280.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(900.,180.);
	glVertex2f(900.,280.);
	glEnd();

	/* Cendela Tengah 1 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(480.,180.);
	glVertex2f(540.,180.);
	glVertex2f(540.,280.);
	glVertex2f(480.,280.);
	glEnd();

	/* Cendela Tengah 2 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(700.,180.);
	glVertex2f(760.,180.);
	glVertex2f(760.,280.);
	glVertex2f(700.,280.);
	glEnd();

	/* Pintu Depan */
	glBegin(GL_LINE_LOOP);
	glVertex2f(560.,140.);
	glVertex2f(680.,140.);
	glVertex2f(680.,280.);
	glVertex2f(560.,280.);
	glEnd();

	/* Garis Pintu Depan */
	glBegin(GL_LINE_STRIP);
	glVertex2f(620.,140.);
	glVertex2f(620.,280.);
	glEnd();

	/* Atap Rumah */
	glBegin(GL_LINE_LOOP);
	glVertex2f(40.,340.);
	glVertex2f(1200.,340.);
	glVertex2f(980.,400.);
	glVertex2f(800.,500.);
	glVertex2f(700.,700.);
	glVertex2f(520.,700.);
	glVertex2f(440.,500.);
	glVertex2f(260.,400.);
	glEnd();

	/* Garis Atap */
	glBegin(GL_LINE_STRIP);
	glVertex2f(260.,400.);
	glVertex2f(980.,400.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(440.,500.);
	glVertex2f(800.,500.);
	glEnd();

	/* Variasi Atap */
	glBegin(GL_LINE_LOOP);
	glVertex2f(40.,300.);
	glVertex2f(60.,320.);
	glVertex2f(80.,300.);
	glVertex2f(100.,320.);
	glVertex2f(120.,300.);
	glVertex2f(140.,320.);
	glVertex2f(160.,300.);
	glVertex2f(180.,320.);
	glVertex2f(200.,300.);
	glVertex2f(220.,320.);
	glVertex2f(240.,300.);
	glVertex2f(260.,320.);
	glVertex2f(280.,300.);
	glVertex2f(300.,320.);
	glVertex2f(320.,300.);
	glVertex2f(340.,320.);
	glVertex2f(360.,300.);
	glVertex2f(380.,320.);
	glVertex2f(400.,300.);
	glVertex2f(420.,320.);
	glVertex2f(440.,300.);
	glVertex2f(460.,320.);
	glVertex2f(480.,300.);
	glVertex2f(500.,320.);
	glVertex2f(520.,300.);
	glVertex2f(540.,320.);
	glVertex2f(560.,300.);
	glVertex2f(580.,320.);
	glVertex2f(600.,300.);
	glVertex2f(620.,320.);
	glVertex2f(640.,300.);
	glVertex2f(660.,320.);
	glVertex2f(680.,300.);
	glVertex2f(700.,320.);
	glVertex2f(720.,300.);
	glVertex2f(740.,320.);
	glVertex2f(760.,300.);
	glVertex2f(780.,320.);
	glVertex2f(800.,300.);
	glVertex2f(820.,320.);
	glVertex2f(840.,300.);
	glVertex2f(860.,320.);
	glVertex2f(880.,300.);
	glVertex2f(900.,320.);
	glVertex2f(920.,300.);
	glVertex2f(940.,320.);
	glVertex2f(960.,300.);
	glVertex2f(980.,320.);
	glVertex2f(1000.,300.);
	glVertex2f(1020.,320.);
	glVertex2f(1040.,300.);
	glVertex2f(1060.,320.);
	glVertex2f(1080.,300.);
	glVertex2f(1100.,320.);
	glVertex2f(1120.,300.);
	glVertex2f(1140.,320.);
	glVertex2f(1160.,300.);
	glVertex2f(1180.,320.);
	glVertex2f(1200.,300.);
	glVertex2f(1200.,340.);
	glVertex2f(40.,340.);
	glEnd();

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//userdraw();
	warnaRumahAdat();
	rumahAdat();
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1366,768);
	glutCreateWindow("B34180029 - Moh. Aflah Azzaky");
	glClearColor(1.,1.,1.,0.);
	gluOrtho2D(0.,1366.,0.,768.);
	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}