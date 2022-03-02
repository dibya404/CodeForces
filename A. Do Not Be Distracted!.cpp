#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,temp=0;
    cin>>t;
    while(t--)
    {
        int cnt=0;
       cin>>n;
       string str;
       cin>>str;
       for(int i=0;i<n;i++)
       {
           if(str[i]!=str[i+1])
           {
               for(int j=i+1;j<n;j++)
               {
                   if(str[i]==str[j])
                   {
                       cnt++;
                   }
               }
           }
       }
       if(cnt>0)
       {
           cout<<"NO"<<endl;
       }
       else
        cout<<"YES"<<endl;

    }
}
