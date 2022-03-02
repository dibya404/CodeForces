#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,j=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char arr[n];
        cin>>arr[i];
        if(arr[i]=='+')
        {
            j++;
        }
        else if(arr[i]=='-' && j>0)
        {
            j--;
        }
    }
    cout<<j<<endl;

}
