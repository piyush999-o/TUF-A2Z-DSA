#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> positiveArr;
    vector<int> negativeArr;
    vector<int> resultArr;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]<0)
        {
            negativeArr.push_back(nums[i]);
        }
        else{
            positiveArr.push_back(nums[i]);
        }
    }
    int cnt = 0;
    int left = 0;
    int right = 0;
    while (left<positiveArr.size() || right<negativeArr.size())
    {
        if (cnt%2 == 0)
        {
            resultArr.push_back(positiveArr[left]);
            left++;
            cnt++;
        }
        else{
            resultArr.push_back(negativeArr[right]);
            right++;
            cnt++;
        }
        
    }
    return resultArr;
    
}

vector<int> rearrangeArray2(vector<int>& nums) {
    int n = nums.size();
    vector<int> positiveArr;
    vector<int> negativeArr;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]<0)
        {
            negativeArr.push_back(nums[i]);
        }
        else{
            positiveArr.push_back(nums[i]);
        }
    }
    
    for (int i = 0; i < n/2; i++)
    {
        nums[2*i] = positiveArr[i];
        nums[2*i+1] = negativeArr[i];
    }
    
    return nums;
    
}

vector<int> rearrangeArray3(vector<int>& nums) {
    int n = nums.size();
    int oddPtr = 0; // Positive Pointer
    int evenPtr = 1; // Negative Pointer
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        if (nums[i]>0)
        {
            res[oddPtr] = nums[i];
            oddPtr += 2;
        }
        else{
            res[evenPtr] = nums[i];
            evenPtr += 2;
        }
        
    }
    return res;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2,4,5,-1,-3,-4};
    vector<int> r_v = rearrangeArray3(v);
    for (int i = 0; i < r_v.size(); i++)
    {
        cout<<r_v[i]<<" ";
    }
    

    return 0;
}