#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    
    int zero = 0, one = 0, two = 0, three = 0, five = 0;
    int st = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 0) zero++;
        if(v[i] == 1) one++;
        if(v[i] == 2) two++;
        if(v[i] == 3) three++;
        if(v[i] == 5) five++;

        if(zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1) {
            st = i + 1;
            break;
        }
    }

    cout << st << endl;
  }
  return 0;
}