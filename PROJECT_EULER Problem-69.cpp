#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
bool is_prime(ll n){
    for(ll i=2;i<=sqrtl(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    ll mul=1;
    for(ll i=2;i<=100;i++){
        if(is_prime(i)){
            if(mul*i>1000000)
                break;
            mul*=i;
        }
    }
    cout<<mul;
}
