#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        int maximum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            maximum=max(mp[a[i]],maximum);
        }
        if (n % 2 == 0)
        {
            if (maximum <= n / 2)
            {
                cout << 0 << "\n";
            }
            else
                cout << 2 * maximum - n << "\n";
        }
        else
        {
            if (maximum <= n / 2)
                cout << 1 << "\n";
            else
                cout << 2 * maximum - n << "\n";
        }
    }
    return 0;
}