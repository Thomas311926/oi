#include <bits/stdc++.h>
using namespace std;
typedef vector<int> num;
void upd(num &in, int conv) {
  int p = 0;
  for (int &i : in) {
    p++;
    if (i > conv) {
      if (p == in.size()) {
        in.resize(in.size() + 1);
      }
      in[p] += i / conv;
      in[p - 1] %= conv;
    }
  }
}
num add(num a, num b, int conv) {
  num ans;
  for (int i = 0; i < max(a.size(), b.size()); i++) {
    if (a.size() > b.size()) {
      if (b.size() - 1 < i) {
        ans.push_back(a[i]);
      } else {
        ans.push_back(a[i] + b[i]);
      }
    } else {
      if (a.size() - 1 < i) {
        ans.push_back(b[i]);
      } else {
        ans.push_back(a[i] + b[i]);
      }
    }
  }
  upd(ans, conv);
  return ans;
}
int main() {}
