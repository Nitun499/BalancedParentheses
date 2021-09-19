#include<bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
vector<int> SlidingMax(vector<int>& arr,int k){
    stack<int> st;
    vector<int> res;
    if(k==1) return arr;
    
    for(int i=0;i<arr.size()-2;i++){
        int max_so_far=arr[i];
        for(int j=i+1;j<i+k;j++){
            max_so_far=max(max_so_far,arr[j]);
        }
        res.push_back(max_so_far);
    }
    return res;
}

int main(){
    vector<int> v={1,-1};
    vector<int> ans=SlidingMax(v,1);
    for(auto & a: ans){
        cout<<a<<" ";
    }
    
    return 0;
}