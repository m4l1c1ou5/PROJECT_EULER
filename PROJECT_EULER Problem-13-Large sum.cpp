#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<fstream>
#define ll long long
using namespace std;
vector<int> add(vector<int> a,vector<int> b){ //this function is taking two vector<int>
    ll carry=0;                               //and returning their sum in the 
    vector<int> c(a.size());                  //vector<int> form
    for(ll i=a.size()-1;i>=0;i--){
        if(i>=a.size()-50){
            ll temp=a[i]+b[i-(a.size()-50)]+carry;
            c[i]=(temp%10);
            if(temp/10)
                carry=temp/10;
            else 
                carry=0;
        }
        else{
            if(a[i]+carry<10){
                c[i]=(a[i]+carry);
                carry=0;
            }
            else{
                c[i]=(a[i]+carry)%10;
                carry=(a[i]+carry)/10;
            }
        }
    }
    if(carry)
        c.insert(c.begin(),carry);
    return c;
}
int main(){
    string line;
    ifstream fin;
    fin.open("a.txt");               //all the numbers are saved the numbers in "a.txt"
    vector<int> sum(50); 
    while(fin){
        vector<int> a(50);
        if(!fin.eof()){
            getline(fin,line);       //every number is getting stored to "line"
            for(int i=0;i<50;i++){
                a[i]=line[i]-'0';     //numbers were stored in string format so converted to vector<int>
            }
            sum=add(sum,a);  //"sum" variable is the sum of all the numbers
        }
        else
            getline(fin,line);        
        
    }
    fin.close();
    for(int i=0;i<10;i++)
        cout<<sum[i];
}
