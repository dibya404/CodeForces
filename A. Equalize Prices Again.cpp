#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
       cout << (sum + n - 1) / n << endl;

    }
}
