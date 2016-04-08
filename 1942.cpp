#include <iostream>
#include <cmath>
#include <iomanip> 
#include <string.h>
#define INF 100000 

int N;
int path[202];//next[x][0]ÏÂÒ»¸ö×ø±êµÄÎ»ÖÃ next[X][1]Î»ÖÃ´æÔÚ·ñ£¨0£¬1£© 
int used[202];
float weight[202][202];//weight[a][b],aÊ¯Í·µ½bµÄ³¤¶È
float dist[202];
int position[202][2];// ÊäÈëµÄÊ¯Í·×ø±ê£¨1 2 ÎªForrg£© 

using namespace std;

float distm(void){
	int i,j,k,u;
	float mindist;
	for(i=0;i<N;i++)
		dist[i]=weight[0][i];
	used[0]=1;
	for(i=0;i<N;i++){
		mindist=INF;
		u=-1;
		for(j=0;j<N;j++){
			if(used[j]==1)
				continue;
			if(dist[j]<mindist){
				mindist=dist[j];
				u=j;
			}
		}
		if(u!=-1){
			for(k=0;k<N;k++){
				if(k==i||k==j)
					continue;
				if(dist[j]>max(weight[i][k],weight[k][j]))
					dist[j]=max(weight[i][k],weight[k][j]);
			}
		}
		if(mindist=INF)
			used[i]=1;
	}
	return dist[1];
}

int main(){
	int i,j,times=0;
	float max;
	while(cin>>N){
		times++;
		if(N==0)
			break;
		for(i=0;i<N;i++)
			cin>>position[i][0]>>position[i][1];
		for(i=0;i<N;i++)
			for(j=i;j<N;j++){
				if(i==j)
					weight[i][j]=INF;
				else{
					weight[i][j]=weight[j][i]=sqrt((position[i][0]-position[j][0])*(position[i][0]-position[j][0])+(position[i][1]-position[j][1])*(position[i][1]-position[j][1]));
				}
			}
		memset(path,0,sizeof(path));
		memset(used,0,sizeof(used));
		max=distm();
		cout<<"Scenario #"<<times<<endl;
		cout<<"Frog Distance = "<<setiosflags(ios::fixed)<<setprecision(3)<<max<<endl<<endl;
	}
	return 0;
}
