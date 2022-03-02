#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum=0;
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<sum/t<<endl;

}
