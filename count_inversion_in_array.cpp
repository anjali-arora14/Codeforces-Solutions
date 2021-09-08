#include<iostream>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right)
{
    int i = left;
    int j =mid;
    int k = left;
    int inv_count =0;
    while((i<= mid-1) && (j <= right))
    {
        if(arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + mid-i;
        }
        while(i <= mid-1)
        {
            temp[k++] = arr[i++];
        }
        while(j <= right)
        {
            temp[k++] = arr[j++];
        }
        return inv_count;
    }
}
int merge_sort(int arr[],int temp[],int left, int right)
{
    int mid,inv_count = 0;
    if(right > left)
    {
        mid = (right + left)/2;
        inv_count += merge_sort(arr,temp,left,mid);
        inv_count += merge_sort(arr,temp,mid+1,right);
        inv_count += merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}   
int main()
{
    int arr[] = {5,3,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int ans = merge_sort(arr,temp,0,n-1);
    cout<<"Number of inversions are:"<<ans;
    return 0;
}