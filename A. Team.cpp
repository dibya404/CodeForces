#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[3],cnt=0,flag=0;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                cnt++;
            }
        }
        if(cnt>=2)
        {
            flag++;
        }
        cnt=0;
    }
    cout<<flag<<endl;
}
