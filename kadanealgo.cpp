#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1 , -4 , 3 , -5 , 10};
    int maxsum = INT_MIN;
    int curr_sum = 0;
    for(int i = 0; i < n ; i++){

        curr_sum += arr[i];
        maxsum = max(curr_sum , maxsum);
        if(curr_sum < 0){
        curr_sum = 0;    
    }
}
cout<<maxsum; 
return 0;
}
