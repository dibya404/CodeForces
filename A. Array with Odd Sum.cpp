#include <bits/stdc++.h>

using namespace std;
/*
int testcase,a[2005],n,odd_cnt,left_cnt,m;

int main()
{
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++){
        scanf("%d",&n);
        odd_cnt=0,left_cnt=0;
        for(int j=1;j<=n;j++){
            scanf("%d",&m);
            if(m%2==1){
                odd_cnt++;
            }
        }
        left_cnt = n-odd_cnt;
        if(odd_cnt%2==1){
            printf("YES\n");
        }
        else if(odd_cnt%2==0 and left_cnt>0 and odd_cnt>0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,sum=0;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int odd=0,cnt=0,flag=0;
        if(sum%2==0)
        {
            for(int i=0;i<a;i++)
            {
                if(arr[i]%2!=0)
                {
                    odd++;
                }
                else
                    cnt++;
                if(cnt >= 1 && odd>=1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }
}
