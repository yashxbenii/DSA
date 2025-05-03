// askai value (48-57,57-90,90-128)
// left shift num*=2^shift
// right shift num/=2^shift

// string to binary
for(int i=n-1;i>=0;i--){
    num+=(base*s[i]);
    base*=s;
}

// binary to string
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
      string decToBinary(int n) {
         string res="";
         while(n>0){
             int rem=n%2;
             res+=(rem+48);
             n/=2;
         }
         reverse(res.begin(), res.end());
         return res;
      }
  };
int main(){
    Solution s2;
    cout<<s2.decToBinary(7);
}

// swap two numbers using bit manuplation
a=a^b;
b=a^b;
a=a^b;

// toggle ith bit
 (x&i!=0)



