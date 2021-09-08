#include<iostream>
using namespace std;

int main()
{
    long long int n,k,h;
    long long int count =0,sum=0;
    cin>>n;
    cin>>h;
    cin>>k;
    long long int arr[n];
    for(long long int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(long long int i=0; i< n;i++)
    {
        if(sum + arr[i] > h )
        {
            count = count + sum/k;
            sum = sum % k;
            if(sum + arr[i] > h)
            {
                sum = arr[i];
                count++;

            }
            else
            {
                sum = sum + arr[i];
            }
        }
        else
        {
            sum = sum + arr[i];
        }

    }
    count += sum/k;
    if(sum % k > 0)
        count++;
    cout<<count<<endl;
    return 0;
}