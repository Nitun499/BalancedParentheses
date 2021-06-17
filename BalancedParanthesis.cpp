#include<bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
bool arePair(char a,char b){
    if(a=='{' && b=='}') return true;
    else if(a=='[' && b==']') return true;
    else if(a=='(' && b==')') return true;
    else
    return false;
}
bool isValid(string str){
    int len=str.length();
    stack<char> s;
    for(int i=0;i<len;i++){
        if(str[i] =='{' || str[i]=='[' ||str[i]=='('){
            s.push(str[i]);
        }
        else if(str[i]=='}'||str[i]==']'||str[i]==')'){
            if(s.empty()||!arePair(s.top(),str[i])){
                return false;
                break;
            }
            else{
                s.pop();
            }
        }
    }
    return s.empty()?true:false;
}

int main(){
    string seq="{[()]}";
    if(isValid(seq)){
        cout<<"String is valid "<<endl;
    }
    else{
        cout<<"String is not balanced "<<endl;
    }
    return 0;
}