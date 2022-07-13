#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    vector<pair<long long,long long>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second>>v[i].first;
    }sort(v.begin(),v.end());
    multiset<long long>st;
    for(int i=0;i<k;i++){
        st.insert(0);
    }int c=0;
    for(int i=0;i<n;i++){
        auto it=st.upper_bound(v[i].second);
        if(it==st.begin()){
            continue;
        }st.erase(--it);
        c++;
        st.insert(v[i].first);
    }cout<<c;
}