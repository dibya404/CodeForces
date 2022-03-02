#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,p,f,h,c,p1=0,f1=0;
    cin>>b>>p>>f;
    cin>>h>>c;
    if(h>=c && b>1)
    {
        for(int i=0;i<p;i++)
        {
            b=b-2;
            p1++;
            if(b<=1)
                break;
        }
        while(b>1)
        {
            b=b-2;
            f1++;
            f--;
            if(f==0)
                break;
        }
       // cout<<p1<<f1<<endl;
        cout<<p1*h+f1*c<<endl;
    }
    else if(c>h && b>1)
    {
         for(int i=0;i<f;i++)
        {
            b=b-2;
            f1++;
            if(b<=1)
                break;
        }
        while(b>1)
        {
            b=b-2;
            p1++;
            p--;
            if(p==0)
                break;
        }
       // cout<<p1<<f1<<endl;
        cout<<p1*h+f1*c<<endl;;
    }
    else
        cout<<0<<endl;
    }



}
