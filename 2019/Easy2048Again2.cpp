#https://blog.csdn.net/u011561033/article/details/38868271

#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int dp[555][8300];
int main()
{
    int T,n,m,i,j;
    int a[555];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        memset(dp[0],-1,sizeof(dp[0]));
        dp[0][0]=0;
        for(i=1; i<=n; i++)
        {
            memset(dp[i],-1,sizeof(dp[i]));
            for(j=0; j<=8200; j+=2)
            {
                //���֮ǰ���״̬�ǲ��ܴﵽ����ô������
                if(dp[i-1][j]==-1)continue;
                //��������ǰ��һ�����ִ�
                if(((a[i]-1)&j)!=0) dp[i][a[i]]=max(dp[i][a[i]],dp[i-1][j]+a[i]);
                //����ǡ�ÿ�������ǰ��һ�����ֺϲ�
                else if((a[i]&j)!=0 )
                {
                    int tem = a[i];
                    int sum = tem ;
                    int xx=j;
                    while((tem&xx)!=0)
                    {
                        xx=xx-tem;
                        tem = tem<<1;
                        sum += tem ;
                    }
                    dp[i][xx|tem] = max (dp[i][xx|tem],dp[i-1][j]+sum);
                }
                else dp[i][j|a[i]]=max(dp[i][j|a[i]],dp[i-1][j]+a[i]);
            }
            for(j=0; j<8200; j+=2)
                dp[i][j]=max(dp[i][j],dp[i-1][j]);
        } 
        int ans =0;
        for(j=0; j<8200; j+=2)
            ans=max(ans,dp[n][j]);
        printf("%d\n",ans);
    }
    return 0;
}