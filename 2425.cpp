#include <iostream>
using namespace std;
#define S  50005
int N,M,flag=0;
int num[S];
void print(void){
	int i;
	for(i=0;i<N-1;i++)
		cout<<num[i]<<" ";
	cout<<num[N-1]<<endl;
}

int count(void){
	int i,j,countNum=0;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(num[i]>num[j])
				countNum++;
	return countNum;
}
void swap(int offset,int i){
	int temp;
	temp=num[offset];
	num[offset]=num[i];
	num[i]=temp;
}
void perm(int offset){
	int temp,i;
	if(flag==1)
		return ;
	if(M==count()){
		print();
		flag=1;
		return ;
	}else{
		for(i=offset;i<N;i++){
			swap(offset,i);
			perm(offset+1);
			swap(offset,i);
		}
	}

}

int main(){
	int i;
	while(cin>>N>>M){
		if(N==-1)
			break;
		for(i=0;i<N;i++)
			num[i]=i+1;
		perm(0);
		flag=0;
	}
	return 0;
}
