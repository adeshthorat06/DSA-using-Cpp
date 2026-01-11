#include<iostream>
using namespace std;
int count = 10;
int main(){
    int x = 10, y = 20 ; 
    auto add = [x,y]() mutable{ 
        x = 30;
        y = 100;
        return x + y;
    };
    cout<< count ;
    cout<< "Addition of x and y: " << add() << endl;
}