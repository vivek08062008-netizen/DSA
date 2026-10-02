#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int cut_cost=1;
  int p[]={1,5,8,9,10,17,17,20,24,30};
  int s[n+1];
  s[0]=0;int y;
  s[1]=1;
  int dp[n+1];
  dp[0]=0;dp[1]=p[0];
  for(int i=2;i<=n;i++)
  {
    dp[i]=p[i-1];
    for(int j=1;j<=i/2;j++)
    { y=dp[i];
      dp[i]=max(dp[i],dp[j]+dp[i-j]-cut_cost);
       if(y!=dp[i])
       {
         s[i]=j;
       }
    }
    if(dp[i]==p[i-1])
    {
      s[i]=i;
    }
  }
  cout<<dp[n]<<endl;
  cout<<s[n]<<endl;
}