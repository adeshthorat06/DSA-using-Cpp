#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int max = INT_MAX;
        int mini = INT_MIN;
    while(x != 0){
        int digit = x % 10;
        x = x/10;

        if(result > max /10 || result < mini / 10){return 0;}
        result = result * 10 + digit;
    }
    return result;
        
    }
};

int main(){

    Solution sol;
    int x = 3456780;
    cout<< "reversed num: " << sol.reverse(x);
}