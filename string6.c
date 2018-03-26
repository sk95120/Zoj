#include <stdio.h>
char out[40];
char out2[40];
int outlong;
void cha(int count){
	outlong = 0;
	while(count>9){
		out[outlong]=((count%10)+'0');
		count=count/10.0;
		outlong++;
	}
	out[outlong]=(count+'0');
	outlong++;
	int i=0;
	char temp;
	for(i=0;i<outlong;i++){
		out2[i]=out[outlong-1-i];
	}
	printf("\n\n%s\n",out2);
}
int six(int times){
	int x=0;
	int l=1;
	while(times--){
		x= x+l*6;
		l*=10;
	}
	return  x;
}
void print(void){
	int i = 0;
	for(i = 0;i<outlong;i++){
		switch(){
			#include <stdio.h>
char out[40];
char out2[40];
int outlong;
void cha(int count){
	outlong = 0;
	while(count>9){
		out[outlong]=((count%10)+'0');
		count=count/10.0;
		outlong++;
	}
	out[outlong]=(count+'0');
	outlong++;
	int i=0;
	char temp;
	for(i=0;i<outlong;i++){
		out2[i]=out[outlong-1-i];
	}
	printf("\n\n%s\n",out2);
}
int six(int times){
	int x=0;
	int l=1;
	while(times--){
		x= x+l*6;
		l*=10;
	}
	return  x;
}
int main(void){
	int i,j,n,l;
	char in[104];
	int innum[104];//2 1 0
	int inlong,start,end;
	int count;
	while(scanf("%d",&n)!= EOF){
		while(n--){
			scanf("%s",in);
			for(i = 0;in[i] != '\0';i++){
				if(in[i]=='6')
					innum[i]=6;
				else if (in[i]=='+' ||in[i]=='-' )
					innum[i]=1;
				else if(in[i]=='*' )
					innum[i]=2;
			}
			inlong = i;
			for(i=0;i<inlong;i++){
				if(innum[i]==6){
					start = end = i;
					for(j=i+1;innum[j]== 6;j++)
							;
					end = j;					
					if(i+1==j){
					}else{
						innum[end-1]=six(end-start);
						for(j=start;j<end-1;j++)
							innum[j]=0;
					}
				
					i=end;
				}else{
					i++;
				}
				
			}
			//这里字符串含有0 1 2 还有数字
			for(i=0;i<inlong;i++){
				if(innum[i]==2){
					innum[i]=0;
					for(j=i-1;innum[j]== 0||innum[j]== 1;j--)
						;
					start = j;
					for(j=i+1;innum[j]== 0||innum[j]== 1;j++)
						;
					end = j;
					innum[end] = innum[end] * innum[start];
					innum[start]=0;
					i=end+1;
				}
			} 
			
			for(i=0;i<inlong;i++){
				if(innum[i]==1){
					innum[i]=0;
					for(j=i-1;innum[j]== 0;j--)
						;
					start = j;
					for(j=i+1;innum[j]== 0;j++)
						;
					end = j;
					if(in[i]=='+')
						innum[end] = innum[end] + innum[start];
					else
						innum[end] = innum[start] + innum[end];
					innum[start]=0;
					i=end-1;
				}
			} 
//			printf("\n\n");
//			for(i=0;i<inlong;i++){
//				printf("%d ",innum[i]);
//			}
//			printf("\n\n");
			count=innum[inlong-1];
			cha(count);
		}
	}
}
		}
	}
}
int main(void){
	int i,j,n,l;
	char in[104];
	int innum[104];//2 1 0
	int inlong,start,end;
	int count;
	while(scanf("%d",&n)!= EOF){
		while(n--){
			scanf("%s",in);
			for(i = 0;in[i] != '\0';i++){
				if(in[i]=='6')
					innum[i]=6;
				else if (in[i]=='+' ||in[i]=='-' )
					innum[i]=1;
				else if(in[i]=='*' )
					innum[i]=2;
			}
			inlong = i;
			for(i=0;i<inlong;i++){
				if(innum[i]==6){
					start = end = i;
					for(j=i+1;innum[j]== 6;j++)
							;
					end = j;					
					if(i+1==j){
					}else{
						innum[end-1]=six(end-start);
						for(j=start;j<end-1;j++)
							innum[j]=0;
					}
				
					i=end;
				}else{
					i++;
				}
				
			}
			//这里字符串含有0 1 2 还有数字
			for(i=0;i<inlong;i++){
				if(innum[i]==2){
					innum[i]=0;
					for(j=i-1;innum[j]== 0||innum[j]== 1;j--)
						;
					start = j;
					for(j=i+1;innum[j]== 0||innum[j]== 1;j++)
						;
					end = j;
					innum[end] = innum[end] * innum[start];
					innum[start]=0;
					i=end+1;
				}
			} 
			
			for(i=0;i<inlong;i++){
				if(innum[i]==1){
					innum[i]=0;
					for(j=i-1;innum[j]== 0;j--)
						;
					start = j;
					for(j=i+1;innum[j]== 0;j++)
						;
					end = j;
					if(in[i]=='+')
						innum[end] = innum[end] + innum[start];
					else
						innum[end] = innum[start] + innum[end];
					innum[start]=0;
					i=end-1;
				}
			} 
//			printf("\n\n");
//			for(i=0;i<inlong;i++){
//				printf("%d ",innum[i]);
//			}
//			printf("\n\n");
			count=innum[inlong-1];
			cha(count);
		}
	}
}
