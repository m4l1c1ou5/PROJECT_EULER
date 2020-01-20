#include<iostream>
#include<math.h>
using namespace std;
int prime(long long n){
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0){
            goto a;
        }
    }
    return 1;
    a:
    return 0;
}
long long limit=1000000;               //here one can enter the limit
int main(){
    long long flag=2,temp1=0,final,arr[1000]={0};
    long long temp;
    arr[0]=2;
    for(long long n=3;n<200000;n+=2){
        if(prime(n)){
            flag+=n;
            temp1++;
            arr[temp1]=flag;
            if(flag<limit)
                final=temp1;
            if(prime(flag)){
                if(flag>limit){
                    flag=temp;
                    break;
                }
                else{
                    temp=temp1;
                }
            }
        }
    }
    long long ans1=arr[temp],ans2=temp;
    for(long long j=final;j>temp;j--){
        for(int i=0;i<(j-temp);i++){
            if(prime(arr[j]-arr[i])){
                ans1=arr[j]-arr[i];
                ans2=j-i;
                goto b;
            }
        }
    }
    b:
    cout<<ans1<<" containing "<<ans2<<" consecutive primes";
}
