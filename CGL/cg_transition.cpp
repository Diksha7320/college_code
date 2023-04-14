//Transition-translation
# include <iostream>
# include <graphics.h>
# include <math.h>

using namespace std;

int A[3][3], B[3][3], C[3][3];
void read_values()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the x values as x1,x2 and x3 :"<<endl;
    cin>>x1>>x2>>x3;
    cout<<"Enter the y values as y1,y2 and y3 :"<<endl;
    cin>>y1>>y2>>y3;
}

void matrix_fill()
{
    int i,j,k;
    int x1,y1,x2,y2,x3,y3,tx,ty;

    cout<<"Enter the translation values for x and y:"<<endl;
    cin>>tx>>ty;

    A[0][0]=x1;
    A[0][1]=x2;
    A[0][2]=x3;
    A[1][0]=y1;
    A[1][1]=y2;
    A[1][2]=y3;
    A[2][0]=1;
    A[2][1]=1;
    A[2][2]=1;

    B[0][0]=1;
    B[0][1]=0;
    B[0][3]=tx;
    B[1][0]=0;
    B[1][1]=1;
    B[1][2]=ty;
    B[2][0]=0;
    B[2][1]=0;
    B[2][2]=1;

}

void multi()
{
    int i,j,k;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            C[i][j]=0;
            for (k=0;k<3;k++)
            {
                C[i][j]+=A[i][j]*B[k][j];
            }
        }
    }
}

void translation()
{
    multi();
    setcolor(RED);
}

int main()
{
    int gd=DETECT,gm;
    char data[]="C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd,&gm,data);
     read_values();
    int B[3][3];
    matrix_fill();

    line(A[0][0],A[0][1],A[1][0],A[1][1]);
    line(A[1][0],A[1][1],A[2][0],A[2][1]);
    line(A[2][0],A[2][1],A[0][0],A[0][1]);
    translation();
    
    line(C[0][0],C[0][1],C[1][0],C[1][1]);
    line(C[1][0],C[1][1],C[2][0],C[2][1]);
    line(C[2][0],C[2][1],C[0][0],C[0][1]);
    translation();
   

    delay(5000);
    closegraph();
    return 0;
}