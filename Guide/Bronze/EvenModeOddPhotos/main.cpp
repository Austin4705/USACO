#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> list (0, n);
    for (int i = 0; i < n; ++i) {
        cin >> list[i];
    }
    sort(list.begin(), list.end());



    return 0;
}
