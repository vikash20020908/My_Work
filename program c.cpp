
#include<stdio.h>  
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   
void eightwaysymmetricplot(int xc,intyc,int x,int y)  

    {  
    putpixel(x0 + x, y0 + y, 7);  
    putpixel(x0 + y, y0 + x, 7);  
    putpixel(x0 - y, y0 + x, 7);  
    putpixel(x0 - x, y0 + y, 7);  
    putpixel(x0 - x, y0 - y, 7);  
    putpixel(x0 - y, y0 - x, 7);  
    putpixel(x0 + y, y0 - x, 7);  
    putpixel(x0 + x, y0 - y, 7);  
    }
    void bresenhemcircle (int xc,int yc,int r)
    {
    	int x=0,y=r,d=3-(2*r);
    	eightwaysymmetricplot(xc,yc,x,y);
    	while(x<=y)
    	{
    		if (d<=0)
    		{
    			d=d+(4*x)+6;
			}
			else 
			{
				d=d+(4*x)-(4*y)+10;
				y=y-1;
			}
			x=x+1;
			eightwaysymmetricplot(xc,yc,x,y);
			}
		}
		int main (void)
		{
			int xc,yc,r,gdriver=DETECT,gmode,errorcode;
			initgraph(&gdriver,gmode,"c:\\TURBOC3\\BGI");
			errorcode=graphresult();
			if (error!=grOK)
			{
			printf ("graphic error:%s\n", grapherrormsg(errorcod));
			printf("press any key to halt:");
			getch ();
			exit(1)
		}
		printf("enter the value of xc and yc :");
		scanf("%d%d",&xc,&yc);
		printf("enter the value of radius :");
		scanf("%",&r);
		
		bresenhamcircle(xc,yc,r);
		getch();
		closegraph();
		return 0;
	}
	
