#include <bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq(3, 96);
    dq.push_back(92);
    dq.emplace_back(91);
    dq.push_front(90);
    dq.emplace_front(98);

    // Special in Deque:
    dq.pop_back();
    dq.pop_front();
    dq.front(); // Can direcly READ/WRITE Data
    dq.back(); // Can direcly READ/WRITE Data
    
    cout<<dq.front()<<endl;
    cout<<*(dq.begin())<<endl;

    for(deque<int>::iterator it = dq.begin(); it != dq.end(); it++){
        cout<<*it<<" ";
    }

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap


    return 0;
}