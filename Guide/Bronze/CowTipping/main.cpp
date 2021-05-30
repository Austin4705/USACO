//http://www.usaco.org/index.php?page=viewproblem2&cpid=689
//#include <z3.h>
#include "bits/stdc++.h"
using namespace std;


int main() {
    ifstream cin("cowtip.in");
    ofstream cout("cowtip.out");

    int n; cin >> n;
    char tipArray[n+1][n+1];
    int x = n, y = n;
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n; k++)
            cin >> tipArray[i+1][k+1];
    }
    bool tipArrayB[n+1][n+1];
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n; k++) {
            if (tipArray[i + 1][k + 1] == '1')
                tipArrayB[i + 1][k + 1] = 1;
            if (tipArray[i + 1][k + 1] == '0')
                tipArrayB[i + 1][k + 1] = 0;
        }
    }
    //all towards here is input

    int c = 0;//counter for ans
    for (int i = n; i > 0; --i) {
        for (int j = n; j > 0; --j) {//from bottom corner up for each spot
            if(tipArrayB[i][j] == 1){//if its tipped
                c++;//add to counter
                for (int ii = i; ii > 0; --ii) {
                    for (int jj = j; jj > 0; --jj) {//invert everything from that point up
                        tipArrayB[ii][jj] = !tipArrayB[ii][jj];
                    }
                }
            }
        }
    }
    cout << c;
    return 0;
}



//void flipArr(char ** arr, int x, int y){
//    for (int i = y; i == 0; --i) {
//        for (int j = x; j == 0; --j) {
//            arr[x][y] = ! arr[x][y];
//        }
//    }
//}

//    bool invert = 1;
//    int c = 0;
//    for (int i = n; i > 0; --i) {
//        for (int j = n; j > 0; --j) {
//                bool x = (bool)(((int)tipArray[i][j])-'0');
//                if (x == invert){
//                    invert = !invert;
//                    c++;
//                }
//        }
//    }
//            else if(!invert){
//                if (tipArray[i][j] == '1'){
//                    invert = !invert;
//                    c++;
//                }
//            }

//            if(invert){
//                if (tipArray[i][j] == '0'){
//                    invert = !invert;
//                    c++;
//                }
//            }
//            else if(!invert){
//                if (tipArray[i][j] == '1'){
//                    invert = !invert;
//                    c++;
//                }
//            }

  // flipArr((char**)&tipArray[0][0], n, n);
//    while(1){
//
//
//
//    }


   // cout << tipArray[1][1];
