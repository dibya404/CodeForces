#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main() {
   char s[1000];
    int n,x,y=1,tmp=0;
    cin>>n;
    for (int i = 0;i<= n-1;i++)
    {
        s[i] = 'o';
    }
   x = y=1;

while(y <= n)
{
     s[y-1] = 'O';
    tmp = y;
    y = y + x;
    x = tmp;

}

 for (int i = 0;i<= n-1;i++)
    {
        cout<<s[i];
    }
    return 0;
}
