//http://www.usaco.org/index.php?page=viewproblem2&cpid=567
#include <bits/stdc++.h>
using namespace std;



struct fence {
    int num;
    char letter;
};

bool fenceComp(const fence & a, const fence & b) {
    return a.num < b.num;
}



int main() {
    ifstream cin("paint.in");
    ofstream cout("paint.out");

    vector<fence> posts(4);
    int a, b, c, d;
    cin >> a >> b >> c >> d;



    posts[0].letter = 'a';
    posts[0].num = a;

    posts[1].letter = 'b';
    posts[1].num = b;

    posts[2].letter = 'c';
    posts[2].num = c;

    posts[3].letter = 'd';
    posts[3].num = d;

    sort(posts.begin(), posts.end(), fenceComp);

    int length = 0;
    switch (posts[0].letter) {
        case 'a':
            if(posts[1].letter == 'b' || posts[1].num == posts[2].num){
                length = posts[1].num - posts[0].num;
                length += posts[3].num - posts[2].num;
            }
            else{
                length = posts[3].num - posts[0].num;
            }
            break;
        case 'b':
            if(posts[1].letter == 'a' || posts[1].num == posts[2].num){
                length = posts[1].num - posts[0].num;
                length += posts[3].num - posts[2].num;
            }
            else{
                length = posts[3].num - posts[0].num;
            }
            break;
        case 'c':
            if(posts[1].letter == 'd' || posts[1].num == posts[2].num){
                length = posts[1].num - posts[0].num;
                length += posts[3].num - posts[2].num;
            }
            else{
                length = posts[3].num - posts[0].num;
            }
            break;
        case 'd':
            if(posts[1].letter == 'c' || posts[1].num == posts[2].num){
                length = posts[1].num - posts[0].num;
                length += posts[3].num - posts[2].num;
            }
            else{
                length = posts[3].num - posts[0].num;
            }
            break;
    }

    cout << length;
    return 0;
}






//int main() {
//    ifstream cin("paint.in");
//    ofstream cout("paint.out");
//
//
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//
//    vector<int> johnPaint(2);
//    johnPaint[0] = a;
//    johnPaint[1] = b;
//
//    vector<int> bessiePaint(2);
//    bessiePaint[0] = c;
//    bessiePaint[1] = d;
//
//    sort(johnPaint.begin(), johnPaint.end());
//    sort(bessiePaint.begin(), bessiePaint.end());
//
//    //they dont connect
//    if(johnPaint[1] > bessiePaint[0] && bessiePaint[1] - bessiePaint[1] > johnPaint[0]){
//        int johnLength = johnPaint[1] - johnPaint[0];
//        int bessieLength = bessiePaint[1] - bessiePaint[0];
//        cout << (johnLength + bessieLength);
//    }
//    //they intersect
//    else{
//        vector<int> combined(4);
//        combined[0] = a;
//        combined[1] = b;
//        combined[2] = c;
//        combined[3] = d;
//        sort(combined.begin(), combined.end());
//        cout << (combined[3] - combined[0]);
//    }
//
//
//    return 0;
//}
