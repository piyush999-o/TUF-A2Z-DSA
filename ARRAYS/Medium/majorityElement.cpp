#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums) {
    int n= nums.size();
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    int maxi_size = 0;
    int maxi = 0;
    for (auto itrr : mpp)
    {
        // if (itrr.second>maxi_size && itrr.second>n/2)
        if (itrr.second>n/2)
        {
            return itrr.first;
        }
        
    }
    return -1;
}

// Moose Voting Algorithm
int majorityElement2(vector<int>& nums) {
    int n= nums.size();
    int cnt = 0;
    int elem;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            elem = nums[i];
        }
        if (nums[i] == elem)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    // Now checking element_size > n/2
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == elem)
        {
            cnt1++;
        }
    }
    if (cnt1 > n/2){
        return elem;
    }
    return -1;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {7,0,1,1,7,7,7,7,2};
    cout<<majorityElement2(v);

    return 0;
}