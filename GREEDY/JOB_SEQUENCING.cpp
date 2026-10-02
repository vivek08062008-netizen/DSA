#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"no of jobs"<<endl;
  cin>>n;
  cout<<"enter job id,deadline,profit"<<endl;
  vector<vector<int>> job_status(n, vector<int>(2));
  vector<vector<int>> job(n, vector<int>(3));
  int max_job=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>job[i][j];
      
    }
  }
  int count=0;
  int total_profit=0;
  for(int i=0;i<n;i++){
    job_status[i][0]=job[i][0];
    job_status[i][1]=1;
    max_job=max(max_job,job[i][1]);
  }
  for(int i=max_job;i>0;i--)
  {
    int idx=-1;
    for(int j=0;j<n;j++)
  {
    if(job[j][1]>=i && job_status[j][1]==1)
    {
      if(idx==-1 || job[j][2]>job[idx][2])
      {
        idx=j;
      }
    }
  }
  if(idx!=-1)
  {
    job_status[idx][1]=0;
   count++;
    total_profit+=job[idx][2];
  }

  }
  cout<<"total profit: "<<total_profit<<endl;
  cout<<"number of jobs selected: "<<count<<endl;

}