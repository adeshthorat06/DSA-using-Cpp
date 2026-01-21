#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n < 2) return s;

        string longest = "";

        // Check every possible starting point
        for (int i = 0; i < n; i++) {
            // Check every possible ending point
            for (int j = i; j < n; j++) {
                // Extract the substring from index i to j
                string sub = s.substr(i, j - i + 1);
                
                // If it's a palindrome and longer than our current best
                if (isPalindrome(sub) && sub.length() > longest.length()) {
                    longest = sub;
                }
            }
        }
        return longest;
    }

private:
    //check if a string reads the same backwards
    bool isPalindrome(string str) {
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main(){

    string str = "racecargoesbrr saippuakivikauppias 00000000000000000000000000000000000000000";
    Solution soln;
    cout<< soln.longestPalindrome(str);



}