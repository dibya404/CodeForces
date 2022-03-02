#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0,x;
    cin>>n>>m;
    for(int i=n+1;i<50;i++)
    {
        if(i%2==0)
        {

        }
        else if((i!=3 && i%3==0)||(i!=5 && i%5==0)||(i!=7 && i%7==0))
        {

        }
        else
        {
             x=i;

            break;
        }
    }

        if(x==m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

}
