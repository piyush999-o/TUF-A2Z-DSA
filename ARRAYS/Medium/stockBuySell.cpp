#include <bits/stdc++.h>

using namespace std;

int stockBuySell(vector<int> arr, int n){
    // int n = arr.size();
    int right = 0;
    int max_diff = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int diff = 0;
            if (arr[j]>arr[i])
            {
                diff = arr[j] - arr[i];
                max_diff = max(diff, max_diff);
            }
            
        }
        
        
    }
    return max_diff;
}

int stockBuySell2(vector<int> prices){
    int n = prices.size();
    int mini_price = INT_MAX;
    int maxProfit = 0;

    // running loop and find min price each time.
    for (int i = 0; i < n; i++)
    {
        // finding min price
        if (prices[i]<mini_price)
        {
            mini_price = prices[i];
        }
        // check that what will be the profit if sell now(Utill min price change) 
        // it also means as we find min price this can never be negative
        int curr_diff = prices[i] - mini_price;
        maxProfit = max(curr_diff, maxProfit);

        
    }
    return maxProfit;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {7,1,5,3,6,4};
    cout<<stockBuySell2(v);

    return 0;
}