#include <iostream>
#include <cstdio>
#include <cstring>
//#define LOCAL

using namespace std;

char int_mark[4]={"int"};
char id_word[10][10];
char  id_num[10][10];

int main(){
	#ifdef LOCAL
		freopen("data.in", "r", stdin); 
		freopen("data.out", "w", stdout);
	#endif

	int i,v,j=0,k=0;
	char inString[100];

	memset(id_num,0,sizeof(id_num));
	memset(id_word,0,sizeof(id_word));

	while(cin>>inString){

		for(i=0;inString[i]!='\0';i++)
			if(!(inString[i]==' '||inString[i]==','||inString[i]==';'||(96<inString[i]&&inString[i]<123)||(64<inString[i]&&inString[i]<91)||(47<inString[i]&&inString[i]<58)))
				break;
		if(inString[i]!='\0'){
			cout<<"Error!"<<endl;
			continue;
		}
			
		if(strcmp(inString,int_mark)==0){
			cout<<"(1,_)"<<endl;
		}else{
			for(i=0;inString[i]!='\0';i++){
				if(inString[i]==',')
					cout<<"(2,_)"<<endl;
				else if(inString[i]==';')
					cout<<"(3,_)"<<endl;
				else if((96<inString[i]&&inString[i]<123)||(64<inString[i]&&inString[i]<91)){
					for(v=0;inString[i]!='\0'&&((96<inString[i]&&inString[i]<123)||(64<inString[i]&&inString[i]<91)||(47<inString[i]&&inString[i]<58));v++,i++)
							id_word[j][v]=inString[i];
					id_word[j][v]='\0';
					j++;
					i--;
					cout<<"(4,"<<j-1<<")"<<endl;
				}else if(47<inString[i]&&inString[i]<58){
					for(v=0;inString[i]!='\0'&&((47<inString[i]&&inString[i]<58));v++,i++)
							id_num[k][v]=inString[i];
					id_num[k][v]='\0';
					k++;
					i--;
					cout<<"(5,"<<k-1<<")"<<endl;
				}
			}			
		}	
	}
	return 0;
} 

