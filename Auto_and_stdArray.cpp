#include<iostream>
#include<array>
using namespace std;
int main(){
    auto a = 5.6;
    cout<< a << endl;

    array<int , 10> arr = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0 ; i < arr.size(); i++){
        cout<< arr.at(i) << endl;
    }


}
