#include<iostream>
#include<math.h>
#include<vector>
#define ll long long
#define vl vector<ll>
using namespace std;
ll count=0;
void fun(vl a,ll n,ll left){
    if(left<=0){
        if(left==0)
            ::count++;
        return;
    }
    for(ll i=n;i<a.size();i++){
        fun(a,i,left-a[i]);
    }
}
int main(){
    ll arr[]={1,2,5,10,20,50,100,200};
    vl a(arr,arr+8);
    ll n=200;
    for(ll i=0;i<a.size();i++){
        fun(a,i,n-a[i]);
    }
    cout<<::count;
}
