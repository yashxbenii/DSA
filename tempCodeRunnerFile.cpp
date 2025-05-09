#include<bits/stdc++.h>       //O(V+E)
using namespace std;

class graph{
    public:
//Adjacency Matrix        O(V^2)
unordered_map<int,vector<int>>Graph;
graph(){
    Graph={};
}
void addedge(int src,int des,bool directed){
    Graph[src].push_back(des);
    if(directed==false) Graph[des].push_back(src);
}
void printadjlist(){
    for(auto it: Graph){
        cout<<it.first<<" ";
        for(auto node: it.second){
            cout<<"node"<<" ";
        }
        cout<<endl;

    }
}
};
int main(){
    graph g;
    g.addedge(1,2,0);
    g.addedge(1,0,0);
    g.addedge(1,6,0);
    g.addedge(0,6,0);
    g.addedge(0,4,0);
    g.addedge(2,5,0);
    g.addedge(2,3,0);
    g.addedge(3,4,0);
    g.addedge(6,4,0);
    g.addedge(5,3,0);

    g.printadjlist();



}