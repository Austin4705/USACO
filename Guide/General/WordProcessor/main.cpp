#include <bits/stdc++.h>
#include <string>
using namespace std;



//int main() {
//    //ifstream cin("word.in");
//    //ofstream cout("word.out");
//    int n, k; cin >> n >> k;
//    std::vector<std::string> words;
//
//    std::string input = "";
//
////    for(){
////        cin >> input;
////        words.push_back(input);
////    }
////
////    while(cin >> input){
////        words.push_back(input);
////    }
//
//    string output = "";
//    cin >> output;
//
//    for(int i = 1; i < n; i++){
//            string s;
//            cin >> s;
//
//            if((output + s).length() > k){
//                cout << output <<"\n";
//                output = s;
//            }
//            else{
//                output += " " + s;
//            }
//    }
//    cout << output;
//
//    return 0;
//}
//
//





int main() {
    ifstream cin("word.in");
    ofstream cout("word.out");
    int n, k;
    cin >> n >> k;

    std::vector<string> words;

    std::string input = "";
    while (cin >> input) {
        words.push_back(input);
    }

    string output = "";
    for (int i = 0; i < words.size(); i++) {
        if (output == "")
            output = words[i];
        if (k <= output.length() ) {
            cout << output << "\n";
            output = "";
            continue;
        }
        if (output.length() + words[i + 1].length() > k) {
            cout << output << "\n";
            output = i;
            if (k<= output.length() ) {
                cout << output << "\n";
                output = "";
                continue;
            }
        } else {
            output += " " + i;
        }
    }
        if(output.length() >= 1)
            cout << output;


//        } else {
//            if (k < (output + i).length()) {
//                cout << output << "\n";
//                output = i;
//            } else {
//                output += " " + i;
//            }
//        }
//    }


}










//    int Word_Length = 0;
//
//    for (int i = 0; i < n; ++i){
//        string S;
//        cin >> S; //Read the next word.
//        //Calculate the new length if we put the new word into the current line.
//        Word_Length += S.length();
//        if (Word_Length <= k) { //If it still satisfies the constraint then print that word.
//            //If it is not the first ever word then we print a space character
//            if(i) cout << " ";
//            cout << S;
//        }
//        else { //Else we create a new line and print the word on that line.
//            cout << "\n" << S;
//            Word_Length = S.length();
//        }
//    }
//

//
//    std::vector<string> words;
//
//    std::string input = "";
//    while(cin >> input){
//        words.push_back(input);
//    }
//
//    string output = "";
//    for(auto i : words){
//        if(output == ""){
//            output = i;
//        }
//        else{
//            if(k <= (output + i).length()){
//                cout << output << "\n";
//                output = i;
//            }
//            else{
//                output += " " + i;
//            }
//        }
//    }
//    cout << output;

//
//int wordSizeCounter = 0;
//string s1;
//cin >> s1;
//cout << s1;
//
//for(int i = 1; i < n; i++){
//    string s;
//    cin >> s;
//    if(wordSizeCounter + s.length() >= k){
//        wordSizeCounter = s.length();
//    }
//    else{
//        wordSizeCounter += s.length();
//        s1 +=
//    }
//}
//    return 0;
//}




//int main() {
//    ifstream cin("word.in");
//    ofstream cout("word.out");
//    int n, k; cin >> n >> k;
//    std::vector<string> words;
//
//    std::string input = "";
//    while(cin >> input){
//        words.push_back(input);
//    }
//
//    string output = "";
//    for(auto i : words){
//        if(output == ""){
//            output = i;
//        }
//        else{
//            if((output + i).length() > k){
//                cout << output <<"\n";
//                output = i;
//            }
//            else{
//                output += " " + i;
//            }
//        }
//    }
//    cout << output;
//
//    return 0;
//}