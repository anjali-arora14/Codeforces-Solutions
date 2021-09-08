#include<iostream>
using namespace std;
int main()
{
    int t,n;
    int num1,num2;
    int cnt1,cnt2;
    cin>>t;
    for(int i=0; i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        num1 = 0;
        num2 = 0;
        cnt1 = 1; cnt2 =0;
        for(int j=1; j < n;j++)
        {
            if(arr[j] != arr[num1])
            {
                num2 = j;
                cnt2++;

            }
            else if(arr[j] == arr[num1])
                cnt1++;
            else if(arr[j] == arr[num2])
                cnt2++;
        }
        if(cnt1 > cnt2)
            cout<<num2+1<<endl;
        else
            cout<<num1+1<<endl;
    }
    return 0;
}