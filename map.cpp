// order_map     O(log n)
// order_set

// unorder_map   O(1)
// unorder_set    

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    unordered_map<int,string> my;  //create
    my[12]="abscyus";
    my[13]="aboloy ";  // insert

    my[13]="yoyo_boi"; // update

    cout<<my[12]<<endl;;
    cout<<my[13]<<endl;;

    // my.erase(12);   delete

    if(my.find(14)==my.end()){    // search
        cout<<"map is ended"<<endl; 
    }  

    for(auto it:my){
        cout<<it.first<<" "<<   // to access of key 
        it.second<<endl;        // to access value
    }
    return 0;
}

// ques

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    unordered_map<char,int> um;  
    string s="xyzerfhbxyz";
    for(auto c: s){
        if(um.find(c)==um.end()){
            um[c]=1;
        }
        else{
            um[c]++;
        }
    }
    for(auto it:um){
        cout<<it.first<<" "<<it.second<<endl;
    }
}