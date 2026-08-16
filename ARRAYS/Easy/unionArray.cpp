#include <bits/stdc++.h>

using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    map<int, int> mpp;
    vector<int> finalArr;
    for (int i = 0; i < nums1.size(); i++)
    {
        mpp[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        mpp[nums2[i]]++;
    }
    for (auto itrr : mpp)
    {
        finalArr.push_back(itrr.first);
    }
    return finalArr;
    
}

vector<int> unionArray2(vector<int>& nums1, vector<int>& nums2) {
    set<int> st;
    for (int i = 0; i < nums1.size(); i++)
    {
        st.insert(nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        st.insert(nums2[i]);
    }
    vector<int> finalArr(st.begin(), st.end());
    return finalArr;
    
}

vector<int> unionArray3(vector<int>& nums1, vector<int>& nums2) {
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,7};
    vector<int> arr = unionArray(v1, v2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}