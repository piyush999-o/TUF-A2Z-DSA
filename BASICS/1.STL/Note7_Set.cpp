#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> st;
    /*
    Set is list of:
        Sorted
        Unique(so no repitition)
    */
    st.emplace(3);
    st.insert(9);
    st.insert(7);
    st.emplace(8);
    st.insert(7);
    st.insert(10);

    /*
        begin(), end(), rbegin(), rend(), size(), swap() and empty() are same as vector
    */

    // set<int>::iterator it = st.find(8);
    auto it = st.find(9);
    
    auto it2 = st.find(11); // '11' not available so iterator points/behave_as to st.end()
 
    st.erase(7); // For only one element

    auto itr = st.find(9);
    st.erase(itr);

    int cnt = st.count(9); // return 1 or 0, for availablity of element
    // cout<<cnt;

    st.insert(7);
    st.insert(9);
    
    for(auto itrr = st.begin(); itrr != st.end(); itrr++){
        cout<<*itrr<<" ";
    }
    cout<<endl;
    
    st.erase(st.find(7), st.find(9)); // Format: [start, end) <-- Intervals, Same as vectors
    
    for(auto itrr = st.begin(); itrr != st.end(); itrr++){
        cout<<*itrr<<" ";
    }


    st.insert(7);
    st.insert(9);
    
    auto itr3 = st.lower_bound(8);
    
    auto itr4 = st.upper_bound(7);


    return 0;
}