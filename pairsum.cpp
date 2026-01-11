#include<iostream>
#include<vector>
using namespace std;

class Sol{
    public:
    pair<int ,int> pairsum(vector<int>& nums , int target){
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            for(int j = i + 1; j < size ; j++){
                if(nums[i] + nums[j] == target){
                    return {i , j};
                }
            }
        }
        return {-1 , -1};
    }
};

class Optimal_Sol{
    public:
    pair<int , int> pairsum(vector<int>& num, int target){
        int n = num.size();
        int i = 0 , j = n - 1;
        while (i < j ){
            int pairsum = num[i] + num[j];
            if(pairsum > target){
                j--;
            }
            else if(pairsum < target){
                i++;
            }
            else{
                return {i , j};
            }
            
        }
    }
};
int main(){
    int tar;
    vector<int> arr(10);
    cout<<"enter the target element:";
    cin>> tar;
    cout<<"Enter 10 elements in the array:";
    for (int i = 0; i < 10; i++) { 
        cin >> arr[i];
    }
    Sol sol;
    pair<int , int> result = sol.pairsum(arr, tar);
    if(result.first != -1){
    cout<<"pair sum of target: " <<tar<< "\t is :" << result.first << "," <<result.second;
    }
    else{
        cout<<"pair not found";
    }

    Optimal_Sol sols;
    pair<int , int > results = sols.pairsum(arr, tar);
    cout<<"The indexes are : " << results.first << "," << results.second;
    return 0;                                  
}