#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> &nums)
{
    int cnt = 0;
    for (int i = 0; i < (nums.size() - 1); i++)
    {
        if (nums[i] <= nums[i + 1])
        {
            continue;
        }
        else
        {
            cnt++;
        }
        cout << cnt << "\n";
    }
    if (cnt > 1)
        return false;
    else if (cnt == 1 && nums[nums.size() - 1] > nums[0])
    {
        return false;
    }
    else
    {
        return true;
    }
}
// For Ascending Array
bool isSorted(vector<int> &nums)
{
    for (int i = 0; i < (nums.size() - 1); i++)
    {
        if (!(nums[i] <= nums[i + 1]))
        {
            return false;
        }
        else
            continue;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 2, 3, 4, 5};
    cout << isSorted(v) << "\n";

    cout << check(v) << "\n";

    return 0;
}