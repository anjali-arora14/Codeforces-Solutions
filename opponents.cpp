#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,d;
    int flag=0;
    long long int ans=0,curr=0;
    cin>>n;
    cin>>d;
    int arr[d];
    string str;
    for(int i=0; i< d;i++)
    {
        flag=0;
        cin>>str;
        for(int j=0;j<n;j++)
        {
            if(str[j] == '0')
                flag=1;
        }
        if(flag == 1)
            arr[i] = 1;
        else 
            arr[i] =0;
    }
    for(int i=0; i< d; i++)
    {
        if(arr[i] == 1)
            curr++;
        else
        {
            ans = max(ans,curr);
            curr=0;
        }
        ans = max(ans,curr);
    }
    cout<<ans;
    return 0;
}