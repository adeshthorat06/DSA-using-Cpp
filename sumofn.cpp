// Online C++ compiler to run C++ program online
#include <iostream>
int sumofn(int n){
    if(n == 0){
        return 0;
    }
    return n + sumofn(n - 1);
}
int main(){
    
   std::cout<< sumofn(10);

    return 0;
}