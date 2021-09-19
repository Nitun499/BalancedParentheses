#include<bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"Constructor of parent"<<endl;
    }
};
class Child :public Parent{
    public:
    Child(){
        cout<<"Constructor of child class "<<endl;
    }
};

int main(){
    Child obj;
    

    
    return 0;
}