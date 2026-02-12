#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int from, int helper, int to) {

    if (n == 0) return;

    hanoi(n - 1, from, to, helper);

    cout << from << " " << to << "\n";

    hanoi(n - 1, helper, from, to);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long moves = (1LL << n) - 1;
    cout << moves << "\n";

    hanoi(n, 1, 2, 3);

    return 0;
}
