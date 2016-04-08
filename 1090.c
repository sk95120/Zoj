#include <stdio.h>
#include <math.h>
main()
{
	float x1,y1,x2,y2,x3,y3;
	float k1,b1,k2,b2;
	float a,b,r;
	double pi=3.1415926,C;
	int statue;
	statue=scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	while(statue==1)
	{ 
		k1=(y1+y2-2*y3)/(x1+x2-2*x3);
		b1=y1-k1*x1;
		k2=(x1-x3)/(y3-y1);
		b2=y3-k2*x3;
		a=(b1-b2)/(k2-k1);
		b=k2*a+b2;
		while(pow((a-x1),2)+pow((b-y1),2)<=25e10)
		{
			r=sqrt(pow((a-x1),2)+pow((b-y1),2));
			C=2*pi*r;
			printf(".2f",C);
		}
		statue=scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	}
}
