#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#define ll long long
using namespace std;
ll fun(string s){
    ll sum=0;
    for(auto i:s){
        sum+=i-'A'+1;
    }
    return sum;
}
int main(){
    string line;
    ifstream fin;
    fin.open("name.txt");
    while(fin){
        if(!fin.eof()){
            getline(fin,line);
            ll i=0;
            vector<string> dict;
            while(line[i]){
                if(line[i]=='"'){
                    string str;
                    i++;
                    while(line[i]!='"'){
                        str.push_back(line[i]);
                        i++;
                    }
                    dict.push_back(str);
                    str.erase();
                }
                i++;
            }
            ll sum=0;
            sort(dict.begin(),dict.end());
            for(ll i=0;i<dict.size();i++){
                sum+=(i+1)*fun(dict[i]);
            }
            cout<<sum;
        }
        else
            getline(fin,line);
    }
    fin.close();
}
