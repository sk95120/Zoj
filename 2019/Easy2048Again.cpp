//https://zoj.pintia.cn/problem-sets/91827364500/problems/91827369832
//https://www.cnblogs.com/oneshot/p/4065859.html

#include <iostream>
#include <stdio.h>
#include<string.h>
#include<algorithm>
#include<string>
#include<ctype.h>
using namespace std;
#define MAXN 10000
int dp[2][8200];
int a[505];
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("in.txt","r",stdin);
    #endif
    int T,n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",a+i);
        }
        memset(dp,-1,sizeof(dp));
        dp[1][0]=0;
        dp[1][a[1]]=a[1];
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<=8191;j++)
            {
                if(dp[(i-1)%2][j]==-1)
                {
                    continue;
                }
                dp[i%2][j]=max(dp[i%2][j],dp[(i-1)%2][j]);           //不取
                if(j&(a[i]-1))
                {
                    dp[i%2][a[i]]=max(dp[i%2][a[i]],dp[(i-1)%2][j]+a[i]);     //情况1
                    continue;    
                }
                int state,score;
                if(j&a[i])
                {
                    int tmp=j/a[i],k=0;
                    score=a[i];
                    while(tmp%2)
                    {
                        k++;
                        tmp/=2;
                        score+=a[i]<<k;
                    }
                    state=((tmp<<k)*a[i])|(a[i]<<k);
                    dp[i%2][state]=max(dp[i%2][state],dp[(i-1)%2][j]+score);  //情况2
                    continue;
                }
                state=j|a[i];
                score=a[i];
                dp[i%2][state]=max(dp[i%2][state],dp[(i-1)%2][j]+score);      //情况3
            }
        }
        int ans=-1;
        for(int i=0;i<8192;i++)
        {
            ans=max(ans,dp[n%2][i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
