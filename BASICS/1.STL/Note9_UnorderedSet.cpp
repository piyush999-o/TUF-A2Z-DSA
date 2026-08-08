#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_set<int> ust;
    /*
    UnorderedSet is list of:
        Randomized-Order(not-sorted, can have any order)
        Unique
    */
    ust.insert(9);
    ust.insert(8);
    ust.insert(3);
    ust.insert(10);
    ust.insert(2);
    ust.insert(4);

    for (auto it = ust.begin(); it != ust.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    /*
        lower_bound & upper_bound does not work,
        rest all functions are same.
    */

    return 0;
}