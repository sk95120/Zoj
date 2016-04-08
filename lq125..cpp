#include <iostream>
#define X
bool path[5000][101];
int N,M;
using namespace std;

int main (){
	#ifdef X
		freopen("lq.in","r",stdin);
		freopen("lq.out","w",stdout);
	#endif
	int i,j,x,y,step;
	char direct;
 	while(cin>>N>>M){
 		for(i=0;i<N;i++)
 			for(j=0;j<M;j++)
 				cin>>path[i][j];
 		cin>>x>>y;
 		cin>>direct;
 		cin>>step;
 		while(step--){
 			if(path[x][y]==1){ //balcak
 				path[x][y]=0;
 				if(direct=='U'){
 					direct='R';
 					y++;
 				}else if(direct=='D'){
 					direct='L';
 					y--;
 				}else if(direct=='L'){
 					direct='U';
 					x--;
 				}else if(direct=='R'){
 					direct='D';
 					x++;
 				}else
 					;
 			}else{
 				path[x][y]=1;
 				if(direct=='U'){
 					direct='L';
 					y--;
 				}else if(direct=='D'){
 					direct='R';
 					y++;
 				}else if(direct=='L'){
 					direct='D';
 					x++;
 				}else if(direct=='R'){
 					direct='U';
 					x--;
 				}else
 					;
 			}
 		}
 		cout<<x<<" "<<y<<endl;
 	}
	return 0;
}
