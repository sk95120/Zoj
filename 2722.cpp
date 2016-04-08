#include <iostream>
#define L
using namespace std;

int main (){
	#ifdef L
		freopen("in.in","r",stdin);
		freopen("out.out","w",stdout);
	#endif
	int S=0,a;
	cin>>a;
	while(a!=0){
		for(;a!=1;){
			if(a%2==1){
				S++;
				a/=2;
				a++;
			}else{
				S++;
				a/=2;
			}
		}
		cout<<S<<endl;
		S=0;
		cin>>a;
	}
	return 0;
}
