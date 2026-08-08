#include <bits/stdc++.h>
using namespace std;

// vector that contains vector<int> as each elements
vector<vector<int>> countFrequencies(vector<int>& nums, int n=0) {
    // Creating map to store values
    map<int, int> mpp; 
    
    // creating vector to return, that contains vector<int> as elements
    vector<vector<int>> result;

    // Running loop to assign values to map
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    
    // Running Iteretor loop on mpp, to get its KEY and VALUES
    for (auto itrr : mpp)
    {
        result.push_back({itrr.first, itrr.second});
    }
    
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