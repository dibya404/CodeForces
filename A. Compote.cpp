#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, cnt = 0;
    cin>>a>>b>>c;

    while(a>=1 && b>=2 && c>=4)
    {
        a -= 1;
        b -= 2;
        c -= 4;
        cnt++;
    }

    cout<< cnt * 7 <<endl;

    return 0;
}
