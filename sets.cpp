//takes only unique value

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    unordered_set<char> yo;
    // yo.insert('A');
    // yo.insert('B');

    if(yo.find('C')==yo.end()){
        cout<<"Not found"<<endl;

    }
    yo.erase('A');

    // same question with sets
    string s="xyzerfhbxyz";
    for(auto i:s){
        yo.insert(i);
    }

    if(yo.find('A')==yo.end()){
        cout<<"Not found"<<endl;
    }
    for(auto c:yo){
        cout<<c<<" "<<endl;

    }
    cout<<"size of sets is"<<yo.size();
}