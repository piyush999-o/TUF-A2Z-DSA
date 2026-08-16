#include <bits/stdc++.h>

using namespace std;


int removeDuplicates(vector<int>& nums) {
    set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    int ind = 0;
    for (auto itrr : st)
    {
        nums[ind] = itrr;
        ind++;
    }
    
    
    return ind;
    
}

int removeDuplicates2(vector<int>& nums) {
    
    int i = 0; // first element of each duplicate element
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
        
    }
    return i+1;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 1, 2, 2, 2, 3, 3};

    for(auto itr : v){
        cout<<itr<<" ";
    }
    cout<<"\n";

    cout<<removeDuplicates2(v);

    // for(auto itr : v){
    //     cout<<itr<<" ";
    // }

    return 0;
}