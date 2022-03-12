#include<stdio.h>  
#include<graphics.h>
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
			}
		}
	}
    { 
        y += 1;  
        err += 2*y + 1;  
    }  
   
    if (err > 0)  
    {  
        x -= 1;  
        err -= 2*x + 1;  
    }  
    }  
}  
 void main()  
{  
    int gdriver=DETECT, gmode, error, x, y, r;  
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");  
           printf("Enter radius of circle: ");  
    scanf("%d", &r);  
   
    printf("Enter co-ordinates of center(x and y): ");  
    scanf("%d%d", &x, &y);  
    drawcircle(x, y, r);  
    getch();  
}  

