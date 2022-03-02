#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0,big=0;
    cin>>a>>b;
    if(a>b)
    {
        //big=a;
        while(a>0 && b>0)
    {
        a--;
        b--;
        cnt++;
        if(b==0)
        {
            //big=big-a;
            a=a/2;
            break;
        }
    }
    cout<<cnt<<" "<<a<<endl;
    }
    else
    {
        //big=b;
        while(a>0 && b>0)
    {
        a--;
        b--;
        cnt++;
        if(a==0)
        {
            //big=big-b;
            b=b/2;
            break;
        }
    }
    cout<<cnt<<" "<<b<<endl;
    }



}
