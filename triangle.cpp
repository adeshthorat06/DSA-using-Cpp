#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 25;
        for(int i = 0; i< n;i++){
        
        for(int j = 0; j< i+1; j++){
            if(j<= i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
}