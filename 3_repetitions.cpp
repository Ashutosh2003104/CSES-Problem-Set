#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  long long current_length = 1;
  long long max_length = 1;
  for(long long i = 1; i < s.length(); i++){
    if(s[i] == s[i-1]){
      current_length = current_length +1;
      max_length = max(max_length, current_length);
    }
    else{
      current_length = 1;
    }

  }
  cout<<max_length;
  return 0;
    
}
