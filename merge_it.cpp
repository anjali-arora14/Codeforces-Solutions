#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        cin>>n;
        int rem_one=0,rem_two=0,rem_three=0;
        int a[n+3];
        int j;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
            if(a[j]%3==0)
                rem_three++;
            else if(a[j]%3==1)
                rem_one++;
            else
                rem_two++;
        }
        int x,y,x1,y1,minimum;
        minimum=min(rem_one,rem_two);
        x=rem_one-minimum;
        y=rem_two-minimum;
        x1=x/3;
        y1=y/3;
        cout<<rem_three+minimum+x1+y1<<endl;
    }
}