#include<iostream>
#include<vector>
#include<string>
using namespace std;
void meow(string &om,int ind){
    int n=om.size();

    if(ind==n){
        
        cout<<om<<endl;
        
    }
    for(int i=ind;i<n;i++){
        swap(om[ind],om[i]);
        meow(om,ind+1);
        swap(om[ind],om[i]);
    }
}
int main (){
    string om="abc";
    string ans;
    meow(om,0);
    return 0;
}