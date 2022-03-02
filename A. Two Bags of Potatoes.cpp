#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int f=0;
ll y,k,n,v;

int main()
{
    scanf("%lld%lld%lld",&y,&k,&n);
    v=n/k;
    for(int i=1;i<=v;i++){
        ll x=i*k-y;
        if(x>0){
            printf("%lld ",x);
            f=1;
        }
    }
    if(f==0){
        printf("-1");
    }
    printf("\n");
    return 0;
}
