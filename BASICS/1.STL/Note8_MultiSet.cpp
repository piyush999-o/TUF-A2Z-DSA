#include <bits/stdc++.h>
using namespace std;

int main(){

    multiset<int> mst;
    /*
    MultiSet is list of:
        Sorted
        Not-Unique(unlike set)
    */

    mst.insert(1);
    mst.insert(1);
    mst.insert(1);

    cout<<mst.size()<<endl;
    
    // Removal of all element
    mst.erase(1); // this will erase all '1'
    cout<<mst.size()<<endl;

    mst.insert(9);
    mst.insert(9);
    mst.insert(9);
    mst.insert(9);

    int cnt = mst.count(9); // Give number of particular element
    // cout<<cnt;

    mst.erase(mst.find(9)); // Erase only one, the first one
    // cout<<mst.size();
    
    auto it = mst.find(9);
    mst.erase(it, next(it, 2)); // Format: [start, end) <-- Intervals
    cout<<mst.size();

    // Rest all function is same as set


    return 0;
}