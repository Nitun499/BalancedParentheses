#include<bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
#define MAX_SIZE 20
using namespace std;
class Stack{
    int arr[MAX_SIZE];
     int top=-1;
    public:
        //Function for adding element
        void push(int data){
            if(top==MAX_SIZE-1){
                cout<<"Stack is full "<<endl;
                return;
            }
            arr[++top]=data;
        }
        void pop(){
            if(top==-1){
                cout<<"Stack is empty,no element left to pop";
                return;
            }
            --top;
        }
        void Top(){
            if(top==-1){
                cout<<"Stack is emty "<<endl;
                return;
            }
            cout<<arr[top];
        }
        bool isEmpty(){
            return top==-1?true:false;
        }
        void Print(){
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<endl;
            }
        }
       
};



int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.Print();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    

    return 0;
}