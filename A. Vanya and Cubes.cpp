#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,cnt,i;
    cin>>n;
    while (cnt <= n)
	{
		h++;
		cnt += (h*(h+1))/2;
	}
	cout<<h-1<<endl;
	return 0;



}
