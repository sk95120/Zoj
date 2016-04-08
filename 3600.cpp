#include <iostream>
#define L
using namespace std;

int main(){
	#ifdef L
		freopen("in.in","r",stdin);
		freopen("out.out","w",stdout);
	#endif
	float s,i,d,t;
	cin>>i;
	while(i--){
		s=-1;
		cin>>d>>t;
		s+=(t*0.225);
		if(d<=3)
			s+=1;
		else if(d<=10){
			s+=1;
			s+=(d-3)*0.5;
		}else{
			s+=4.5;
			s+=(d-10)*0.75;
		}
		cout<<(int)s<<endl;
	}
	return 0;
}
