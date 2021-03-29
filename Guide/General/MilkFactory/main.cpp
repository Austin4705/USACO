#include <bits/stdc++.h>
using namespace std;

struct belt{
    int a;
    int b;
};

int main() {
    int n; cin >> n;
    //input everything into a belt Arr
    vector<belt> beltArr(n-1);
    for(int i = 0; i < n-1; i++){
        int ta;
        int tb;
        cin >> ta >> tb;
        beltArr[i].a = ta;
        beltArr[i].b = tb;
    }
    //for each station figure out if could theoretically work as a end point
    vector<bool> possibleAns(n, 0);
    for(int i = 0; i < n-1; i++){
        possibleAns[beltArr[i].b] = 1;
    }
    //make a list of all ending values that can work
    std::vector<int> endingValue;
    for(int i = 0; i < n; i++){
        if(possibleAns[i] == 1)
            endingValue.push_back(i);
    }
    //test each ending value
    for (int i = 0; i < endingValue.size(); ++i) {
        //make array of good numbers
        int endVal = endingValue[i];
        std::vector<bool> goodNum(n, 0);
        goodNum[endVal] = 1;

        //go through list if each number can bridge to a good number
        int iterations;
        do{
            iterations = 0;
            //for each belt arr
            for (int i = 0; i < n-1; ++i) {
                //make it good number and add to iterated
                if(goodNum[beltArr[i].b] == 1 && goodNum[beltArr[i].a] == 0){
                    iterations++;
                    goodNum[beltArr[i].a] == 1;
                }
            }
        }while (iterations != 0);

        //when iterated becomes 0 if all number are 1 in endingValue arr then good, if not then try next number
        bool checkVal = 1;
        for (int i = 0; i < goodNum.size(); i++) {
            if(goodNum[i] == 0){
                checkVal = 0;
            }
        }
        if (checkVal == 1){
           cout << endVal;
           exit(0);
        }
    }
    return 0;
}
