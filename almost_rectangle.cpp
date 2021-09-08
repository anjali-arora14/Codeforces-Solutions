#include<iostream>
using namespace std;
int main()
{
    int t,n,ind=0;
    cin>>t;
    
    int cell[4];
    
    for(int i=0; i<t;i++)
    {
        ind = 0;
        cin>>n;
        char arr[n][n];
        for(int j =0; j<n;j++)
        {
            for(int k=0; k<n;k++)
            {
                cin>>arr[j][k];
                if(arr[j][k] == '*')
                {
                    cell[ind++] = j;
                    cell[ind++] = k;
                }
            }
        }
    
        if(cell[0] == cell[2])
        {
            if(cell[0] != n-1)
            {
                arr[n-1][cell[1]] = '*';
                arr[n-1][cell[3]] = '*';
            }
            else{
                arr[0][cell[1]] = '*';
                arr[0][cell[3]] = '*';
            }
        }
        else if(cell[1] == cell[3] )
        {
            if(cell[1] != n-1)
            {
                arr[cell[0]][n-1] = '*';
                arr[cell[2]][n-1] = '*';
            }
            else{
                 arr[cell[0]][0] = '*';
                 arr[cell[2]][0] = '*';
            }
        }
        else
        {
            arr[cell[0]][cell[3]] = '*';
            arr[cell[2]][cell[1]] = '*';
        }
        for(int j =0; j<n;j++)
        {
            for(int k=0; k<n;k++)
            {
                cout<<arr[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}