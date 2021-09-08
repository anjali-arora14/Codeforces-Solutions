#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    long long int r,c,x;
    long long R,C;
    cin>>r;
    cin>>c;
    cin>>x;
    if(x%r == 0)
    {
        C = x/r;
        R =r;
    }
    else{
        C = x/r+1;
        R = x%r;
    }
    long long res = c*(R-1) + C;
    cout<<res<<endl;

} 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
long long int t=1;
cin>>t;
while(t--)
{
    solution();
}
    return 0;
}