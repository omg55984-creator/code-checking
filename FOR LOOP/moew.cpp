#include<iostream>
#include<vector>
using namespace std;
void om(vector<int>& arr,vector<int>&ans,int i){
    if(i==arr.size()){
        for(int j =0;j<ans.size();j++){
            cout<<ans[j];

        }
        cout<<endl;
        return ;
    }
    ans.push_back(arr[i]);
    om(arr,ans,i+1);
    ans.pop_back();
     om(arr,ans,i+1);
}
int main(){
    vector <int> km ={1,2,3};
    vector <int> pk;
     om(km,pk,0);
     return 0;

}