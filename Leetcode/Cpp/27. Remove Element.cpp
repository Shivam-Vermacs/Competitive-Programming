#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int left = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] != val)
            {
                nums[left++] = nums[right];
            }
        }
        return left;
    }
};

int main()
{
    Solution sol;
    int t;

    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--)
    {
        int n, val;

        
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cin >> val;

        int k = sol.removeElement(nums, val);

        
        cout << k << endl;
        for (int i = 0; i < k; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    return 0;
}