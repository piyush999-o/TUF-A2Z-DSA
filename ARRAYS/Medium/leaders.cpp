#include <bits/stdc++.h>

using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    int maxi = nums[n-1];

    res.push_back(nums[n-1]);
    for (int i = n-2; i >= 0; i--)
    {
        maxi = max(maxi, nums[i]);
        if (nums[i]>nums[i+1] && nums[i]>=maxi)
        {
            res.push_back(nums[i]);
        }
        
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {-3, 4, 5, 1, -4, -5};
    vector<int> ld = leaders(v);
    for (int i = 0; i < ld.size(); i++)
    {
        cout<<ld[i]<<" ";
    }
    

    return 0;
}