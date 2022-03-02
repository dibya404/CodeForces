#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string a, b;
    cin>>a>>b;

    int res = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            res += min( ( abs(a[i] - b[i]) ) ,  (10-a[i]+b[i]) );
        }
        else if(b[i]>a[i])
        {
            res += min( ( abs(a[i] - b[i]) ) ,  (10-b[i]+a[i]) );
        }
        else
        {
            res += 0;
        }
    }

    cout << res << endl;

    return 0;
}
