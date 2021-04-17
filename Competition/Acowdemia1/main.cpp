#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, l;
    cin >> n >> l;
    vector<int> citations(n, 0);
    for(int i = 0; i < n; ++i){
        cin >> citations[i];
    }

    sort(citations.rbegin(), citations.rend());

    for (int i = n; i > 0; --i) {
        int countDownL = l;
        int total = 0;
        for (int j = 0; j < n; ++j) {
            if(citations[j] >= i){
                total++;
            }
            else{
                if(countDownL > 0){
                    if((citations[j]+1) >= i){
                        total++;
                        countDownL--;
                    }
                    else{
                        break;
                    }
                }
            }
        }

        if(total >= i){
            cout << i;
            exit(0);
        }
    }
    cout << "dfkng";
    return 0;
}


//4 5
//2 100 2 3
























//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//
//    int n, l;
//    cin >> n >> l;
//    vector<int> citations(n, 0);
//    for(int i = 0; i < n; ++i){
//        cin >> citations[i];
//    }
//
//    sort(citations.rbegin(), citations.rend());
//
//    for (int i = 0; i < n; ++i) {
//        if(citations[i] > n){
//            continue;
//        }
//        int countDownL = l;
//        int total = 0;
//        for (int j = 0; j < n; ++j) {
//            if(citations[j] >= citations[i]){
//                total++;
//            }
//            else{
//                if(countDownL > 0){
//                    if((citations[j]+1) >= citations[i]){
//                        total++;
//                        countDownL--;
//                    }
//                    else{
//                        break;
//                    }
//                }
//            }
//        }
//
//        if(total >= citations[i]){
//            cout << citations[i];
//            exit(0);
//        }
//    }
//
//
//    return 0;
//}
//
//
////4 5
////2 100 2 3
