#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0,one=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char arr[n];
        cin>>arr[i];
        if(arr[i]=='z')
        {
            zero++;
        }
        else if (arr[i]=='n')
        {
            one++;
        }
    }
    for(int i = 0;i<one;i++)
    {
        cout<<1<<" ";
    }
    for(int i=0;i<zero;i++)
    {
        cout<<0<<" ";
    }
    cout<<endl;
}
