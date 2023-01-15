#include<bits/stdc++.h>
 using namespace std;
int main () 
{
    system("cls");
     int n,t;
     cin>>n;
     while(n)
     {
        n=n+1;
       int  i=0;
     int p=n;
     int k=0;
     int o=n;
     int arr[4];
         while(p)
         {
          arr[i++]=p%10;
          p=p/10;
         }
         for(int i=0;i<4;i++){
         for(int j=i+1;j<4;j++){
          if(arr[i]==arr[j])
           k++;
           }
        }
         

          if(k==0){
          cout<<o;
           break;
          }
   

        }
return 0;
}
