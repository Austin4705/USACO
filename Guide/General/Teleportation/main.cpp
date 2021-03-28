//http://www.usaco.org/index.php?page=viewproblem2&cpid=807
#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream cin("teleport.in");
    ofstream cout("teleport.out");
    int a, b, x, y; cin >> a >> b >> x >> y;
    int answer;
    answer = min(abs(a-b), (abs(a-x) + abs(b-y)));
    answer = min(answer, abs(a-y) + abs(b-x));
    cout << answer;
    return 0;
}
