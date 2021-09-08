#include<iostream>
using namespace std;

int main()
{
    int q;
    long long int n;
    int count =0;
    cin>>q;
    for(int i =0; i< q; i++)
    {
        count =0;
        cin>>n;
        if(n == 1)
        cout<<count<<"\n";
        else
        {
            while(n != 1)
            {
                if(n%2 == 0)
                {
                    n = n/2;
                    count++;
                }
                else if(n%3 == 0)
                {
                    n = (2*n)/3;
                    count++;
                }
                else if(n%5 == 0)
                {
                    n = (4*n)/5;
                    count++;
                }
                else{
                    count = -1;
                    break;
                }    
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}