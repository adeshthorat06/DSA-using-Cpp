#include<iostream> //factorial
int main(){
    int number, factorial = 1;
    
    std::cout<<"Enter a number: ";
    std::cin>> number;
    for(int i= 1; i<=number; i++){
        factorial *= i;
    }
    std::cout<<"The factorial is: "<< factorial <<std::endl;

}