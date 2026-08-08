#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& nums) {

    for (int i = 0; i <= (nums.size()-2); i++)
    {
        // cout<<*itr;
        int mini_itr = i;
        for (auto j = i; j <= (nums.size()-1); j++)
        {
            if (nums[j] < nums[mini_itr])
            {
                mini_itr = j;
            }
        }
        swap(nums[i], nums[mini_itr]);
        
    }
    return nums;
    

}

int main(){

    vector<int> v1;
    v1.push_back(12);
    v1.push_back(10);
    v1.push_back(18);
    v1.push_back(11);
    v1.push_back(9);
    v1.push_back(21);

    for (auto itr : v1)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    selectionSort(v1);
    for (auto itr : v1)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    

    return 0;
}