#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> st;

    /*
    STACK is LIFO ---> Last In First Out
    */

    st.push(7);
    st.push(9);
    st.emplace(8);

    /*
    |            |
    |            |
    |            |
    |     8      |
    |     9      |
    |_____7______|
    
    
    
    */

    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    cout<<st.size()<<" ";
    cout<<st.empty();
    // st.swap(st2); This is also function of Stack


    return 0;
}