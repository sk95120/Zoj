#include <iostream>
using namespace std;
main(){
	int mark[10];
	int number,times,point,i,j;
	cin>>times;
	for(i=0;i<times;i++){
		cin>>number;
		point=0;
		for(j=0;j<number;j++){
			cin>>mark[j];
			if(mark[j]>6000)
				point++;
		}
		cout<<point<<endl;
	}
}