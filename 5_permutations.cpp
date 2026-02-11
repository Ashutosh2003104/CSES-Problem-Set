#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  
  if(n == 1){
    cout<<1;
  }
  else if(n == 2){
    cout<<"NO SOLUTION";
  }
  else if(n == 3){
    cout<<"NO SOLUTION";
  }
  
  else{
    vector<int> arr;
    for(long long i = 2; i <= n; i=i+2){
      arr.push_back(i);
    }
    for(long long i = 1; i <= n; i=i+2){
      arr.push_back(i);
    }
    for(long long x: arr){
      cout<<x<<" ";
    }
  }
  

  return 0;
    
}
