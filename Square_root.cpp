#include <iostream>
using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;

        long left = 1 , right = x;
        int ans = 0;

        while(left <= right){
            long long mid = left + (right - left)/2;
            long long square = mid * mid;

            if(square == x){
                return mid;

            } 

            else if(square < x){
                ans = mid;
                left = mid + 1;

            }
            else if(square > x){
                right = mid - 1;
            }


        }

    return ans;
    }
};

int main() {
    Solution obj;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Square root (rounded down): " << obj.mySqrt(x) << endl;

    return 0;
}