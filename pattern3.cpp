#include<iostream>
using namespace std;
int main(){
    int n= 5, i ;
    for(i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n - i  - 1; j++){
            cout<<" ";

        }
        for(int z = 1; z <= i+1 ; z++){
            cout<< z <<" ";
        }
        for(int x = i  ; x > 0; x--){
            cout<< x << " " ;
        }
        cout<<endl;
    }

}