#include <iostream>
#include <cstring>

char targ[10],stdin[10];
using namespace std;

int movem(void){
	int i;
	if(strcmp(targ,stdin)==0)
		return 0;
	for(i=0;i<9;i++)
		if(targ[i]=='.')
			break;
	switch(i){
		case 0:
			targ[0]=targ[1];
			targ[1]='.';
			movem();
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
	}

}

int main(){
	while(cin>>targ){
		movem();
	}
	return 0;
}