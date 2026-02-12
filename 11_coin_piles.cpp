#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
      long long y, x;
      cin >> x >> y;
      if((x+y)%3 == 0 && max(x,y) <= 2*min(x,y)){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }
        
    }

    return 0;
}
