#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
void swap(char&a,char&b){
    char c=a;
    a=b;
    b=c;
}
void solve(string s,set<string>&st,int ind){
    st.insert(s);
    for(int i=ind;i<s.size();i++){
        
        swap(s[i],s[ind]);
        solve(s,st,ind+1);
    }
}
int main(){
    string s;
    cin>>s;
    set<string>st;
    vector<string>v;
    solve(s,st,0);
    cout<<st.size()<<'\n';       

    for(auto i:st){
         cout<<i<<'\n';       

    }
    


}
