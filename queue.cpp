#include<iostream>
#include<vector>
using namespace std;

class Queue{
    private:
    vector<int> arr;
    public:

    void enqueue(int val){
        arr.push_back(val);
        cout<<"element Entered"<<endl;
    }
    void dequeue(){
        if(!arr.empty()){
            arr.erase(arr.begin());
            
        }
        else{
            cout<<"Queue is Empty fr"<<endl;
        }
    }
    int front(){
        if(arr.empty()){
            cout<<"empty queue"<<endl;
            return -1;
        }
        return arr[0];
         

    }
    void print(){
        cout<<"Queue:"<<endl;
        for(int i = 0; i < arr.size(); i++){
            cout<< arr[i]<<" | ";

        }
        cout << "\n";
    }
    bool empty(){
        return arr.empty();
    }
};

int main(){
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(30);
    queue.enqueue(60);
    queue.print();
    queue.dequeue();
    queue.print();
    cout<<queue.front();  
     



}