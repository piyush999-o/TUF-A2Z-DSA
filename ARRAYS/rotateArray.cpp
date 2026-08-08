#include <bits/stdc++.h>

using namespace std;

void rotateArray(vector<int>& nums, int k) {
    for (int i = 0; i < k; i++)
    {
        int temp = nums[nums.size()-1];
        for (int j = nums.size()-1; j >= 1; j--)
        {
            nums[j] = nums[j-1];
        }
        nums[0] = temp;
        
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"\n";
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> v = {1, 2, 3, 4, 5, 6};
    rotateArray(v, 2);

    return 0;
}