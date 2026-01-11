#include<iostream>
using namespace std;
int main(){
    int n= 5, i , j ;
    for(i = 0 ; i < n ; i ++){
        for(j = 0 ; j < n - i - 1 ; j ++){
            cout<< " ";

        }cout<<"*";


        if(i != 0){
         for(int x = 0 ; x < 2*i-1 ; x++){
            cout<< " ";

        }cout<<"*";

        }cout<<endl;
    }
    for(i = 0 ; i < n - 1 ; i ++){
        for(j = 0 ; j < i + 1 ; j ++){
            cout<< " ";

        }cout<<"*";


        if(i != n - 2){
         for(int x = 0 ; x < 2*(n - i - 2)- 1  ; x++){
            cout<< " ";

        }cout<<"*";

        }cout<<endl;
    }
    }
