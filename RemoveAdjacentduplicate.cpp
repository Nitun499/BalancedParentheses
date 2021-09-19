#include <bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
string remove_k_char(int k, string s)
{
    if(k==1){
        return "";
    }
    string output="";
    stack<pair<char,int>> st;
    //traversing through string
    for(int i=0;i<s.length();i++){
        //if stack is empty then directly push element to the stack
        if(st.empty()){
            st.push(make_pair(s[i],1));   
            
        }
        else{
            //if char at top of stack is equal to current char then push char to stack and increase frequency of top char
            if(st.top().first==s[i]){
               //incrementing freq of char
                st.push({s[i],st.top().second+1});
                if(st.top().second==k){
                    int count=k;
                    //poping duplicate characters
                    while(count){
                       
                        st.pop();
                        count--;
                    }
                }
            }
            else{
                //pushing char that are not duplicate and has freq less than 3
                st.push({s[i],1});
              
            }
        }
    }
    //storing resultant string to output string
    while(!st.empty()){
        output+=st.top().first;
        st.pop();
    }
    reverse(output.begin(),output.end());
    return output;
    
}

int main()
{
    string input = "deeedbbcccbdaa";
    string out = remove_k_char(3,input);
    cout << out << endl;

    return 0;
}