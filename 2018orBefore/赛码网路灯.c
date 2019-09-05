#include <stdio.h>
//http://exercise.acmcoder.com/online/online_judge_ques?ques_id=1500&konwledgeId=134
int main(void){
	int lightPoint[1005];
  	int streetlong;
  	int i,j,temp;
  	int N;
  	int Light;
  	char y;
  	float LightF;
  	while(scanf("%d %d",&N,&streetlong)!=EOF){
      	i=0;
    	do{
          scanf("%d",&lightPoint[i]);
          i++;
        }while(y=getchar()!='\n');
       // for(i=0;i<N;i++)
	  	//	printf("%d %d\n",i+1,lightPoint[i]);
      	i=0,j=0;
      temp = lightPoint[0];
      for(i=0;i<N;i++){
        for(j=0;j<i;j++){
          	if(lightPoint[i]<lightPoint[j]){
          		temp=lightPoint[i];
				lightPoint[i]=lightPoint[j];
				lightPoint[j]=temp;	
			  }
        }
      }
        for(i=0;i<N;i++)
	  		printf("%d %d\n",i+1,lightPoint[i]);
      Light = streetlong;
      if(N>=2){
      	Light = lightPoint[0]-0;
      	for(i=1;i<N;i++){
      		if(lightPoint[i]-lightPoint[i-1]>Light)
      			Light=lightPoint[i]-lightPoint[i-1];
		}
		if(streetlong - lightPoint[N-1]>Light)
			Light = streetlong - lightPoint[N-1];
		LightF = Light / 2.0 ;
	  }else{
	  	Light = (streetlong - lightPoint[0]) < lightPoint[0]?lightPoint[0]:streetlong - lightPoint[0];
	  	LightF = (float)Light ;
	  }
	    for(i=0;i<N;i++)
	  		printf("%d %d\n",i+1,lightPoint[i]);
      printf("%.1f\n",LightF);
    }
	return 0;
}
