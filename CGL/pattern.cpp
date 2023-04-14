//Pattern
# include <iostream>
# include <graphics.h>
# include <math.h>

using namespace std;

void Drawcircle(int xc,int yc, int x, int y)
{
	putpixel(xc+x,yc+y,RED);
	putpixel(xc+x,yc-y,RED);
	putpixel(xc-x,yc+y,RED);
	putpixel(xc-x,yc-y,RED);
	
	putpixel(xc+y,yc+x,RED);
	putpixel(xc+y,yc-x,RED);
	putpixel(xc-y,yc+x,RED);
	putpixel(xc-y,yc-x,RED);
}

void linedda(int x1,int y1,int x2,int y2)
{
	int dx=x2-x1, dy=y2-y1,steps;
	float xinc, yinc, x=x1, y=y1;
	
	if (abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps=abs(dy);
	xinc=(float)dx/(float)steps;
	yinc=(float)dy/(float)steps;

	for(int i=0;i<=steps;i++)
	{
		putpixel(round(x),round(y),RED);
		x+=xinc; y+=yinc;
	}
}

int main()
{
	int xc,yc,r;
	cout<<"Enter the x center of circle :";
	cin>>xc;
	cout<<"Enter the y center of circle :";
	cin>>yc;
	cout<<"Enter the radius of circle :";
	cin>>r;

	int x=0;
	int y=r;
	int x1=0;
	int y1=r/2;
	int D=3-2*r;
	int gd=DETECT, gm;
    char data[]="C:\\MinGW\\lib\\libbgi.a";
	initgraph(&gd,&gm,data);
	
	while (x<y)
	{
		Drawcircle (xc,yc,x,y);
		x+=1;
		if (D<0)
			D=D+4*x+6;
		else
		{
			y=y-1;
			D=D+4*(x-y)+10;
		}
	}
	
	linedda(xc,yc-r,xc+0.86*r,yc+0.5*r);
	linedda(xc+0.86*r,yc+0.5*r,xc-0.86*r,yc+0.5*r);
	linedda(xc-0.86*r,yc+0.5*r,xc,yc-r);

	
	while (x1<y1)
	{
		Drawcircle (xc,yc,x1,y1);
		x1+=1;
		if (D<0)
			D=D+4*x1+6;
		else
		{
			y1=y1-1;
			D=D+4*(x1-y1)+10;
		}
	}

	delay(500);
    getch();
	closegraph();
	return 0;


}