#include <bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> pq; // Make in Priority order // MAX HEAP
    pq.push(8);
    pq.push(9);
    pq.push(10);
    pq.emplace(7);

    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    priority_queue<int, vector<int>, greater<int>> pqe;// Make in Reverse Priority order // MIN HEAP
    
    pqe.push(9);
    pqe.push(10);
    pqe.emplace(7);

    cout<<pqe.top()<<endl;
    cout<<pqe.size()<<endl;
    pqe.pop();
    cout<<pqe.top()<<endl;
    
    // pq.swap() and pq.empty() is same 



    return 0;
}