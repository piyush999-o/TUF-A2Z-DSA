#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int mini = 0;
    int maxi = 0;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {0,1,2,4,5,6};
    cout<<missingNumber(v);

    return 0;
}