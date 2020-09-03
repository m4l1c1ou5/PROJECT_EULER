#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define vl vector<ll>
#define limit 28124
using namespace std;
int main(){
    vl hash(limit);
    for(ll i=1;i<limit;i++){
        for(ll j=i+1;j<limit;j++){
            if(j%i==0)
                hash[j]+=i;
        }
    }
    vl abundant;
    for(ll i=1;i<limit;i++){
        if(hash[i]>i)
            abundant.push_back(i);
    }
    ll size=abundant.size();
    bool flag=1;
    ll sum=0;
    for(ll i=1;i<limit;i++){
        flag=1;
        for(ll j=0;j<size;j++){
            if(binary_search(abundant.begin(),abundant.end(),i-abundant[j])){
                flag=0;
                break;
            }
        }
        if(flag==1){
            sum+=i;
        }
    }
    cout<<sum;
}
