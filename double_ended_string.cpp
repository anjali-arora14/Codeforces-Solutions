#include <iostream>
#include <string>
#include <cstring>
using namespace std;
 
string LCS(string a, string b, int m, int n)
{
    int maxlen = 0;         
    int end_index = m;   
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));
 
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
 
                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    end_index = i;
                }
            }
        }
    }
    return a.substr(end_index - maxlen, maxlen);
}
 
int main()
{
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        string a,b;
        cin>>a;
        cin>>b;
        int m = a.size(); 
        int n = b.size();
        string sub_str=LCS(a, b, m, n);
        int res = sub_str.size();
        res =(m-res)+(n-res);
        cout<<res<<"\n";
    }
    return 0;
}