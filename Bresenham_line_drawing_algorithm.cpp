/*
Coder: Fenil Milankumar Parmar 
Information & Technology
Vishwakarma Goverment Engineering College 
*/
#include<graphics.h>
#include<iostream>
#include<cmath>
using namespace std;

main()
{
	
	float x1,x2,y2,y1;
	int xp,yp;
	cout<<"Enter x1= ";
	cin>>x1;
	cout<<"Enter y1= ";
	cin>>y1;
	cout<<"Enter X2= ";
	cin>>x2;
	cout<<"Enter y2= ";
	cin>>y2;
	if(x2<x1 && y2<y1)
	{
		int tmp1,tmp2;
		tmp1=x1;
		x1=x2;
		x2=tmp1;
		
		tmp2=y1;
		y1=y2;
		y2=tmp2;
		
		cout<<"x1 ="<<x1<<" y1= "<<y1<<" x2= "<<x2<<" y2= "<<y2<<endl;
	}
	if(x1==x2 && y1==y2)
	{
		putpixel(x1,x2,15);
		cout<<"This can not become line!";
		return 0;
		getch();
	}
	float m,x,y,dx,dy;
	cout<<"x1="<<x1<<" y1= "<<y1<<" x2= "<<x2<<" y2= "<<y2;
	m=(float)(y2-y1)/(x2-x1);
	cout<<"m = "<<m;
	xp=x1;
	yp=y1;
	dy=y2-y1;
	dx=x2-x1;
	initwindow(800,800,"BRESENHAM ALGORITHM");
	int po=2*dy-dx;
	
	
	if((x2-x1)>0 && (y2-y1)>0 )
	{
		if(m<=1)
		{
			while(xp!=x2 && yp!=y2)
			{
				if(po<0)
				{
					po=po+2*dy;
					x=x1+1;
					y=y1;
					xp=round(x);
					yp=round(y);
					cout<<"x="<<xp<<"y="<<yp;
					x1=x;
					y1=y;				
					putpixel(xp,yp,15);
				}
				else if(po>=0)
				{
					po=po+2*dy-2*dx;
					x=x1+1;
					y=y1+1;
					xp=round(x);
					yp=round(y);
					cout<<"x="<<xp<<"y="<<yp;
					x1=x;
					y1=y;			
					putpixel(xp,yp,15);	
				}				
				cout<<endl;
			}
		}
		if(m>1)
		{
			while(xp!=x2 && yp!=y2)
			{
				if(po<0)
				{
					po=po+2*dx;
					x=x1+1;
					y=y1;
					xp=round(x);
					yp=round(y);
					cout<<"x="<<xp<<"y="<<yp;
					x1=x;
					y1=y;				
					putpixel(xp,yp,15);
				}
				else if(po>=0)
				{
					po=po+2*dx-2*dy;
					x=x1+1;
					y=y1+1;
					xp=round(x);
					yp=round(y);
					cout<<"x="<<xp<<"y="<<yp;
					x1=x;
					y1=y;			
					putpixel(xp,yp,15);	
				}				
				cout<<endl;
			}
		}	
	}
	getch();
}

