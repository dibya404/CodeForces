#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,sum=0,flag=0;
   cin>>n;
   if(n%4==0 || n%7 == 0 || n%47==0||n%74==0||n%447==0||n%444==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       while(n!=0)
       {
           sum=n%10;
           n=n/10;
           if(sum!=4 && sum!=7)
           {
               flag++;
           }
       }
       if(flag>0)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
   }
}
