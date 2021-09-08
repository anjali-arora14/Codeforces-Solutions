#include<bits/stdc++.h>
using namespace std;

void solution(int i, int j, int depth, int arr[],int res[])
{
    if(i > j) return;
    int ind;
    int val = INT_MIN;
    for(int k=i; k<=j;k++)
    {
        if(arr[k] > val)
        {
            val = arr[k];
            ind = k;
        }
    }
    res[ind] = depth;
    solution(i,ind-1,depth+1,arr,res);
    solution(ind+1,j,depth+1,arr,res);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int res[n];
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        solution(0,n-1,0,arr,res);
        for(int i=0; i<n; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}