#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n], cnt = 0;
    double sum = 0, val = 0;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n, greater<int>());

    for(int i=0; i<n; i++)
    {
        val += arr[i];
        cnt++;

        if(val > sum/2)
        {
            break;
        }
    }

    cout<< cnt <<endl;

    return 0;
}
