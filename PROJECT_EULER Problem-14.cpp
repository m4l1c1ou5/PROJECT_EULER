#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll prob(ll n,ll a[]){
    ll as=0;
    if(n<100000)
        if(a[n]!=-1)
            return a[n];
    if(n==1)
        return 1;
    if(n%2!=0)
        as=prob(3*n+1,a);
    else
        as=prob(n/2,a);
    if(n<100000)
    a[n]=as+1;
    return as+1;
}
int main(){
    ll a[1000000];
    for(int i=0;i<1000000;a[i]=-1,i++);
    ll max=0,max_pos=0;
    for(ll i=1000000;i>=1;i--){
        ll sub=prob(i,a);
        if(max<sub){
            max=sub;
            max_pos=i;
        }
    }
    cout<<max_pos<<"\n";
}
