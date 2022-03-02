#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxcnt=0,maxval=0,minval=0,mincnt=0;
    cin>>n;
    int arr[n],temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxval)
        {
            maxcnt=i;
            maxval=arr[i];
        }
        if(arr[i]<=minval)
        {
            mincnt=i;
            minval=arr[i];
        }
    }
    if(maxcnt<maxcnt)
    {
        cout<<(maxcnt-1)+(n-mincnt)<<endl;
    }
    else
    {
        cout<<(maxcnt-1)+(n-mincnt)-1<<endl;
    }


        //cout<<cnt<<endl;

}
