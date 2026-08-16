#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    map<int, int> mpp;
    for (int i = 0; i <= n; i++)
    {
        mpp[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second == 0)
        {
            return it.first;
        }
    }
    
    
}

int missingNumber2(vector<int>& nums) {
    long long n = nums.size();
    long long realSum = (n*(n+1))/2;
    long long arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        arrSum += nums[i];
    }
    return realSum - arrSum;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {0,1,2,4,5};
    cout<<missingNumber2(v);

    return 0;
}