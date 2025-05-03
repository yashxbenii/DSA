// recursion
// function calling itself 
// base case is required so that we don't go in an infinte loop


// print 1 to n
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Myclass{
    public:
    void print(int n){
        if(n==0) return; 
        print(n-1);
        cout<<n<<" "<<endl;
    }
};
int main(){
    Myclass c;
    c.print(10);
}

// sum of all elements
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class My{
    public:
    int sum(vector<int>&num,int index){
        if(index==num.size()) return 0;
        return num[index]+sum(num,index+1);
    }
};
int main(){
    My m;
    vector<int>num;
    num={2,4,5,3,2,6,3,7,8};
    cout<<m.sum(num,0);
}

// gcd 
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Myi{
    public:
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
};
int main(){
    Myi i;
    cout<<i.gcd(76,24);
}









