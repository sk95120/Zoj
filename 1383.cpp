#include <iostream>
using namespace std;
int main(){
	int times,i,j,num,a;
	while(cin>>times){
	for(i=0;i<times;i++){
		cin>>num;
		if(num==0){	
			continue;	
		}
		for(j=0;num!=0;j++){
			a=num;
			if(num%2)
				cout<<j;
			num/=2;
			if(num!=0&&a%2!=0)
				cout<<" ";
		}
		cout<<endl;
	}
	}
	return 0;
}