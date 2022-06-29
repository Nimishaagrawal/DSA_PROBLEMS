#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
long long solve(vector<long long>v,long long mid,long long t){
    long long c=1,s=0;
    for(int i=0;i<v.size();i++){
        s+=v[i];
        if(s>mid){
            s=v[i];
            c++;
        }
    }
    if(t>=c){
        return 1;
    }return 0;
}
int main(){
    long long n,t,a,s=0;
    cin>>n>>t;
    vector<long long>v;
    long long  lo=0;
    long long hi;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a;
        lo=max(lo,a);
        v.push_back(a);
    }
    hi=s;
    long long mid,ans;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(solve(v,mid,t)){
          ans=mid;
          hi=mid-1;
        }else{
            lo=mid+1;
        }
    }cout<<ans;

    


}
