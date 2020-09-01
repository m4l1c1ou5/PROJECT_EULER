#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
ll count=0;
void fun(ll n,ll left){
    if(left<=0){
        if(left==0)
        ::count++;
        return;
    }
    for(ll i=1;i<=n;i++){
        fun(i,left-i);
    }
}
int main(){
    ll n=100;
    for(ll i=1;i<n;i++){
        fun(i,n-i);
    }
    cout<<::count;
}
