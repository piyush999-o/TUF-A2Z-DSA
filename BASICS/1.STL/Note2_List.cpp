#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int> ls(2, 10);
    ls.push_back(3);
    ls.emplace_back(4);

    // Special method other than vector:
    ls.push_front(9); 
    ls.emplace_front(10);

    for (list<int>::iterator itr = ls.begin(); itr != ls.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap



}