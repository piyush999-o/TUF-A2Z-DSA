#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
// First we are going to find minimum then replace with first index, 
// then repeat but excluding last first index
    
    // loop from 1st to 2nd last
    for (int i = 0; i <= (n-2); i++)
    {
        int mini = i; // assuming minimum at first index

        // loop for i to last index
        // after every parent loop, it removes first index
        // loop is finding minimum
        for (int j = i; j <= (n-1); j++)
        {
            // find minimum and put index value
            if (arr[j]<arr[mini])
            {
                mini = j;
            }
        }

        // code for swaping first index value with minimum
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        
        
    }
    

}

int main(){

    int n = 6;
    int arr[n] = {12, 10, 9, 21, 20, 22};

    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    

    return 0;
}