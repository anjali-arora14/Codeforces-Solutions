#include<iostream>
using namespace std;

int main()
{
    int n,q;
    string s;
    cin>>n;
    int arr[n+1];
    cin>>q;
    cin>>s;
    arr[0] = 0;
    for(int i=1; i<n+1; i++)
    {
        arr[i] = arr[i-1] + ((s[i-1]- 'a') + 1);
    }
    for(int i=0; i<q;i++)
    {
        int l,r;
        cin>>l;
        cin>>r;
        cout<<arr[r] - arr[l-1]<<endl;
    }
    return 0;
}