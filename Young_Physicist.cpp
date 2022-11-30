#include<iostream>
using namespace std;
int main()
{ 
 int n,k=0,l=0,m=0,x,y,z;
 cin>>n;
 
 for(int i=0;i<n;i++)
 {
 cin>>x>>y>>z;
 k=x+k; 
 l=y+l;
 
 m=z+m;
 
 }
 
 
 if ( k==0 && l==0 && m==0)
 cout<<"YES";
 else
 cout<<"NO";
return 0;
}
