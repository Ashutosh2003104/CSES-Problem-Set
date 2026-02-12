#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  unordered_map<char,int> map;
  for(char ch:s){
    map[ch]++;
  }
  int count_odd = 0;
  char odd_char ;
  for(auto &it: map){
    if(it.second%2 != 0){
      count_odd++;
      odd_char = it.first;
    }
  }
  if(count_odd > 1){
    cout<<"NO SOLUTION";
    return 0;
  }

  vector<char> chars;
  for(auto &p : map){
    chars.push_back(p.first);

  }
  sort(chars.begin(),chars.end());
  string left = "";
  string middle = "";

  for(auto p : chars) {
    int count = map[p];

    left += string(count / 2,p);

    if(count % 2 != 0) {
        middle = string(1, p);
    }
  }
  string right = left;
    reverse(right.begin(), right.end());

    cout << left + middle + right << "\n";

  

  return 0;
    
}
