#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,arr[100];
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int cou=0;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];

            if(arr[i]==1 ||arr [i]==3)
            {
                cou++;
            }
        }
         cout<<cou<<endl;
    }



}
