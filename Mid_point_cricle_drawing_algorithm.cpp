/*
Parmar Fenil Milankumar
Information & Technology
Vishwakarma Goverment Engineering College 
*/
#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
	int r;
	cout<<"Enter Radius:";
	cin>>r;
	int xc,yc;
	cout<<"Enter Center Point: ";
	cin>>xc>>yc;
	int po=1-r;
	int x=0,y=r;

	if(r<=0 || (xc+r)>=800 ||(yc+r)>=800 ||(yc-r)<=0 || (xc-r)<=0)
	{
		cout<<"Error:Enter Right Value For Radius Or Center Points.\n(1)May be you entered negative or zero value for radius! \n(2)May be your combination of center points and radius leads circle outside of our window!\n";
		main();
	}	
	else
	{	
		initwindow(800,800);
		putpixel(xc,yc,15);
		putpixel(xc+x,yc+y,15);
		putpixel(xc+x,yc-y,15);
		putpixel(xc+y,yc+x,15);
		putpixel(xc-y,yc+x,15);
		while(x<y)
		{
			if(po<0)
			{
				x=x+1;
				po=po+(2*x)+1;
				cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;
			}
			else
			{
				x=x+1;
				y=y-1;
				po=po+(2*x)+1-(2*y);
				cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;	
			}
		/*We only have to find for one octant then there are all similar , so we just have to put pixels of other 7 octants.*/
			putpixel(xc+x,yc+y,15);
			putpixel(xc+y,yc+x,15);
			putpixel((xc-x),(yc-y),15);
			putpixel((xc-y),(yc-x),15);
			putpixel(xc+x,(yc-y),15);
			putpixel((xc-x),yc+y,15);	
			putpixel(xc+y,(yc-x),15);
			putpixel((xc-y),yc+x,15);	
		}
//		while(y>=0)
//		{
//			if(po<0)
//			{
//				y=y-1;
//				po=po+(2*y)+1;
//				cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;
//				putpixel(xc+x,yc+y,15);
//				putpixel((xc-x),(yc-y),15);
//				putpixel(xc+x,(yc-y),15);
//				putpixel((xc-x),yc+y,15);
//			}
//			else
//			{
//				y=y-1;
//				x=x+1;
//				po=po+(2*y)+1-(2*x);			
//				cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;
//				putpixel(xc+x,yc+y,15);
//				putpixel((xc-x),(yc-y),15);
//				putpixel(xc+x,(yc-y),15);
//				putpixel((xc-x),yc+y,15);
//			}
//		}
	}
	getch();
	return 0;
}
