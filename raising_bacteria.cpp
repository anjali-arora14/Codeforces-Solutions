#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int binary[32];
    int count = 0;
    int  i=0;
    while(n > 0)
    {
        binary[i] = n%2;
        n = n /2;
        i++;
    }
    for(int j = i-1; j>=0;j--)
    {
        if(binary[j] == 1)
        {
            count = count + 1;
        }
    }
    cout<<count;
    return 0;
}