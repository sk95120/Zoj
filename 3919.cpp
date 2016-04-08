#include <iostream>
#include <iomanip>
#include  <cmath>
using namespace std;

int main(){
	double a,b;
	while(cin>>a>>b){	
		cout<<setiosflags(ios::fixed)<<setprecision(15)<<2*a*b<<" "<<4*a*a*b*b/(a*a+b*b)<<endl;	
	}
	return 0;
}
