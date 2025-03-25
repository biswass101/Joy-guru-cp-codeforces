#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
  int t; cin >> t;
  while(t--) {
    ll n; cin >> n;
    if(n < 6) {
        cout << 15 << endl;
        continue;
    }
    if(n % 2 != 0) n++;
    cout << (ll)(n * (2.5)) << endl;
  }
  return 0;
}