#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }

        }
        return k;
    }
};

int main(){
    vector<int> nums = {4,4,1,5,6,6};
    Solution sol;
    int x = sol.removeElement(nums,4);
    for(int i = 0; i < x; i++){
        cout<< nums[i] << " ";

    }

}