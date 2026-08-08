#include <bits/stdc++.h>

using namespace std;

vector<int> insertionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j>0 && nums[j]<nums[j-1])
        {
            int temp = nums[j];
            nums[j] = nums[j-1];
            nums[j-1] = temp;
            j--;
        }
        
    }

    return nums;
    
}

int main(){
    vector<int> v1;
    v1.push_back(12);
    v1.push_back(10);
    v1.push_back(9);
    v1.push_back(21);
    v1.push_back(20);
    v1.push_back(22);

    for(auto itrr : v1){
        cout<<itrr<<" ";
    }
    cout<<endl;

    insertionSort(v1);
    
    return 0;
}