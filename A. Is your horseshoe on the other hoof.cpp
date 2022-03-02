#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;


    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        if (i == j)
            res++;
    }
    return res;
}

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int n = 4;
    cout << 4-countDistinct(arr, n)<<endl;
    return 0;
}
