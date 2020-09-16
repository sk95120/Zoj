/**
 * 2020 autumn Mi.inc school recruit,
 * QinXinxin schoolmate wanted Test develop position.
 * 
 * Q: give: MxN char array, L length string
 *    get : horizontal and vertical match.
 *
 * created by sk95120
 * **/

#include<stdio.h>
#include<string.h>
 
int strfind(char **str,char key[])
{

	int markI ,markJ ,markLen;
	int i,j;
	int flag;
	int length=sizeof(str[0])/(sizeof(str[0][0]));
	int width=sizeof(str)/(sizeof(str[0]));

 	for(j = 0 ;j < length; j++ )
	{
		if (markJ >= j) {
			return (flag == 1);
		}
		flag = 0;
		markLen = 0;
		for (i = 0 ; i < width ; i++) {
			if (str[i][markJ] == key[markLen]) {
				if (markLen >= strlen(key)) {
					return 1;
				}
				if (markLen != 0) {
					if (!( i == markI + 1 || i == markI -1 || j == markJ + 1 || j == markJ -1)) {
						break;
					}
				}
				markLen ++;
				markI = i;
				markJ = j;
			}
		}
	}
	return 0;
}

int main()
{

	char str[3][4]={{'A' ,'B' ,'C'},{'B' ,'A','C'},{'C' ,'B' ,'A'}};
	char key[]="AB";

	int kk=strfind((char **)str,key);
	if(kk)
		printf("查找成功！！！！！！");
	else
		printf("查找失败！！！！！！");

}
