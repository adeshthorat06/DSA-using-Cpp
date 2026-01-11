#include<iostream>
using namespace std;
void swap(int arr[] , int size){
    int start = 0 , end = size - 1 , temp ;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end--;
    }
}
int main(){
    int array[5] = {6,4,12,67,32};
    int size = 5;
    cout<<"before swap:\n";
    for(int j = 0 ; j < 5 ; j++){
        cout<<array[j]<<" ";
    }
    swap(array , 5 );
    cout<<"\nAfter the swap:\n";
    for(int j = 0 ; j < 5 ; j++){
        cout<<array[j]<< " ";
    }
}