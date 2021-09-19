#include<bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};
class Stack{
    Node* top=NULL;
    public:
    void push(int x){
        Node* temp=new Node(x);
        if(top==NULL){
            top=temp;
            return;
        }else{
            temp->next=top;
            top=temp;
        }
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack is Empty "<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        cout<<"Popped element is "<<temp->data<<endl;
        delete(temp);
        
    }
    bool isEmpty(){
        return top==NULL;
    }
    void Print(){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(7);
    st.Print();
    st.pop();
    st.pop();
    st.pop();
    st.Print();
    bool ans=st.isEmpty();
    cout<<ans;
    return 0;
}