#include<iostream>
using namespace std;
class Main{
    private:
    int a , b;
    public:
    void Get_x() const {
        cout<< "value of a is:" << a;
        // a = 20; // throws an error
    
    }
    Main(int x, int y){
        a = x;
        b = y;
    }
};
int main(){
    Main obj1(20, 30);
    obj1.Get_x();
    return 0;

}