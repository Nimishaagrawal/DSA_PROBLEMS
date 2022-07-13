#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

int main(){
    long long n,a;
    cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }long long s=1;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(s<v[i]){
            break;
        }else{
            s+=v[i];
        }
    }cout<<s;

    


}
