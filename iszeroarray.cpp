#include<iostream>
#include<vector>
using namespace std;
class Solution{

    public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> diff(n + 1, 0);

    for (auto& q : queries) {
        int l = q[0], r = q[1];
        diff[l] += 1;
        if (r + 1 < n) {
            diff[r + 1] -= 1;
        }
    }
                    
    for (int i = 1; i < n; i++) {
        diff[i] += diff[i - 1];
    }

    for (int i = 0; i < n; i++) {
        if (diff[i] < nums[i]) {
            return false;
        }
    }
    return true;
}
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {2, 3}};

    if (sol.isZeroArray(nums, queries)) {
        cout << "Yes, array can be zeroed." << endl;
    } else {
        cout << "No, array cannot be zeroed." << endl;
    }

    return 0;
}
