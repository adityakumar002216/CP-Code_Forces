#include<bits/stdc++.h>
 using namespace std;
int main () 
{
string s,sr;
  cin>>s;
  for(int i=0;i<s.length();i++){
   if(s[i]=='-')
   {
     if(s[i+1]=='.'){
      sr+='1';
       i++;
     continue;
  }
  if(s[i+1]=='-'){
  sr+='2';
  i++;
  continue;
  }

  }
 if(s[i]=='.'){
  sr+='0';
 
 }
  }
cout<<sr;
  
return 0;
}
