/**
 * 
 * 	 0 ，0 ，1 ， 1，0，0，0，0，1，0，1
 * 	停车场里停车，请问如何距离其他车的距离最大
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

// #define L

using namespace std;

int main(){
	
	#ifdef L
		freopen("in.in","r",stdin);
		freopen("out.out","w",stdout);
	#endif
	
	string s;

    while(cin>>s){

        vector<int>nums;

        char *str = (char *)s.c_str();
        const char *split = ",";
        char *p = strtok (str,split);//¶ººÅ·Ö¸ôÒÀ´ÎÈ¡³ö

        int a;
        while(p != NULL) {
            sscanf(p, "%d", &a);//char ---> int
            nums.push_back(a);
            p = strtok(NULL,split);
        }

		int maxStrip = 1;
		int tempStrip = 1;
		int leftStrip = 0;
		int rightStrip = 0;
		int numsLength = 1;
		
        //printf
        int i=0;
        for (i=0; i<nums.size(); i++) {
            // printf ("%d\n",nums[i]);
            if (nums[i] == 1) {
            	tempStrip = 1;
            	continue;
			} else if (nums[i] == 0) {// Ã»ÓÐ³µ,¿É½øÀ´ 
				tempStrip ++ ;
				if (tempStrip > maxStrip) {
					maxStrip = tempStrip;
				}
			}
        }
        numsLength = nums.size();
        maxStrip /= 2;
        
        //×î×ó±ß 
        for (i=0; i<nums.size(); i++) {
            if (nums[0] == 0) {
            	if (nums[i] == 0) {
            		leftStrip ++;
            	} else {
					break;
				}
			}
        }        
        leftStrip --;
        //cout << "left = " << leftStrip  << endl;
        
        //×îÓÒ±ß 
        
//        cout << "i=" << i << endl;
//        
//        
//        cout << "numsLength=" << numsLength << endl;
//        for (i=numsLength; i >= 0; i--) {
//            if (nums[numsLength] == 0) {
//            	if (nums[i] == 0) {
//            		rightStrip ++;
//            	} else {
//					break;
//				}
//			}
//        }        
//        rightStrip --;
//        cout << "right = " << rightStrip  << endl;
         
		if (maxStrip < leftStrip) {
			maxStrip = leftStrip;
		}
        cout << maxStrip <<endl;
    }
	
	return 0;
}
