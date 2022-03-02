#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=2*n;
        int arr[m],temp[m];
        for(int i=0; i<m; i++)
        {
            cin>>arr[i];
        }
        for (int i=0; i<m; i++)
        {
            // Check if the picked element is already printed
            int j;
            for (j=0; j<i; j++)
                if (arr[i] == arr[j])
                    break;

            // If not printed earlier, then print it
            if (i == j)
                cout << arr[i] << " ";
        }
        cout<<endl;


    }
}
