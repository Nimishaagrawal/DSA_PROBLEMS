#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main(){
    string s,t,a;
    cin>>s>>t;
    a=t+'#'+s;
    int n=a.size();
    vector<long long>v(n,0);
    int j=0,i=1;
    while(i<n){
        if(a[i]==a[j]){
            j++;
            v[i]=j;
            i++;
        }else{
            if(j==0){
                v[i]=0;
                i++;
            }else{
                j=v[j-1];
            }
        }
    }long long res=0;
    for(int i=0;i<n;i++){
        if(v[i]==t.size()){
            res++;
        }
    }cout<<res;

    


}
