#include<iostream>
#include<string>
using namespace std;
static int count=0;
void anagram(string str,string remaining){
    if(remaining.size()==0){
        ::count++;
        if(::count==1000000){
            cout<<str<<"\n";
            exit(0);
        }
    }
    else{
        for(int i=0;i<remaining.size();i++){
            str.push_back(remaining[i]);
            string origin=remaining;
            remaining.erase(i,1);
            anagram(str,remaining);
            remaining=origin;
            str.pop_back();
        }
    }
}
int main(){
    anagram("","0123456789");
}
