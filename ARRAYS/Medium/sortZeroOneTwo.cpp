#include <bits/stdc++.h>

using namespace std;

void sortZeroOneTwo(vector<int>& nums) {
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = (n-1);

    while (mid<=high)
    {
        if (nums[mid] == 0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        
        else {
            swap(nums[mid], nums[high]);
            high--;
        }

        
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {0,1,2,0,1,2,0,1,2};
    for (auto itr : v)
    {
        cout<<itr<<" ";
    }
    cout<<"\n";
    
    sortZeroOneTwo(v);

    for (auto itr : v)
    {
        cout<<itr<<" ";
    }

    return 0;
}