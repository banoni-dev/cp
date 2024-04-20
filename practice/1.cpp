#include <bits/stdc++.h>
using namespace std;


int main(){
  int t; cin>>t;
  while(t--){
    int a,b; cin>>a>>b;
    if (a > b)
      if (a % b == 0) cout << 0 << endl;
      else cout << (a/b +1) *b - a << endl;
    else{
      cout << b - a << endl;
    } 
  }
  return 0;
}
