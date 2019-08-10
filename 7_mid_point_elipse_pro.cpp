#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
	int rx,ry;
	cout<<"Enter Radius :\n";
	cout<<"Rx=";
	cin>>rx;
	cout<<"Ry=";
	cin>>ry;
	int xc,yc;
	cout<<"Enter Center Point: ";
	cin>>xc>>yc;
	int po=(ry*ry)-((rx*rx)*ry)+((rx*rx)/4);
	int x=0,y=ry;

	if(rx<0 ||ry<0 || (xc+rx)>800 ||(yc+ry)>800 ||(yc-ry)<0 || (xc-rx)<0)
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
		putpixel(xc+rx,yc+x,15);
		putpixel(xc-rx,yc+x,15);
		while((ry*ry*x)<(rx*rx*y))
		{
			if(po<0)
			{
				x=x+1;
				po=po+(2*x*ry*ry)+(ry*ry);
				//cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;
			}
			else
			{
				x=x+1;
				y=y-1;
				po=po+(2*x*ry*ry)+(ry*ry)-(2*y*rx*rx);
				//cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;
			}
		/*We only have to find for one octant then there are all similar , so we just have to put pixels of other 7 octants.*/
			putpixel(xc+x,yc+y,15);
		//	putpixel(xc+y,yc+x,15);
			putpixel((xc-x),(yc-y),15);
		//	putpixel((xc-y),(yc-x),15);
			putpixel(xc-x,(yc+y),15);
		//	putpixel(xc-y,(yc+x),15);	
			putpixel(xc+x,(yc-y),15);
		//	putpixel((xc+y),yc-x,15);	
		}
		po=((ry*ry)*(x+(1/2))*(x+(1/2)))+((rx*rx)*(y-1)*(y-1))-(rx*rx*ry*ry);
		while(y>=0)
		{
			if(po>0)
			{
				y=y-1;
				po=po-(2*rx*rx*y)+(rx*rx);
				//cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;
			}
			else
			{
				x=x+1;
				y=y-1;
				po=po+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);
				//cout<<"Dicision Parameter:"<<po<<"x="<<x<<" y="<<y<<endl;
			}
			/*We only have to find for one octant then there are all similar , so we just have to put pixels of other 7 octants.*/
			putpixel(xc+x,yc+y,15);
			//putpixel(xc+y,yc+x,15);
			putpixel((xc-x),(yc-y),15);
		//	putpixel((xc-y),(yc-x),15);
			putpixel(xc-x,(yc+y),15);
		//	putpixel(xc-y,(yc+x),15);	
			putpixel(xc+x,(yc-y),15);
		//	putpixel((xc+y),yc-x,15);
		}
	}
	getch();
	return 0;
}
