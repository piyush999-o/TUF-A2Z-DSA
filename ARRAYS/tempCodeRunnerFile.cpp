& nums1, vector<int>& nums2) {
    set<int, int> st;
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