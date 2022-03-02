#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y;
    cin>>x;
    int arr[100000];
    set <int> s;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);

    }
    cin>>y;
    int arr1[y],j=0,sum=0;
    for(int i=0;i<y;i++)
    {
        cin>>arr1[i];
        s.insert(arr1[i]);

            }
    if(s.size()==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;


}
