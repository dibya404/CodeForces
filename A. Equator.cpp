#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double sum=0,com=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sum=(sum/2);
    for(int i=0;i<t;i++)
    {
         com=com+arr[i];
        if(com>=sum)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
