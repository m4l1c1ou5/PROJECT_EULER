#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
#define vc vector<char>
#define vs vector<string> 
#define vl vector<ll> 
using namespace std;
inline void solve(){
    vl bigint(302);
    bigint[0]=1;
    ll count=0,m_count=1;
    for(ll i=0;i<1000;i++){
        ll temp;
        count=0;
        bool flag=1,carry=0;
        for(vl::iterator itr=bigint.begin();itr!=bigint.end();itr++,count++){
            if(count!=m_count){
                temp=(*itr)*2+carry;
                carry=0;
                *itr=temp%10;
                if(temp/10>0){
                    carry=temp/10;
                    m_count++;
                }
            }
            else
                break;
        }
    }
    ll sum=0;
    for(auto i:bigint)
        sum+=i;
    cout<<sum;
} 
int main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1; 
    //cin >> t; 
    for(ll cas=1;cas<=t;cas++) { 
       // cout<<"Case #"<<cas<<": ";
        solve(); 
        cout << "\n"; 
    } 
    return 0; 
}
