#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while(t--) {
    long long int n; cin >> n;
    if((n & (n-1)) != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  }
  return 0;
}