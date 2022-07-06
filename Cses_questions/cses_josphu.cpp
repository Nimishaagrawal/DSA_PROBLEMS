#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int a=1,b=0;
    int c=0;
    while(n&&k){
        for(int i=2;i<=n;i+=2){
            c=a*i+b;
            k--;
            if(k==0){
                break;
            }
        }if(k==0){
            break;
        }
        if(n%2){
            c=a+b;
            k--;
            b+=a;
        }else{
            b-=a;a
        }a=a*2;
        n=n/2;
    }cout<<c<<'\n';
    }
}
