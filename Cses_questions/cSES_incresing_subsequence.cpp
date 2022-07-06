#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
}vector<int>temp;
temp.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(temp.back()<v[i]){
           temp.push_back(v[i]);
        }else{
            auto ind=lower_bound(temp.begin(),temp.end(),v[i])-temp.begin();
            temp[ind]=v[i];
        }
    }
    cout<<temp.size();

}
