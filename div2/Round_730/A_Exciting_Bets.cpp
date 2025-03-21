#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while(t--) {
    long long int a, b; cin >> a >> b;
    long long int diff = abs(a - b);
    if(a == b) cout << "0 0"<< endl;
    else {
        cout << diff << " " << min(diff - (a%diff), a % diff) << endl;
    }
  }
  return 0;
}