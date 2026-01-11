#include<iostream>

void Hello(){
    std::cout<< "Hello There!" << std::endl; 
}

int main(){
    typedef void(*Print)();
    Print p1 = Hello; // or void(*Print)() = Hello; Print();
    p1();

}