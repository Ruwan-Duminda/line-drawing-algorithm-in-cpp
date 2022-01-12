/* Ruwan Duminda Rathnayaka */

#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    float x,y,x1,x2,y1,y2,dx,dy,length;
    int i,gd,gm;
    /*clrscr(); clrscr() will not work here because this function is old. 
	we will use system("cls") insted of clrscr()*/
    system("cls");
    
    /* to Read Two end points of line */
    printf("Enter the value x1:\t");
    scanf("%f",&x1);
    printf("Enter the value y1:\t");
    scanf("%f",&y1);
    printf("Enter the value x2:\t");
    scanf("%f",&x2);
    printf("Enter the value y2:\t");
    scanf("%f",&y2);
    
    /* to initialise graphics mode. */
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");
    
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    
    if(dx>=dy)
    {
    	length=dx;
    }
    else
    {
    	length=dy;
    }
    dx=(x2-x1)/length;
    dy=(y2-y1)/length;
    
    x=x1+0.5;
    y=y1+0.5;
    
    i=1;
    while(i<=length)
    {
    	putpixel(x,y,15);
    	x=x+dx;
    	y=y+dy;
    	delay(100);/*delay fuction is used to suspend execution of a 
		program for a particular time.*/
    }
    
    getch();
    closegraph();
}
