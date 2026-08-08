#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    // First we are going to find max of two consecutive then put max to right,
    // then repeat but excluding last first index

    int isSwap = 0;
    for (int i = (n - 1); i >= 0; i--)
    {
        // loop for i to last index
        // after every parent loop, it removes first index
        // loop is finding minimum
        for (int j = 0; j <= (i - 1); j++)
        {
            // find max and move to right
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwap = 1;
            }
        }
        if (isSwap == 0)
        {
            break;
        }
        
    }
}

int main()
{

    int n = 6;
    int arr[n] = {1,2,3,4,6,5};

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}