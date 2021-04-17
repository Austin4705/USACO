#include <bits/stdc++.h>
using namespace std;

int main() {
    //input everything
    int k, n;
    cin >> k >> n;
    vector<string> names(n, " ");
    map<string, int> wordIndex;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        names[i] = temp;
        wordIndex.insert(pair<string, int>(names[i], i));
    }
    //cout << wordIndex.fir;
    string papers[k][n];
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> papers[i][j];
        }
    }

    //make blank chart of ?
    char output[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(j == i)
                output[i][j] = 'B';
            else{
                output[i][j] = '?';
            }
        }
    }



    //for each person
    for (int p = 0; p < n; ++p) {
        string name = names[p];

        //search for name
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < n; ++j) {
                if(papers[i][j] == name){
                    //find first person that isn't alphabetically smaller before the name
                    //set all those people 0
                    if(j > 0){
                        bool flag = 1;
                        for (int l = j-1; l >= 0; --l) {
                            if(flag){
                                if(papers[i][l] > papers[i][l+1]){
                                    flag = 0;
                                    output[p][wordIndex.at(papers[i][l])] = '1';
                                }

                            }
                            else{
                                output[p][wordIndex.at(papers[i][l])] = '1';
                            }
                        }
                    }
                    //find the first person that isn't alphabetically larger after the name
                    //set all those people to 1
                    if(j < n){
                        bool flag = 1;
                        for (int l = j+1; l <= n-1; ++l) {
                            if(flag){
                                if(papers[i][l-1] > papers[i][l]){
                                    flag = 0;
                                    output[p][wordIndex[papers[i][l]]] = '0';
                                }
                            }
                            else{
                                output[p][wordIndex[papers[i][l]]] = '0';
                            }
                        }
                    }
                }

            }

        }

    }

    //output
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << output[i][j];
        }
        cout << "\n";
    }

    return 0;
}
