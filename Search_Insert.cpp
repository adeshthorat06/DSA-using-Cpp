#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1; // used binary search algorithm

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};

int main(){
    vector<int> vec = {2,3,4,5,6,7,8,9,10};
    int x;
    Solution s;
    cout<< "Enter the target number"<<endl;
    cin >> x;

    cout<< s.searchInsert(vec, x);
    



}