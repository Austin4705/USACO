//http://www.usaco.org/index.php?page=viewproblem2&cpid=1059
#include <bits/stdc++.h>
using namespace std;

int main() {
    std::vector<int> values;
    for(int i = 0; i < 7; i++){
        int t;
        cin >> t;
        values.push_back(t);
    }
    sort(values.begin(), values.end());
    cout << values[0] << " " << values[1] << " ";
    int c =  values[6] - values[1] - values[0];
    cout << c;
    return 0;
}
