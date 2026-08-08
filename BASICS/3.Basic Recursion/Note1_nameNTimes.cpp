#include <bits/stdc++.h>
using namespace std;

// void namenTimes(string s, int n){
//     if (n>0)
//     {
//         cout<<s<<" ";
//         n--;
//         namenTimes(s, n);
//     }
    
// }

void namenTimes(string s,int count, int n){
    if (count==n)
    {
        return;
    }
    cout<<s<<" ";
    count++;
    namenTimes(s, count, n);
    
}

int main(){

    string name = "Kairo";
    namenTimes(name, 0, 3);


}