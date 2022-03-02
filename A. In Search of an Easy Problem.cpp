#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[100],flag = 0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>arr[i];
          if(arr[i]==1)
        {

            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout<<"Hard"<<endl;
    }
    else
    {
        cout<<"Easy"<<endl;
    }
}
