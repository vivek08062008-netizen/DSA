#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  int A[n];

  for( int i=0;i<n;i++){
    cin>>A[i];
  }
  int x=A[1];int y=A[0];
  int res[n];
  res[0]=A[0];
  for(int i=1;i<n;i++)
  {
    if(i>2)
    {
      x=res[i-2]+A[i];
      y=res[i-1];
    }
    res[i]=x>y?x:y;

  }
  cout<<res[n-1]<<endl;
  return 0;

}