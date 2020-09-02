#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
#define vl vector<ll>
#define num 1001
using namespace std;
int size(vl a){
    for(ll i=0;i<1001;i++){
        if(a[i]==0 && a[i+1]==0 && a[i+2]==0 && a[i+3]==0 && a[i+4]==0){
            return i;
        }
    }
    return 0;
}
vl add(vl a,vl b){
    vl c(num+1);
    ll carry=0;
    for(ll i=0;i<num+1;i++){
        ll temp=a[i]+b[i]+carry;
        carry=0;
        c[i]=temp%10;
        if(temp/10>0){
            carry=temp/10;
        }
    }
    return c;
}
int main(){
    vector<vl> f;
    vl temp(num+1);
    for(ll i=1;i<num*5;i++){
        if(i==1 || i==2){
            vl k(num+1);
            k[0]=1;
            f.push_back(k);
            continue;
        }
        f.push_back(temp);
    }
    int count=2;
    for(int i=2;i<num*5;i++){
        f[i]=add(f[i-1],f[i-2]);
        if(size(f[i])>=1000){
            cout<<i+1;
            break;
        }
    }
}
