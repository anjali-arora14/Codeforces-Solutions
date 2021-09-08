#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    int n;
    double d;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int max_dis = 0;
    for(int i=0; i<n-1;i++)
    {
        if(arr[i+1] - arr[i] > max_dis)
            max_dis = arr[i+1] - arr[i];
    }
    double temp = max((arr[0]-0),(l-arr[n-1]));
    d = max((double)max_dis/2,temp);
    cout<<fixed<<setprecision(10)<<d<<endl;
    return 0;
}