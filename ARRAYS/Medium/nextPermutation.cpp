#include <bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int index = -1;

    // Find first decreasing element from end
    for (int i = n-2; i >= 0; i--)
    {
        if (nums[i]<nums[i+1])
        {
            index = i;
            break;
        }
        
    }

    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    
    for (int i = n-1; i > index; i--)
    {
        if (nums[i]>nums[index])
        {
            swap(nums[i], nums[index]);
            break;
        }
        
    }
    reverse(nums.begin() + index + 1, nums.end());
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2,2,5,2,5,4,8,5};
    nextPermutation(v);
    for (auto itrr : v)
    {
        cout<<itrr<<" ";
    }
    

    return 0;
}