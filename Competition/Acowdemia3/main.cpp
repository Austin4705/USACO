#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
char input[n+1][m+1];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int temp;
            cin >> temp;
            input[i][j] = temp;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(input[i][j] == 'G')
                cout << "hi";
        }
    }
    std::cout << "Hello World";
}


















//
//class friends{
//public: friends(int a, int a2, int b, int b2){
//        ax = a;
//        ay = a2;
//        bx = b;
//        by = b2;
//    }
//    int ax;
//    int ay;
//    int bx;
//    int by;
//};
//
//void appendArr(int a, int a2, int b, int b2, int i, int j, char * ptr, int m);
//
//vector<friends> friendPairs;
//int ans = 0;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    char pasture[n+1][m+1];
//    for (int i = 1; i < n; ++i) {
//        for (int j = 1; j < m; ++j) {
//            cin >> pasture[i][j];
//        }
//    }
//
//
//    //formulate all possible vertical pairs
//    for (int i = 1; i < n; ++i) {
//        for (int j = 1; j < m; ++j) {
//            if(pasture[i][j] == 'G'){
//                for (int k = 0; k < 6; ++k) {
//                    if(pasture[i][j] == 'G'){
//                        switch (k) {
//                            case 1:
//                                if(pasture[i][j] == 'G' && pasture[i][j-1] == 'C' && pasture[i][j+1] == 'C')
//                                appendArr(i, j - 1, i - 1, j, i, j, (char*)pasture, m);
//                                break;
//                            case 2:
//                                if(pasture[i][j] == 'G' && pasture[i][j-1] == 'C' && pasture[i-1][j] == 'C')
//                                appendArr(i, j - 1, i, j + 1, i, j, (char*)pasture, m);
//                                break;
//                            case 3:
//                                if(pasture[i][j] == 'G' && pasture[i][j+1] == 'C' && pasture[i-1][j] == 'C')
//                                appendArr(i, j - 1, i + 1, j, i, j, (char*)pasture, m);
//                                break;
//                            case 4:
//                                if(pasture[i][j] == 'G' && pasture[i-1][j] == 'C' && pasture[i][j+1] == 'C')
//                                appendArr(i - 1, j, i, j + 1, i, j, (char*)pasture, m);
//                                break;
//                            case 5:
//                                if(pasture[i][j] == 'G' && pasture[i-1][j] == 'C' && pasture[i+1][j] == 'C')
//                                appendArr(i - 1, j, i + 1, j, i, j, (char*)pasture, m);
//                                break;
//                            case 6:
//                                if(pasture[i][j] == 'G' && pasture[i+1][j] == 'C' && pasture[i][j+1] == 'C')
//                                appendArr(i + 1, j, i, j + 1, i, j, (char*)pasture, m);
//                                break;
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    cout << ans;
//
//    return 0;
//}
//
//void appendArr(int a, int a2, int b, int b2, int i, int j, char * ptr, int m){
//    //check for no duplicates
//    for (auto x : friendPairs) {
//        if(x.ax == a && x.ay == a2 && x.bx == b && x.by == b2)
//            return;
//    }
//    for (auto x : friendPairs) {
//        if(x.ax == b && x.ay == b2 && x.bx == a && x.by == a2)
//            return;
//    }
//
//    //add to friend pair list
//    friends temp(a, a2, b, b2);
//    friendPairs.push_back(temp);
//
//    //erase grass square
//    *(ptr+i*m+j) = '.';
//
//    //add to ans
//    ans++;
//}

//    friends tempFriend(i, j-1, i, j+1);
//    friendPairs.push_back(tempFriend);



//if(pasture[i][j] == 'G'){
//                int l = 0, r = 0, u = 0, d = 0;
//                //left
//                if(j > 1){
//                    if(pasture[i][j-1] == 'C'){
//                        l = 1;
//                    }
//                }
//                //right
//                if(j < m-1){
//                    if(pasture[i][j+1] == 'C'){
//                        r = 1;
//                    }
//                }
//                //top
//                if(i > 1){
//                    if(pasture[i-1][j] == 'C'){
//                        u = 1;
//                    }
//                }
//                //bottom
//                if(i < n-1){
//                    if(pasture[i+1][j] == 'C'){
//                        d = 1;
//                    }
//                }
//                int sum = l + r + u + d;
//                if(sum >= 2){
//                    if(l){
//                        if(u) {
//                            appendArr(i, j-1, i-1, j);
//                            continue;
//                        }
//
//                        if(r) {
//                            appendArr(i, j - 1, i, j + 1);
//                            continue;
//                        }
//                        if(d) {
//                            appendArr(i, j - 1, i + 1, j);
//                            continue;
//                        }
//                    }
//                    if(u){
//                        if(r) {
//                            appendArr(i - 1, j, i, j + 1);
//                            continue;
//                        }
//                        if(d) {
//                            appendArr(i - 1, j, i + 1, j);
//                            continue;
//                        }
//                    }
//                    if(d){
//                        if(r) {
//                            appendArr(i + 1, j, i, j + 1);
//                            continue;
//                        }
//                    }
//                }
//            }












//
//
//                if(j > 1){
//                    //left up
//                    if(i > 1){
//
//                    }
//                    //left right
//                    if(j < m-1){
//
//                    }
//                    //left down
//                    if(i < i-1){
//
//                    }
//                }
//                if(i > 1) {
//                    //top right
//
//                    //top bottom
//                    if(i < i-1){
//
//                    }
//                }
//                if(j < m-1)
//                {
//                    //right bottom
//                    if(i < i-1){
//
//                    }
//                }




//formulate all possible vertical pairs
//    for (int i = 1; i < n; ++i) {
//        for (int j = 2; j < m-1; ++j) {
//            if(pasture[i][j] == 'G' && pasture[i][j-1] == 'C' && pasture[i][j+1] == 'C'){
//                friends tempFriend(i, j-1, i, j+1);
//                friendPairs.push_back(tempFriend);
//            }
//        }
//    }
//    //for all possible top pairs
//    for (int i = 1; i < n-1; ++i) {
//        for (int j = 1; j < m; ++j) {
//            if(pasture[i][j] == 'G' && pasture[i][j-1] == 'C' && pasture[i-1][j] == 'C'){
//                friends tempFriend(i, j-1, i-1, j);
//                friendPairs.push_back(tempFriend);
//            }
//            if(pasture[i][j] == 'G' && pasture[i][j+1] == 'C' && pasture[i-1][j] == 'C'){
//                friends tempFriend(i, j+1, i-1, j);
//                friendPairs.push_back(tempFriend);
//            }
//        }
//    }
//
//    //for all possible bottom pairs
//    for (int i = 2; i < n; ++i) {
//        for (int j = 1; j < m; ++j) {
//            if(pasture[i][j] == 'G' && pasture[i-1][j] == 'C' && pasture[i][j+1] == 'C'){
//                friends tempFriend(i-1, j, i, j+1);
//                friendPairs.push_back(tempFriend);
//            }
//            if(pasture[i][j] == 'G' && pasture[i+1][j] == 'C' && pasture[i][j+1] == 'C'){
//                friends tempFriend(i+1, j, i, j+1);
//                friendPairs.push_back(tempFriend);
//            }
//        }
//    }
//
//
//    //formulate all possible horizontal and vertical
//    for (int i = 2; i < n-1; ++i) {
//        for (int j = 1; j < m; ++j) {
//            if(pasture[i][j] == 'G' && pasture[i-1][j] == 'C' && pasture[i+1][j] == 'C'){
//                friends tempFriend(i+1, j, i-1, j);
//                friendPairs.push_back(tempFriend);
//            }
//        }
//    }
