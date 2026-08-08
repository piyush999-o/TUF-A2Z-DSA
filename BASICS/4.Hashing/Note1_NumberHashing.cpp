#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 5;
    int arr[n] = {0};
    
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    // for (int j = 0; j < n; j++)
    // {
    //     cout<<arr[j]<<endl;
    // }

    // Sample: [1, 2, 2, 1, 3]
    
    int num = 13; // assuming that max number in that array is 13.
    int hash[num] = {0}; // putting every value initially 0.

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
        /*
        i=0:
            arr[0] = 1:
                hash[1] = hash[1](0) + 1 = 1 
        i=1:
            arr[1] = 2:
                hash[2] = hash[2](0) + 1 = 1 
        i=2:
            arr[2] = 2:
                hash[2] = hash[2](1) + 1 = 2 
        i=3:
            arr[3] = 1:
                hash[1] = hash[1](1) + 1 = 2 
        i=4:
            arr[4] = 3:
                hash[3] = hash[3](0) + 1 = 1 
        */
    }

    cout<<hash[0];
    



    return 0;
}