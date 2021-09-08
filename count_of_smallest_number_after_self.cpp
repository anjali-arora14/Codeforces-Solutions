#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
#define vv_iter vector<vector<int>> :: iterator
    void merge_count(vv_iter l, vv_iter r,vector<int>& count)
    {
        if(r-l <= 1) return;
        vv_iter m = l+(r-l)/2;
        merge_count(l,m,count);
        merge_count(m,r,count);
        vv_iter i =l;
        vv_iter j = m;

        for(i=l;i<m;i++)
        {
            while(j<r and ((*i)[0] > (*j)[0]))
            {
                j++;
            }
            count[(*i)[1]] += j - m;
        }
        std::inplace_merge(l,m,r);
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<vector<int>> temp;
        for(int i =0; i < nums.size(); i++)
        {
            temp.push_back(vector<int>({nums[i],i}));
        }
        vector<int> count (nums.size(),0);
        merge_count(temp.begin(),temp.end(),count);
        for(int i =0; i< count.size(); i++)
        {
            cout<<count[i]<<"\t";
        }
        return count;
    }
    int main()
    {
        vector<int> nums {5,2,6,1};
        countSmaller(nums);
        return 0;
    }