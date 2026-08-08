#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;  
    /*
        QUEUE is like people standing in line/queue;
        QUEUE is FIFO ---> First In First Out
    */
    q.push(9);
    q.push(8);
    q.emplace(7);

    cout<< q.front()<<endl;
    cout<< q.back()<<endl;
    
    q.pop();
    cout<< q.front()<<endl;


    return 0;
}