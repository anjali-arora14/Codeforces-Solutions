#include<iostream>
using namespace std;

int main()
{
    int n,x,count=0;
    cin>>n;
    cin>>x;
   
    for (int i = 1; i <= n; i++)
        if (x % i == 0 and x / i <= n) count++;
    cout<<count<<endl;
    return 0;
}