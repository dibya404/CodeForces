#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,left=0,right=0;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {

        if(arr[i]>d)
        {
            break;
        }
         left++;
    }
    for(int i=n-1;i>=0;i--)
    {

        if(arr[i]>d)
        {
            break;
        }
        right++;
        //cout<<left<<endl;
    }
    if(n==left)
    {
        cout<<n<<endl;
    }
    else
    {
         cout<<left+right<<endl;
}
    }

