#include<iostream>
using namespace std;
int main(){
    int i, sum = 0 ;
    for(i = 0; i<= 100 ; i++){
        if(i%2 != 0){
            sum += i;
        }
    }
    cout<<"The sum of odd numbers is: "<<sum<<endl;
}