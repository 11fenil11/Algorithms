/*
Parmar Fenil Milankumar
Information & Technology
Vishwakarma Goverment Engineering College 
*/
#include<iostream>
#include<graphics.h>
using namespace std;

boundary_fill(int x,int y,int fc,int bc)
{
	int pcol=getpixel(x,y);
	if(pcol!=bc && pcol!=fc)
	{
		setcolor(fc);
		putpixel(x,y,fc);
//		cout<<"x="<<x<<"y="<<y<<endl;
		boundary_fill(x+1,y,fc,bc);

		boundary_fill(x+1,y+1,fc,bc);
		boundary_fill(x,y-1,fc,bc);

		boundary_fill(x+1,y-1,fc,bc);		
		boundary_fill(x-1,y,fc,bc);		
		boundary_fill(x,y+1,fc,bc);
		boundary_fill(x-1,y+1,fc,bc);
		boundary_fill(x-1,y-1,fc,bc);
	}
}


flood_fill(int x,int y,int newc,int oldc)
{
	if(getpixel(x,y)== oldc)
	{
		putpixel(x,y,newc);
		flood_fill(x,y+1,newc,oldc);	
		flood_fill(x-1,y,newc,oldc);
		flood_fill(x,y-1,newc,oldc);
		flood_fill(x+1,y,newc,oldc);
		
		flood_fill(x+1,y+1,newc,oldc);
		flood_fill(x+1,y-1,newc,oldc);
		flood_fill(x-1,y-1,newc,oldc);
		flood_fill(x-1,y+1,newc,oldc);
	}	
}

int main()
{
	int x,y;
	cout<<"Make sure you will enter cordinates of between (300,300)->(500,500)\n";
	cout<<"Enter X & Y Cordinates=";
	cin>>x>>y;
	int fcol=1;
	int bcol=15;
	int oldcol=0;
	
	int op;
	cout<<" {--1--}PRESS 1 FOR FLOOD_FILL \n {--2--}PRESS 2 FOR BOUNDARY_FILL \n{--*--}Enter Your Choice For Filling Color:";
	cin>>op;
	initwindow(800,800,"FloodFill BoundaryFill");
	rectangle(300,300,500,500);
	setfillstyle(SOLID_FILL,3);
	bar(450,450,600,600);
	rectangle(450,450,600,600);
//	setfillstyle(SOLID_FILL,10);
//	pieslice(330,350,330,30,50);

	switch(op)
	{
		case 1 :	
			cout<<"Enter Fill COLOR code";
			cin>>fcol;
			cout<<"Enter Old Color";
			cin>>oldcol;	
			flood_fill(x,y,fcol,oldcol);
			break;
		
		case 2 :		
			cout<<"Enter Fill COLOR code";
			cin>>fcol;
			cout<<"Enter Boundary COLOR code";
			cin>>bcol;
			boundary_fill(x,y,fcol,bcol);		
			break;
		default :
			cout<<"-------------ENTER VALID KEY!----------";
	}

	
	
	getch();
	return 0;
}
