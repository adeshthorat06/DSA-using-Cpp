#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();  // Get the size from the vector itself
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count > n / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    int n;
     cout<<"Enter the no of elements in the array"<<endl;
    cin >> n;
    vector<int> arr(n);
   cout<<"enter the elements in array"<<endl;

    for (int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    Solution sol;
    int result = sol.majorityElement(arr);
    cout <<"Majority elements: "<< result << endl;

    return 0;
}