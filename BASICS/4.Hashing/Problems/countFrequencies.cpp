#include <bits/stdc++.h>
using namespace std;

// vector that contains vector<int> as each elements
vector<vector<int>> countFrequencies(vector<int>& nums, int n=0) {
    map<int, int> mpp;
    vector<vector<int>> result;
    n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    for (auto itr : mpp)
    {
        // element added in result must be vector<int>
        result.push_back({itr.first, itr.second});
    }
    return result;
}


int main(){

    vector<int> v1 = {1, 2, 3, 2 ,3 ,2 ,1};
    // countFrequencies(v1);
    for (auto itr1 : v1)
    {
        cout<<itr1<< endl;
    }
    


    return 0;
}