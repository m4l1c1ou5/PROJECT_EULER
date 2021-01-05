#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> h(5001);
    for(int i=1;i<=5000;i++){
        h[i]=i*((3*i)-1)/2;
    }
    int min=INT_MAX;
    for(int i=1;i<=5000;i++){
        for(int j=i+1;j<=5000;j++){
            if(binary_search(h.begin(),h.end(),abs(h[i]-h[j])) && binary_search(h.begin(),h.end(),h[i]+h[j])){
                if(abs(h[i]-h[j])<min){
                    min=abs(h[i]-h[j]);
                }
            }
        }
    }
    cout<<min;
}
