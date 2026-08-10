#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0, maxcnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        maxcnt = max(maxcnt, cnt);
    }

    return maxcnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(v);

    return 0;
}