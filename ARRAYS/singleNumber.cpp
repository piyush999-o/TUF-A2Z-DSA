#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums){
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    for (auto itrr : mpp)
    {
        if (itrr.second == 1)
        {
            return itrr.first;
        }
        
    }
    
    return -1;
}

int singleNumber2(vector<int>& nums){
    int xor1 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        xor1 = xor1^nums[i];
    }
    
    return xor1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1,2,2,4,3,1,4};
    cout<<singleNumber2(v);

    return 0;
}