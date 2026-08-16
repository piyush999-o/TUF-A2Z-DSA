#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();

    int sum = 0;
    int maxi = INT_MIN;
    int start, end;
    
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        
        sum += nums[i];

        if (sum > maxi)
        {
            maxi = sum;
            end = i;
        }
        

        if (sum<0)
        {
            sum = 0;
        }
        
    }

    return maxi;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {-2, -3, -7, -2, -10, -4};
    cout<<maxSubArray(v);

    return 0;
}