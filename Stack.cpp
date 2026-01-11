#include<iostream>
#include<vector>
using namespace std;

class Stack{
    private:
    vector<int> arr;

    public:
    void push(int val){
        arr.push_back(val);
        cout<<"Value Inserted"<<endl;
    }

    void pop(){
        if(arr.empty() != true){
            arr.pop_back();
            cout<<"Element popped"<<endl;
        }
    }
    bool empty(){
        return arr.empty();
    }

    int top(){
        if(!arr.empty()){
            return arr.back();

        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    void print() {
        cout << "Stack (top -> bottom): ";
        for (int i = arr.size() - 1; i >= 0; i--) {
            cout << arr[i] << " | ";
        }
        cout << "\n";
    }
};

int main(){
    Stack s1;
    s1.push(30);
    s1.push(10);
    s1.print();
    s1.push(40);
    s1.push(50);
    s1.pop();
    s1.print();

}