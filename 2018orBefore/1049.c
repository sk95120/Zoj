#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main(){
	int N,S,i,j;
	float X,Y;
	double L,R;
		scanf("%d",&N);		
		for(i=1;i<=N;i++){
			scanf("%f %f",&X,&Y);
			L=sqrt(pow(X,2)+pow(Y,2));
			S=0;
			for(j=0;;S+=50,j++){
				R=sqrt((2*S)/PI);
				if(R>=L)
					break;	
			}
			if(j==0)
				printf("Property %d: This property will begin eroding in year 1.\n",i);	
			else
				printf("Property %d: This property will begin eroding in year %d.\n",i,j);	
		}
		printf("END OF OUTPUT.\n");	
}