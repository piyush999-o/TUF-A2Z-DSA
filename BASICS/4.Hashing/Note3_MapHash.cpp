#include <bits/stdc++.h>
using namespace std;

int main(){
    // string s = "abcabadab";
    int n =5;
    int arr[n] = {1, 2, 1, 2, 4};

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Using map because it only accuuire that element as KEY, which is present in that array.
    cout<<mpp[4];
    

    return 0;
}