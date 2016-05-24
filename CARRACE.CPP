#include   <stdio.h>
#include   <conio.h>
#include<graphics.h>
#include     <dos.h>
#include  <stdlib.h>
#include<iostream.h>
#define cls cleardevice()
#define D delay
int x=150, y=380, x1, y1, x2, y2=10, p=0, s=60, t=60, q=0, dly, temp=0;
int h=50, g=405, loop, counter=0, loop1, flag, x3, y3, a=620, b=350;
void pamplet1()
	{
	setcolor(RED);
	settextstyle(8,0,5);
	outtextxy(170,350,"Road Riders...");
	outtextxy(173,350,"Road Riders...");
	D(600);
	for(loop=1; loop<=27; loop++)
	{
	setcolor(BLUE);
	rectangle(h,g,h+10,g+20);
	setfillstyle(1,BLUE);
	floodfill(h+5,g+10,BLUE);
	rectangle(h,g+25,h+10,g+45);
	setfillstyle(1,BLUE);
	floodfill(h+5,g+35,BLUE);
	h+=20;
	D(50);
	}
	}
void pamplet()
	{
	setcolor(7);
	settextstyle(4,0,3);
	outtextxy(190,120,"Special SuperCars Unit");
	settextstyle(0,0,0);
	line(0,330,200,264);
	line(2,330,202,264);
	line(100,350,240,280);
	line(600,330,400,270);
	line(270,350,290,300);                 //  Divider Start
	line(290,300,310,300);
	line(310,300,330,350);
	line(293,290,308,290);
	line(293,290,297,280);
	line(308,290,304,280);                 //  Divider End

	setcolor(15);
	line(0,300,210,235);
	line(0,310,210,245);         		// left road line
	line(610,300,400,240);
	line(610,310,390,245);                  // right road line
	arc(610,305,90,225,5);
	arc(560,290,90,225,5);
	arc(520,280,90,225,5);
	arc(480,268,90,225,5);
	arc(438,256,90,225,5);
	arc(405,246,90,225,5);	// - - - - - right road line parts
	arc(0,305,315,90,5);
	arc(50,290,315,90,5);
	arc(90,278,315,90,5);
	arc(130,265,315,90,5);
	arc(172,253,315,90,5);
	arc(205,242,315,90,5);	// - - - - - left road line parts

	setcolor(8);
	rectangle(50,270,55,150);
	setfillstyle(1,8);
	floodfill(53,210,8);
	bar3d(45,270,55,280,5,5);
	setfillstyle(1,BLACK);
	bar3d(43,150,57,90,6,6);
	setlinestyle(0,0,3);
	rectangle(255,261,275,276);             // Tyres
	setfillstyle(6,8);
	floodfill(260,265,8);
	rectangle(345,261,325,276);
	setfillstyle(6,8);
	floodfill(335,267,8);
	rectangle(275,238,325,253);
	setfillstyle(2,8);
	floodfill(280,240,8);
	setlinestyle(0,0,0);

	setcolor(13);
	rectangle(450,150,480,200);
	rectangle(460,200,470,250);
	outtextxy(256,250,"=");
	outtextxy(340,250,"=");

	setcolor(9);
	outtextxy(453,160,"Spd");
	outtextxy(453,170,"lmt");
	outtextxy(452,185,"55k.");

	setcolor(BLUE);
	line(270,200,330,200);
	line(270,200,260,224);
	line(260,225,339,225);
	line(339,225,330,200);
	setfillstyle(1,BLUE);
	floodfill(300,215,BLUE);

	setcolor(4);
	circle(50,100,5);
	setlinestyle(0,0,3);
	line(245,260,355,260);
	line(245,260,243,235);
	line(355,260,357,235);
	line(245,230,355,230);
	line(245,230,243,235);
	line(355,230,357,235);
	line(248,230,265,190);
	line(352,230,335,190);
	line(335,190,265,190);
	setlinestyle(0,0,0);

	setcolor(YELLOW);
	circle(50,120,5);
	setfillstyle(1,YELLOW);
	ellipse(258,242,0,360,10,5);
	ellipse(342,243,0,360,10,5);
	floodfill(258,242,YELLOW);
	floodfill(342,242,YELLOW);

	setcolor(GREEN);
	outtextxy(457,250,"/';");
	circle(50,140,5);
	circle(568,80,70);
	circle(568,80,72);
	line(115,169,175,169);
	line(115,169,145,100);
	line(145,100,175,170);
	setfillstyle(1,10);
	floodfill(568,80,GREEN);
	floodfill(145,135,GREEN);

	setcolor(BROWN);
	rectangle(560,280,580,150);
	rectangle(140,245,150,170);
	setfillstyle(1,BROWN);
	floodfill(145,210,BROWN);
	setfillstyle(1,BROWN);
	floodfill(570,200,BROWN);
	circle(284,183,5);
	circle(300,183,5);
	circle(316,183,5);
	pamplet1();
	flag=0;

      /*	Signal filling	 	*/

	setfillstyle(1,4);
	floodfill(50,100,4);                  // upper circle
	D(500);
	setfillstyle(1,YELLOW);
	floodfill(50,120,YELLOW);	      // mid circle
	D(500);
	setfillstyle(1,GREEN);
	floodfill(50,140,GREEN);              // lower circle
	D(500);

	while(!kbhit())
		{
		flag++;
		settextstyle(4,0,5);
		if(flag%2!=0)
			{
			setcolor(13);
			outtextxy(150,0,"Press Any Key..");
			delay(500);
			}
		else
			{
			setcolor(BLACK);
			outtextxy(150,0,"Press Any Key..");
			delay(200);
			}
		}
	getch();
	}
void loading()
	{
	for(loop1=500; loop1>=200; loop1-=10)
	{
		setcolor(8);
		arc(300,loop1,0,180,100);
		arc(300,loop1,0,180,102);
		arc(300,loop1,0,180,103);
		arc(300,loop1,0,180,50);
		outtextxy(390,loop1-44,"\'");
		outtextxy(380,loop1-75,"\'");
		outtextxy(358,loop1-100,"\'");
		outtextxy(330,loop1-115,"\'");
		outtextxy(300,loop1-120,"\'"); // - - - - - - - - mid point
		outtextxy(270,loop1-115,"\'");
		outtextxy(240,loop1-100,"\'");
		outtextxy(218,loop1-75,"\'");
		outtextxy(205,loop1-44,"\'");
		setcolor(1);
		arc(300,loop1,0,180,101);
		setcolor(RED);
		line(300,loop1+5,350,loop1-60);
		line(299,loop1+5,350,loop1-60);
		line(298,loop1+5,350,loop1-60);
		setcolor(WHITE);
		settextstyle(8,0,6);
		outtextxy(185,loop1-10,"LOADING");
		outtextxy(188,loop1-10,"LOADING");
		D(10);
		cls;
		if(loop1==200)
		{
			goto outside;
		}
	}
	outside: { setcolor(8);
	arc(300,loop1,0,180,100);
	arc(300,loop1,0,180,102);
	arc(300,loop1,0,180,103);
	arc(300,loop1,0,180,50);
	outtextxy(390,156,"\'");
	outtextxy(380,125,"\'");
	outtextxy(358,100,"\'");
	outtextxy(330,85,"\'");
	outtextxy(300,80,"\'"); // - - - - - - - - mid point
	outtextxy(270,85,"\'");
	outtextxy(240,100,"\'");
	outtextxy(218,125,"\'");
	outtextxy(205,156,"\'");
	setcolor(1);
	arc(300,loop1,0,180,101);
	setcolor(RED);
	line(300,loop1+5,350,loop1-60);
	line(299,loop1+5,350,loop1-60);
	line(298,loop1+5,350,loop1-60);
	setcolor(WHITE);
	settextstyle(8,0,6);
	outtextxy(185,loop1-10,"LOADING");
	outtextxy(188,loop1-10,"LOADING");
	}
	D(500);
	setcolor(9);			// 	Loading Line
	rectangle(148,280,450,289);
	for(loop1=150; loop1<=450; loop1++)
		{
		setcolor(WHITE);
		line(151,281,loop1-1,281);
		line(151,282,loop1-1,282);
		line(151,283,loop1-1,283);
		line(151,284,loop1-1,284);
		line(151,281,loop1-1,285);
		line(151,282,loop1-1,286);
		line(151,283,loop1-1,287);
		line(151,284,loop1-1,288);
		D(15);
		}                       //	End of Loading Line
	settextstyle(0,0,0);
	}
void car(int x, int y)
	{
	setcolor(4);
	rectangle(x,y,x+70,y+80);
	setfillstyle(1,4);
	floodfill(x+1,y+5,4);
	arc(x+35,y+20,30,150,40);
	floodfill(x+35,y-5,4);
	line(x+11,y+90,x+59,y+90);
	line(x+70,y+80,x+59,y+90);
	line(x,y+80,x+11,y+90);
	floodfill(x+29,y+85,4);
	rectangle(x+9,y+30,x+59,y+60);
	floodfill(x+49,y+55,4);
	setcolor(YELLOW);
	circle(x+4,y+5,3);
	circle(x+66,y+5,3);
	setfillstyle(1,YELLOW);
	floodfill(x+66,y+5,YELLOW);
	floodfill(x+4,y+5,YELLOW);
	setcolor(1);                          // back window
	line(x+11,y+61,x+57,y+61);
	line(x+11,y+61,x+9,y+70);
	line(x+57,y+61,x+59,y+70);
	line(x+59,y+70,x+34,y+72);
	line(x+9,y+70,x+34,y+72);
	setfillstyle(1,1);
	floodfill(x+34,y+70,1);
	line(x+11,y+29,x+57,y+29);            // front window
	line(x+9,y+15,x+34,y+12);
	line(x+34,y+12,x+59,y+15);
	line(x+11,y+29,x+9,y+15);
	line(x+59,y+15,x+57,y+29);
	floodfill(x+34,y+25,1);
	line(x+4,y+17,x+7,y+33);
	line(x+7,y+33,x+7,y+55);
	line(x+7,y+55,x+4,y+68);
	line(x+4,y+17,x+4,y+68);
	floodfill(x+5,y+40,1);
	line(x+65,y+17,x+62,y+33);
	line(x+62,y+33,x+62,y+55);
	line(x+65,y+17,x+65,y+68);
	line(x+65,y+68,x+62,y+55);
	floodfill(x+63,y+40,1);
	settextstyle(8,0,1);
	setcolor(YELLOW);
	outtextxy(x+13,y+30,"S.S.U");
	settextstyle(0,0,0);
	}
void car_clear(int x, int y)
	{
	setcolor(BLACK);
	rectangle(x,y,x+70,y+80);
	arc(x+35,y+20,30,150,40);
	line(x+11,y+90,x+59,y+90);
	line(x+70,y+80,x+59,y+90);
	line(x,y+80,x+11,y+90);
	setfillstyle(1,BLACK);
	floodfill(x+10,y+10,BLACK);	// for car body
	floodfill(x+15,y-10,BLACK);	// for car front bonat
	floodfill(x+35,y+85,BLACK);	// for car rear bonat
	}
void enemy_car(int x1, int y1)
	{
	setcolor(YELLOW);
	rectangle(x1+10,y1-20,x1+80,y1+60);             // Body of car
	setfillstyle(1,YELLOW);
	floodfill(x1+12,y1-18,YELLOW);                  // coloring whole car
	arc(x1+45,y1+40,210,330,40);                    // Front Bonat
	floodfill(x1+45,y1+75,YELLOW);                  // coloring front bonat
	line(x1+21,y1-30,x1+69,y1-30);                  // Rear - - -
	line(x1+69,y1-30,x1+79,y1-20);                  // -  -  -  -
	line(x1+21,y1-30,x1+11,y1-20);                  // - - - Bonat
	floodfill(x1+45,y1-25,YELLOW);                  // coloring rear bonat
	rectangle(x1+19,y1,x1+69,y1+30);                // Middle Roof
	setcolor(BLUE);
	line(x1+19,y1-3,x1+68,y1-3);			// back window
	line(x1+19,y1-3,x1+17,y1-11);
	line(x1+68,y1-3,x1+70,y1-11);
	line(x1+17,y1-11,x1+43,y1-13);
	line(x1+70,y1-11,x1+43,y1-13);
	setfillstyle(1,BLUE);
	floodfill(x1+45,y1-8,BLUE);
	line(x1+12,y1-10,x1+15,y1+6);		        // left window
	line(x1+15,y1+6,x1+15,y1+33);
	line(x1+15,y1+33,x1+12,y1+46);
	line(x1+12,y1-10,x1+12,y1+46);
	floodfill(x1+13,y1+21,BLUE);
	line(x1+76,y1-10,x1+73,y1+6);                   // right window
	line(x1+73,y1+6,x1+73,y1+33);
	line(x1+73,y1+33,x1+76,y1+46);
	line(x1+76,y1-10,x1+76,y1+46);
	floodfill(x1+74,y1+21,BLUE);
	line(x1+19,y1+33,x1+69,y1+33);		        // front window
	line(x1+19,y1+33,x1+14,y1+48);
	line(x1+69,y1+33,x1+74,y1+48);
	line(x1+74,y1+48,x1+46,y1+50);
	line(x1+14,y1+48,x1+46,y1+50);
	floodfill(x1+19,y1+46,BLUE);
	setcolor(RED);
	circle(x1+14,y1+57,3);
	circle(x1+76,y1+57,3);
	setfillstyle(1,RED);
	floodfill(x1+76,y1+57,RED);
	floodfill(x1+14,y1+57,RED);
	settextstyle(4,0,1);
	outtextxy(x1+20,y1+50,"Danger");
	setcolor(BROWN);
	settextstyle(12,0,5);
	outtextxy(x1+25,y1+10,"Enemy");
	outtextxy(x1+32,y1+20,"car");
	settextstyle(3,0,1);
	setcolor(GREEN);
	outtextxy(x1+18,y1-37,"= = =");
	settextstyle(0,0,0);

	s=-450;
	while(s<=480)
	{
	setcolor(13);
	setfillstyle(9,13);
	rectangle(100,s+y1,110,s+50+y1);
	floodfill(101,s+48+y1,13);
	s+=100;
	}
	t=-450;
	while(t<=480)
	{
	setcolor(9);
	setfillstyle(9,9);
	rectangle(480,t+y1,490,t+50+y1);
	floodfill(482,t+y1+48,9);
	t+=100;
	}
	}
void enemy_car1(int x1, int y1)
	{
	p=-400;
	while(p<=480)
	{
	setcolor(13);
	setfillstyle(9,13);
	rectangle(480,p+y1,490,p+50+y1);
	floodfill(482,p+48+y1,13);
	p+=100;
	}
	p=-400;
	while(p<=480)
	{
	setcolor(9);
	setfillstyle(9,9);
	rectangle(100,p+y1,110,p+50+y1);
	floodfill(102,p+y1+48,9);
	p+=100;
	}
	}
void enemy_car_clear(int x1, int y1)
	{
	setcolor(BLACK);
	rectangle(x1+10,y1-20,x1+80,y1+60);       // for whole body
	arc(x1+45,y1+40,210,330,40);              // for front bonat
	line(x1+21,y1-30,x1+69,y1-30);            // for rear - - -
	line(x1+69,y1-30,x1+79,y1-20);            // -  -  -  -  -  -
	line(x1+21,y1-30,x1+11,y1-20);            // - - - Bonat
	setfillstyle(1,BLACK);
	floodfill(x1+11,y1-19,BLACK);             // car body
	floodfill(x1+45,y1-25,BLACK);             // rear bonat
	floodfill(x1+45,y1-20,BLACK);             // front bonat

	s=-450;
	while(s<=480)
	{
	setcolor(BLACK);
	setfillstyle(1,BLACK);
	rectangle(100,s+y1,110,s+50+y1);
	floodfill(101,s+48+y1,BLACK);
	s+=100;
	}
	t=-450;
	while(t<=480)
	{
	setcolor(BLACK);
	setfillstyle(1,BLACK);
	rectangle(480,t+y1,490,t+50+y1);
	floodfill(482,t+48+y1,BLACK);
	t+=100;
	}
	}
void enemy_car_clear1(int x1, int y1)
	{
	setcolor(BLACK);
	p=-400;
	while(p<=480)
	{
	setcolor(BLACK);
	setfillstyle(1,BLACK);
	rectangle(480,p+y1,490,p+50+y1);
	floodfill(481,p+48+y1,BLACK);
	p+=100;
	}
	p=-400;
	while(p<=480)
	{
	setcolor(BLACK);
	setfillstyle(1,BLACK);
	rectangle(100,p+y1,110,p+50+y1);
	floodfill(101,p+48+y1,BLACK);
	p+=100;
	}
	}
void instruct()
	{
	setcolor(14);
	settextstyle(0,0,0);
		outtextxy(562,25,"up");
		outtextxy(556,74,"down");
		outtextxy(566,40,"|");
		outtextxy(566,63,"|");
		outtextxy(510,50,"left <-o-> right");
		settextstyle(2,1,5);
		outtextxy(561,66,"<");
		outtextxy(561,33,">");
		settextstyle(0,0,0);
		outtextxy(500,170,"Press Esc to exit");
	}
void spedometer(int a, int b)
	{
	setcolor(8);
	arc(610,350,80,270,100);
	arc(610,350,80,270,102);
	setcolor(9);
	arc(610,350,80,270,101);
	setcolor(YELLOW);
	arc(610,350,80,270,50);
	setcolor(4);
	line(610,350,a-60,b+50);
	line(610,352,a-60,b+51);
	settextstyle(7,0,1);
	setcolor(8);
	outtextxy(605,425,"0");
	setcolor(GREEN);
	outtextxy(540,399,"25");
	outtextxy(512,340,"50");
	setcolor(4);
	outtextxy(540,280,"75");
	outtextxy(600,254,"100");
	}
void meterclr(int a=620, int b=350)
	{
	setcolor(BLACK);
	line(610,350,a-60,b+50);
	line(610,352,a-60,b+51);
	}
void accident()
	{
	cls;
	settextstyle(4,0,6);
	setcolor(13);
	outtextxy(210,190,"Crash..!!");
	settextstyle(4,0,4);
	D(2000);
	cls;
	setbkcolor(8);
		gotoxy(300,350);
		printf("\n\n\n\n\n\n");
		printf("\n\t\t\t   //---------------------||		");
		gotoxy(300,360);
		printf("\n\t\t\t   ||    Game Over....    ||		");
		gotoxy(300,370);
		printf("\n\t\t\t   ||---------------------//		");
		gotoxy(300,300);
		printf("\n\n\n\t\t Your Score - %d",counter);
		getch();
		exit(0);
	}
void ExitGame()
	{
	D(2000);
	cls;
	union REGS i,o;
	i.x.ax=1;
	int86(0x33, &i,&o);
	setbkcolor(8);
		gotoxy(300,350);
		printf("\n\n\n\n\n\n");
		printf("\n\t\t\t   //---------------------||		");
		gotoxy(300,360);
		printf("\n\t\t\t   ||  Exit From Game...  ||		");
		gotoxy(300,370);
		printf("\n\t\t\t   ||---------------------//		");
		gotoxy(300,300);
		printf("\n\n\n\t\t Your Score - %d",counter);
		getch();
		exit(0);
	}
void main()
	{
	int gd=DETECT, gm, ch, ch1;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	pamplet();
	loading();
	cls;
	spedometer(a,b);
	instruct();
	while(1)
	{
		counter+=10;
		car(x,y);
		x1 = 120 + (random(6)*50);
		y1 = 10;
		enemy_car(x1,y1);
		enemy_car1(x1,y1);
		while(y1 <= getmaxy() + 40)
		{
			enemy_car_clear(x1,y1);
			enemy_car_clear1(x1,y1);
			y1+=10;
			y2+=10;
			enemy_car(x1,y1);
			enemy_car1(x1,y1);
			if(((y1+89) >= y) && (((x>=x1) && (x<=x1+70)) || (x<=x1 && x+70>=x1+10)))
			{
				accident();
			}
			if(kbhit())
			{
				ch = getche();
				if(ch==77)
				{
					temp++;
					if(x>=340)
						{
						x-=70;
						car(x,y);
						}
					car_clear(x,y);
					x+=70;
					car(x,y);
				}
				if(ch==75)
				{
					if(x<=150)
						{
						x+=70;
						car(x,y);
						}
					car_clear(x,y);
					x-=70;
					car(x,y);
				}
				if(ch==27)
				{
					ExitGame();
				}
			}
			delay(random(10));
		}
	delay(1);
	}
	}