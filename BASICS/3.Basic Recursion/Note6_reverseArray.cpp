#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){

    // int duparr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     duparr[i] = arr[n-i-1];
    // }
    // for (int j = 0; j < n; j++)
    // {
    //     cout<<duparr[j]<<" ";
    // }

    // int leftitr = 0;
    // int rightitr = n-1;

    // while (leftitr<=rightitr)
    // {
    //     swap(arr[leftitr], arr[rightitr]);
    //     leftitr++;
    //     rightitr--;
    // }

    

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    
}

int main(){
    int n = 5;
    int arr1[n] = {1, 2, 3, 4, 5};

    reverse(arr1, n);

    return 0;
}