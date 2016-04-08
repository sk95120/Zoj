#include <iostream>
#define L
using namespace std;

int main(){
	#ifdef L
		freopen("in.in","r",stdin);
		freopen("out.out","w",stdout); 
	#endif
	
	int m,n,p;
	int f_1=1,f_2=2;
	int i,f_m,temp,u;
	long s=(long)(f_2+f_1);

	while(cin>>n>>m>>p){
		u=(m>n)?m:n;
		for(i=3;i<=u;i++){
			temp=f_1+f_2;
			f_1=f_2;
			f_2=temp;
			if(i<=n)
				s+=(long)f_2;
			if(i==m)
				f_m=f_2;		
		}
		s%=(long)f_2;
		s%=(long)p;
		cout<<s<<endl;
	}

	return 0;
}
