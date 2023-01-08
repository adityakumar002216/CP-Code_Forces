//Question link https://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
 using namespace std;
int main () 
{
  long long int n ,x,t=0;
  system("cls");
   cin>>n;
  while(n)
  {
    x=n%10;
    if( x == 4 || x== 7 )
    t++;
    n=n/10;
  }

   if(t==4 || t==7)
  cout<<"YES";
  else
  cout<<"NO";
  return 0;
}
