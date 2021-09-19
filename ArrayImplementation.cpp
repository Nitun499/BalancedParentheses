#include<bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
class Stack{
    int top;
    int* arr;
    int capacity;
    int cur_size=0;
    public:
    //constructor
        Stack(int size){
            this->top=-1;
            this->capacity=size;
           arr=new int[capacity]; 
        }
        void push(int x){
            //base case
            if(top==capacity){
                cout<<"Stack is Full "<<endl;
                return ;
            }
            top++;
            arr[top]=x;
            cur_size++;
        }
        void pop(){
            //base case
            if(top==-1){
                cout<<"Stack is Empty ";
                return;
            }
            int val=arr[top];
            --top;
            --cur_size;
            cout<<"Popped value is"<<" "<<val<<endl;
        }
        bool isEmpty(){
           if(top==-1){
               return true;
           }else{
               return false;
           }
        }
        void Print(){
            for(int i=0;i<cur_size;i++){
                cout<<arr[i]<<" ";
            }
        }
        void Size(){
           cout<<cur_size;
        }
};

int main(){
   Stack obj(5);
   obj.push(1);
   obj.push(2);
   obj.push(4);
   obj.Print();
   cout<<endl;
   obj.pop();
   obj.pop();
   obj.pop();
   obj.pop();
   obj.push(11);
   obj.Size();
   cout<<endl;
   obj.Print();
    return 0;
}