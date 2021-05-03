#include<bits/stdc++.h>
using namespace std;
vector<int> soe(int n){
    vector<int> ans;
    vector<bool> k(n+1);
    for(int i=0;i<n+1;i++){
        k[i]=true;
    }
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i+i;j<=n;j+=i){
            k[j]=false;
        }
    }
    for(int i=2;i<n;i++){
        if(k[i])
        ans.push_back(i);
    }
    return ans;
}
int num_of_digit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
vector<int> rot(int n){
    vector<int> ans;
    int count=num_of_digit(n);
    int extractor=pow(10,count-1);
    ans.push_back(n);
    for(int i=0;i<count-1;i++){
        int last_digit=n/extractor;
        n=(n%extractor)*10+last_digit;
        ans.push_back(n);
    }
    return ans;
}
int main(){
    unordered_set<int> k;
    for(auto i:soe(1000000)){
        k.insert(i);
    }
    int count=0;
    for(auto i:k){
        bool flag=1;
        vector<int> rotation=rot(i);
        for(auto j:rotation){
            if(k.find(j)==k.end()){
                flag=0;
            }
        }
        if(flag){
            count++;
        }
    }
    cout<<count;
    cout<<"\n";
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
