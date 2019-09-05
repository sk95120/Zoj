#include <iostream>
#include <cstring> 
#include <cstdio>
#define L
using namespace std;

int main (){
	#ifdef L
		freopen("in.in","r",stdin);
		freopen("out.out","w",stdout);
	#endif
	int i;
	char star[200]={"START"},word[300];
	while(1){
		gets(word);
		if(strcmp(word,"ENDOFINPUT")==0)
			break;
		if(strcmp(word,"END")==0||strcmp(word,"START")==0)
			continue;
		for(i=0;word[i]!='\0';i++){
			if('A'<=word[i]&&word[i]<='Z'){
				word[i]+=21;
				if(word[i]>'Z')
					word[i]-=26;
			}
			cout<<word[i];
		}
		cout<<endl;
	}
	return 0;
}
