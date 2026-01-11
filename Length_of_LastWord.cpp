#include<iostream>
#include<string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
    //    if(s.size() == 0 ) return 0;
     int length = 0;
    int i = s.length() - 1;

    while(i >= 0 && s[i] == ' '){
        i--;
    }

    while(i >= 0 && s[i] != ' '){
        length++;
        i--;
    } return length;

       
    } 
};

int main(){
    std::string str = "My Name is Adesh";
    Solution s1;
    int Length = s1.lengthOfLastWord(str);
    std::cout<<"The Length of Last Word in the String: " << Length <<std:: endl;


}