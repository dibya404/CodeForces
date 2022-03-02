#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],sum=0;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            sum=sum+arr[0];
        }
        else if(s[i]=='2')
        {
            sum=sum+arr[1];
        }
        else if(s[i]=='3')
        {
            sum=sum+arr[2];
        }
        else
            sum=sum+arr[3];

    }
    cout<<sum<<endl;
}
