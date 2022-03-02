
#include<bits/stdc++.h>
using namespace std;
int isPalindrome(int n)
{
    // Find reverse of n
    int rev = 0;
    for (int i = n; i > 0; i /= 10)
        rev = rev*10 + i%10;

    // If n and rev are same, then n is palindrome
    return (n==rev);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,cnt=0;
        cin>>x>>y;
        if(x>y)
        {
            for(long long i=x; i<=y; i++)
        {
            if (isPalindrome(i))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        }
        else
        {
            for(long long i=y; i<=x; i++)
        {
            if (isPalindrome(i))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        }

    }
}

