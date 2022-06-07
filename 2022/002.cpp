/**
 * 
 * 	 给出随机的一些数，拼出最大的数值。
 * 	9 , 9, 0 , 0, 111, 222, 33 ,4444
 * 
 * */

#include <iostream>
#include <stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<ctype.h>
#include <vector>

#define NNNN 10000

#define L

using namespace std;

int numPower(int num) {
	int power = 1;
	num /= 10;
	while (num > 0) {
		num /= 10;
		power ++ ;
	}
	
	return power;
} 
int main(){
	
	#ifdef L
		freopen("in.in","r",stdin);
		freopen("out.out","w",stdout);
	#endif
	
	string s;

    while(cin>>s){

        vector<int>nums;
        int numNums[NNNN];
        int powers[NNNN];
        int realLength = 0;
		int i,j, k, tmp ,n = 0;
		char c;
		
		for(n = 0; scanf("%d%c", numNums[n], &c); n++)
    	{
    		
       		if(c == '\n')break;
       		int power =  numPower(numNums[n]);
			powers[n] = power;
       		printf ("nums = %d\n",numNums[n]);
			printf (" power = %d\n", powers[n]);
		}
		
		for (i=0; i<n; i++) {
            printf ("nums = %d\n",numNums[i]);
			printf (" power = %d\n", powers[i]);
        }
		
//		int temp ,temp2;
//		while (cin >> temp >> temp2) {
//			cout << "temp = " << temp << "temp2 = " << temp2   << "realLength = " << realLength << endl;
//			int power =  numPower(temp);
//			numNums[realLength] = temp;
//			powers[realLength] = power;
//			realLength ++ ;
//			
//		} 
//		//cout << "realLength = " << realLength << endl;
//		
//		 for (i=0; i<realLength; i++) {
//            printf ("nums = %d\n",numNums[i]);
//			printf (" power = %d\n", powers[i]);
//        }
//		//对0值排序 **
//		//对相同权重的排序 
//		//对权重排序	
//		for (i=0; i<realLength; i++) {
//			k = i;
//			for (j = i + 1; j < realLength; j++) {
//				if (numNums[j] < numNums[k])
//					k = j;
//					if (k != i) {
//						tmp = numNums[i];
//						numNums[i] = numNums[k];
//						numNums[k] = tmp;
//					}
//			}		
//        }
//        
       
     

//        // 打印数组
//		for (i=0; i<realLength; i++) {
//            printf ("nums = %d\n",numNums[i]);
//			printf (" power = %d\n", powers[i]);
//        }
//		
//		//求和 
//        
//        cout << "realLength " << realLength << "" << endl;
    }
	
	return 0;
}
