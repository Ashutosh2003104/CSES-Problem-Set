#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin>>n;
  vector<int> arr(n-1);
  for(long long i = 0; i < n-1; i++){
    cin>>arr[i];
  }
  long long sum = n*(n+1)/2;
  long long sum_arr = 0;
  for(long long i = 0; i < n-1; i++){
    sum_arr = sum_arr +arr[i];
  }
  cout<<sum - sum_arr;
  return 0;
}
