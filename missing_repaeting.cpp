#include<iostream>
using namespace std;

void getNumbers(int arr[],int n)
{
    int xor1;
    for(int i = 0; i < n; i++)
        xor1 = xor1 ^ arr[i];
    for(int i =1; i<=n; i++)
        xor1 = xor1 ^ i;
    
}
int main()
{
    int arr[] = {4,3,6,2,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
}