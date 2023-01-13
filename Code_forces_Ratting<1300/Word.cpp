#include<bits/stdc++.h>
 using namespace std;
int main () 
{
int k=0,b=0,i=0;
string s;
cin>>s;
int n=s.length();
for(int i=0;i<n;i++)
{
if(islower(s[i]))
k++;
else
b++;
}

if(b>k){
for(int i=0;i<n;i++)
s[i]=toupper(s[i]);
}
else if(b==k){
for(int i=0;i<n;i++)
s[i]=tolower(s[i]);
}
else
{
for(int i=0;i<n;i++)
s[i]=tolower(s[i]);
}
cout<<s; 
return 0;
}
