/*
Coder:Fenil Milankumar Parmar 
Enrollment No. :170170116027
*/

#include<graphics.h>
main()
{
	initwindow(800,800,"Practicle 3");
	int x1=getmaxx();
	int y1=getmaxy();
	//take point in 4th quadrant.
	line(0,0,x1,0);//top horizontal line
	line(x1/3,0,x1/3,y1);//1st verticle line
	line((2*x1)/3,0,(2*x1)/3,y1);//2nd verticle line
	line(x1,0,x1,y1);//right most verticle line
	line(0,0,0,y1);//left most verticle line
	line(0,y1/3,x1,y1/3);//1st horizontal line
	line(0,(2*y1)/3,x1,(2*y1)/3);//2nd horizontal line
	line(0,y1,x1,y1);//Bottom horizontal line
	setfillstyle(1,4);
	circle(x1/2,y1/2,x1/12);
	floodfill((x1/2)+1,(y1/2)+1,15);
	
	setfillstyle(1,6);
	pieslice(x1/6,y1/3,60,120,(x1/3)-20);
	floodfill((x1/6),(y1/6),15);
	
	setfillstyle(7,14);
	//bar((2*x1/3)+10,(2*y1/3)+10,x1-10,y1-10);
	rectangle((2*x1/3)+10,(2*y1/3)+10,x1-10,y1-10);
	floodfill((2*x1/3)+20,(2*y1/3)+20,15);
	
	setfillstyle(3,5);	
	bar(20,(2*y1/3)+20,(x1/3)-20,y1-20);
	rectangle(20,(2*y1/3)+20,(x1/3)-20,y1-20);
	floodfill(23,(2*y1/30)+30,15);
	
	setfillstyle(6,7);
	ellipse(x1/2,y1/6,0,360,x1/6,y1/12);
	floodfill(x1/2,y1/6,15);
	
	arc(x1/2,(2*y1/3)+(y1/6),0,180,x1/12);
	
	line(2*x1/3,y1/6,x1,y1/6);
	
	setfillstyle(1,8);
	floodfill((5*x1/6),(y1/2),15);
	line((5*x1/6),(y1/3)+20,(2*x1/3)+20,(2*y1/3)-20);
	line((5*x1/6),(y1/3)+20,x1-20,(2*y1/3)-20);
	line((2*x1/3)+20,(2*y1/3)-20,(x1-20),(2*y1/3)-20);
	setfillstyle(1,6);
	//floodfill(168,426,15);
	bar(20,(y1/3)+(y1/15),(x1/3)-20,(y1/3)+(2*y1/15));
	rectangle(20,(y1/3)+(y1/15),(x1/3)-20,(y1/3)+(2*y1/15));
	setfillstyle(1,15);
	//floodfill(98,440,15);
	bar(20,(y1/3)+(2*y1/15),(x1/3)-20,(y1/3)+(3*y1/15));
	rectangle(20,(y1/3)+(2*y1/15),(x1/3)-20,(y1/3)+(3*y1/15));
	setfillstyle(1,2);
	//floodfill(170,509,15);
	bar(20,(y1/3)+(3*y1/15),(x1/3)-20,(y1/3)+(4*y1/15));
	rectangle(20,(y1/3)+(3*y1/15),(x1/3)-20,(y1/3)+(4*y1/15));
	
	setbkcolor(1);
	setcolor(2);
	setfillstyle(1,3);
	//floodfill(x1/6,y1/2,15);
	circle(x1/6,(y1/2),(y1/30));
	//rectangle(1120,720,1980,1080);	
	getch();
}
