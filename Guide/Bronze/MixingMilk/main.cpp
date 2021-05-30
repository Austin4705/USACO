//http://www.usaco.org/index.php?page=viewproblem2&cpid=855
#include <bits/stdc++.h>
using namespace std;

int main() {

    ifstream cin("mixmilk.in");
    ofstream cout("mixmilk.out");

    int a1, a2, b1, b2, c1, c2;
    cin >> a2 >> a1 >> b2 >> b1 >> c2 >> c1;

    int totalMilk = a1 + b1 + c1;

    if(a2 >= totalMilk){
        cout << 0 << "\n" << totalMilk << "\n" << 0;
        return 0;
    }

    totalMilk -= a2;

    if(b2 >= totalMilk){
        cout << 0 << "\n" << a2 << "\n" << totalMilk;
        return 0;
    }

    totalMilk -= b2;

    if(c2 >= totalMilk){
        cout << totalMilk << "\n" << a2 << "\n" << b2;
        return 0;
    }

    cout << c2 << "\n" << a2 << "\n" << b2;
    return 0;
}
