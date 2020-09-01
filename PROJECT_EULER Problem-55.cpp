#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
ll reversDigits(ll num) 
{ 
    ll rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
int main(){
    ll num=4994,count=50,count_ans=0;
    for(ll i=1;i<10000;i++){
        count=50;
        num=i;
        num+=reversDigits(num);
        while(num!=reversDigits(num) && count){
            count--;
            num+=reversDigits(num);
        }
        if(num!=reversDigits(num)){
            count_ans++;
        }
    }
    cout<<count_ans;
}
