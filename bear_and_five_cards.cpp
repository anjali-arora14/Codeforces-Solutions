#include<iostream>
using namespace std;
int arr[101];
int main()
{
    int n,sum=0;
    for(int i=0; i<5;i++)
    {
        cin>>n;
        arr[n]++;
        sum += n;
    }
    int temp_sum = sum,min_sum=sum;
    for(int i=100; i>= 1; i--)
    {
        if(arr[i] >= 3)
        {
            temp_sum = sum - (3 *i);
            min_sum = min(min_sum,temp_sum);
        }
        else if(arr[i] == 2)
        {
            temp_sum = sum - (2*i);
            min_sum = min(min_sum,temp_sum);

        }
        
    }
    sum = min_sum;
    cout<<sum<<endl;
    return 0;
}