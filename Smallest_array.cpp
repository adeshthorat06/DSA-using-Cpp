#include<iostream>
int main(){
    int arr[5] = {67, 56 , 62, 82, 65};
    int smallest = INT_MIN;
    for(int i = 0; i < 5 ; i++){
        smallest = std::max(arr[i], smallest);
        }
        std::cout<<"The biggest value is : "<< smallest ;
    }
    

