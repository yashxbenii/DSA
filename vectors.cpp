#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>My;// currently size 0
    cout<<My[0];
}

// longest subsequence
class my{
    public:
int solve(string a,string b,int i,int j){
    if (i >= a.size() || j >= b.size()) {
        return 0;
    }
int ans=0;
if(a[i]==b[j]){
    ans=1+solve(a,b,i+1,j+1);
}
else{
    ans=max(solve(a,b,i+1,j),solve(a,b,i,j+1));
}
return ans;
}
int longest_substring(string s1,string s2){
    return solve(s1,s2,0,0);
}
};


// stairs jump
int countways(int n){
    if(n==1 || n==2){
        return n;
    } 
    if(n==3){
        return 4;
    }
    int recall1=countways(n-1);
    int recall2=countways(n-2);
    int recall3=countways(n-3);

    int smallcal=recall1+recall2+recall3;
    return smallcal;
}

// adding two sorted array
#include <bits/stdc++.h>
using namespace std;

class my {
public:
    vector<int> merge2sortedarray(vector<int> v1, vector<int> v2) {
        int m = v1.size();
        int n = v2.size();
        vector<int> v(m + n);
        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (v1[i] <= v2[j]) {
                v[k++] = v1[i++];
            } else {
                v[k++] = v2[j++];
            }
        }

        while (i < m) {
            v[k++] = v1[i++];
        }

        while (j < n) {
            v[k++] = v2[j++];
        }

        return v;
    }
};

int main() {
    my meow;
    vector<int> a = {2,5,8,11};
    vector<int> b = {1,6,9,10};


    vector<int> result = meow.merge2sortedarray(a, b);

    for (int i : result) {
        cout << i << " ";
    }
}