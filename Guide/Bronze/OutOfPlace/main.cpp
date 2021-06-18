#include "bits/stdc++.h"
using namespace std;

int main() {
    //ifstream cin("outofplace.in");
    //ofstream cout("outofplace.out");

    int n; cin >> n;
    int list[n];
    for (int i = 0; i < n; ++i) {
        cin >> list[i];
    }

    int b; //bessie index
    for (int i = 1; i < n; ++i) {
        if(list[i] < list[i-1]){
            b = i;
            break;
        }
    }

    int bl;
    for (int i = 1; i < n; ++i) {
        if(list[b] < list[i]  && list[b] >= list[i-1]){
            bl = i;
            break;
        }
    }

    int splicedList[abs(b - bl)];
    int c = 0;
    if(bl < b){
        for (int i = bl ; i < b; ++i) {
            splicedList[c] = list[i];
            c++;
        }
    }
    //if(bl > b)
    else{
        for (int i = b; i < bl; ++i) {
            splicedList[c] = list[i];
            c++;
        }
    }

    int r = 1;
    int arrSize = sizeof(splicedList)/sizeof(splicedList[0]);
    for (int i = 1; i < arrSize; ++i) {
        if(splicedList[i] != splicedList[i-1]){
            r++;
        }
    }
    cout << r;


    return 0;
}
