#include <bits/stdc++.h>

using namespace std;

void mergeS(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;
    while (left <= mid && right <= high)
    {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    // this condition will tell that if anything remain on left side
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
     
    // this condition will tell that if anything remain on right side
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // MUST REVISE PART
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    
    
    
}

void mS(vector<int>& arr, int low, int high){
    if(low == high) return;

    int mid = (low + high)/2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    mergeS(arr, low, mid, high);

}

void mergeSort(vector<int>& arr, int n){
    mS(arr, 0, n-1);
}

int main(){

    vector<int> v1;
    v1.push_back(12);
    v1.push_back(10);
    v1.push_back(9);
    v1.push_back(21);
    v1.push_back(20);
    v1.push_back(22);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\n";
    
    mergeSort(v1, v1.size());
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    

    return 0;
}