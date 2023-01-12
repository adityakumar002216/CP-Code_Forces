#include<bits/stdc++.h>
 using namespace std;
int main () 
{
int a,b,t,k;
cin>>a>>b;
for(int i=a+1;i<=2*b;i++)
 { k=0;
    t=i;
  for(int j=2;j<=i/2;j++)
    if(t%j==0)
      k++;
     if(k==0)
   { 
    if(b<t){
    cout<<"NO";
    break;
    }
    if(t==b)
    cout<<"YES";
    else
    cout<<"NO";
     break;
   }
   
  }
return 0;
}
