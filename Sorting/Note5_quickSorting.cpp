#include <bits/stdc++.h>

using namespace std;

int partitionArr(vector<int> &arr, int low, int high)
{
    // Set pivot to first index (USUALLY)
    int pivot = arr[low];
    int i = low;  // because searching from left to right
    int j = high; // because searching from right to left
    // Condition till both meet (Side by Side)
    while (i < j)
    {
        // Move i until we find an element
        // greater than the pivot.
        // Everything before i is already <= pivot.
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++; // pauses at greater value
        }

        // Move j until we find an element
        // smaller than or equal to the pivot.
        // Everything after j is already > pivot.
        while (arr[j] > pivot && j >= low + 1)
        {
            j--; // pauses at lower value
        }

        // If both pointers haven't crossed,
        // swap the misplaced elements.
        // this separate lower(j) to left and higher(i) to right
        if (i < j)
            swap(arr[i], arr[j]);
    }
    // j now points to the correct position
    // where the pivot should be placed.
    swap(arr[low], arr[j]);
    // Return the pivot's final index.
    return j;
}

void qS(vector<int> &arr, int low, int high)
{
    // This Condition means, we are going to run only for more than 1 element
    // If low == high: that means only one element, thats why we use < instead of <=
    if (low < high)
    {
        // Index that divides array into 2 sub-array, Lower to left and Higher to right

        int partition_index = partitionArr(arr, low, high);
        // Runs again function for left side
        qS(arr, low, partition_index - 1);
        // Runs again function for right side
        qS(arr, partition_index + 1, high);
    }
}

vector<int> quickSort(vector<int> &arr)
{
    qS(arr, 0, arr.size() - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v1;
    v1.push_back(12);
    v1.push_back(10);
    v1.push_back(9);
    v1.push_back(21);
    v1.push_back(20);
    v1.push_back(22);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\n";

    quickSort(v1);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}