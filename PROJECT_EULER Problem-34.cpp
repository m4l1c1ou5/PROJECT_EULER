#include<iostream>
using namespace std;
int main(){
    int h[10],mul=1,ans=0;
    h[0]=1;
    for(int i=1;i<=9;i++){
        mul*=i;
        h[i]=mul;
    }
    for(int i=10;i<=10000000;i++){
        int n=i,sum=0;
        while(n>0){
            sum+=h[n%10];
            n=n/10;
        }
        if(sum==i){
            ans+=i;
        }
    }
    cout<<ans;
}
