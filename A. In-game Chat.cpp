

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,temp=0;
    char c[1000];
    cin>>n;
    while(n--)
    {
        cin>>t;
        for(int i=1;i<=t;i++)
        {
            cin>>c[i];
        }

        for(int i=t;i>=1;i--)
        {

           if(c[i]!=')')
           {
               //cout<<"K"<<endl;
                break;

           }
           else
           {
               //cout<<"L"<<endl;
               temp++;
           }

        }
         if(temp>(t-temp))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        temp=0;


    }
}
