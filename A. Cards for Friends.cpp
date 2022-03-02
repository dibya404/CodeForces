#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n,cnt=1;
        cin>>w>>h>>n;
        if(w%2==0 && h%2 !=0)
        {
            while(w%2==0)
            {
                w=w/2;
                cnt=cnt*2;
            }
        }
        else if(w%2!=0 && h%2 ==0)
        {
            while(h%2==0)
            {
                h=h/2;
                cnt=cnt*2;
            }
        }
        else
        {
            while(w%2==0)
            {
                w=w/2;
                cnt*=2;
            }
             while(h%2==0)
            {
                h=h/2;
                cnt*=2;
            }
        }
        if(n==1)
        {
            cout<<"Yes"<<endl;
        }
        else if(cnt>=n)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
