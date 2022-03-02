#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0,o=0;
        cin>>n;
        int x=2*n;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                e++;
            else
                o++;
        }
        if(e==o)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}
