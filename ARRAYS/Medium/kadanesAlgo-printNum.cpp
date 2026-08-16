#include <bits/stdc++.h>

using namespace std;

vector<int> maxSubArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> resultv;

    int sum = 0;
    int maxi = INT_MIN;
    int start, ansstart, ansend;
    
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
            ansstart = start;
            ansend = i;
        }
        

        if (sum<0)
        {
            sum = 0;
        }
        
    }
    // cout<<ansstart<<" "<<ansend;
    for (int j = ansstart; j <= ansend; j++)
    {
        resultv.push_back(nums[j]);
    }
    
    return resultv;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2, 3, 5, -2, 7, -4};
    vector<int> max_sub_array = maxSubArray(v);
    // cout<<max_sub_array.size();
    for (int i = 0; i < max_sub_array.size(); i++)
    {
        cout<<max_sub_array[i]<<" ";
    }
    
    

    return 0;
}