#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a=0,b=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
        if(arr[i]==100)
        {
            a++;
        }
        else
            b++;
    }
    if(((a%2==0)&& a>0) || ((a==0)&&(b%2)==0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
