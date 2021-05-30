#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("promote.in");
    ofstream cout("promote.out");

    int b1, b2, s1, s2, g1, g2, p1, p2;
    cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;

    int goldPlat = p2 - p1;
    int silverGold = g2 - g1 + goldPlat;
    int bronzeSilver = s2 - s1 + silverGold;

    cout << bronzeSilver << "\n" << silverGold << "\n" << goldPlat;

    return 0;
}

//int b3 = b2 - b1;
//int totalBefore = b1 + s1 + g1 + p1;
//int totalAfter = b2 + s2 + g2 + p2;
//int newPeople = totalBefore - totalAfter;
//newPeople -= b3;