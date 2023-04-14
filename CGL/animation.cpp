#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void man()
{   
	int i,j,getmaxy(),getmaxx(),x,y;
	
	for(i=0;i<getmaxx()-140;i++)
	{
	cleardevice();
	line(0,450,getmaxx(),450);//ground
	rectangle(10+i,360,50+i,420);//body
	line(15+i,420,45+i,450);//leg1
	line(45+i,420,15+i,450);//leg2
	circle(30+i,345,15);//head
	line(30+i,370,70+i,410);//hand
	line(50+i,390,70+i,370);//hand2
	line(70+i,370,70+i,320);//umbrella stand
	line(i,320,140+i,320);//umbrella bottom
	arc(70+i,320,180,0,70);//umbrella
	
	for(j=0;j<100;j++)
	{
	x=rand()%getmaxx();
	y=rand()%getmaxy();
	
	line(x,y,x+4,y+4);
	
	}
	x=0;y=0;
	delay(20);
	}
	
	
}


int main()
{ 	int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL);
	
 	man();
	
	delay(10000);
	closegraph();
 	return 0;
}
