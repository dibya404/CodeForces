#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,flag=0,cnt =0;
    cin>>n;
    while(n>0)
    {

        sum=n%10;
        n=n/10;
        if(sum == 4 || sum ==7)
        {

             cnt++;
        }
    }
    if(cnt == 4 || cnt ==7)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;



}
