#include <bits/stdc++.h>

using namespace std;
    

int largestElement(vector<int>& nums) {
    int maxInt = nums[0];
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]>maxInt) maxInt = nums[i];
        else continue;
    }
    return maxInt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {82, 86, 78, 89, 91, 78, 54};
    cout<<largestElement(v);

    return 0;
}