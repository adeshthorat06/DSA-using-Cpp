#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1; // starts from the final digit of the string , i.e from the final index of the string
        int j = b.size() - 1;
        int carry = 0; // store the carry of the addition , if the addition is greater than 1
        string result = "";

        while (i >= 0 || j >= 0 || carry) { // check if i or j is 0 or greater than 0 and also if there exists any carry 
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0'; // a and b at index i and j can have only 2 val , 1 or 0
            if (j >= 0) sum += b[j--] - '0'; // 0 and 1 has ASCII value of 48 and 49 respectively.

            result += (sum % 2) + '0'; // modulus provides the values in either 0 or 1 , so we use it rather than division
            carry = sum / 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main(){
    string s, b;
    cout<< "enter the 1st number in binary:";
    cin>> s;
    cout<< "enter the 2nd number in binary:";
    cin>> b;
    Solution AB;
    cout<< "addition of Binary string: "<< AB.addBinary(s, b);


}