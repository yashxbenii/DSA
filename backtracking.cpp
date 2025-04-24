#include<iostream>
#include<vector>
using namespace std;

void printsubsets(vector<int>&arr,vector<int>&ans,int i){
    if(i==arr.size()){
        for(int val: ans){
            cout<<val;
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printsubsets(arr,ans,i+1);

    ans.pop_back();  // backtrack
    printsubsets(arr,ans,i+1);

}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;
    printsubsets(arr,ans,0);
}