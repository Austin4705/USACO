//http://www.usaco.org/index.php?page=viewproblem2&cpid=939
#include <bits/stdc++.h>
using namespace std;

struct xy{
    int x = 0;
    int y = 0;
};

int main() {
    ifstream cin("buckets.in");
    ofstream cout("buckets.out");
    string data[10];
    xy barn;
    xy lake;
    xy rock;

    for(int i = 0; i < 10; i++){
        string s;
        getline(cin, s);
        data[i] = s;
    }
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            if(data[y][x] == 'B'){
                barn.x = x;
                barn.y = y;
            }
            if(data[y][x] == 'L'){
                lake.x = x;
                lake.y = y;
            }
            if(data[y][x] == 'R'){
                rock.x = x;
                rock.y = y;
            }
        }
    }
    int dist_bl = abs(barn.x - lake.x) + abs(barn.y - lake.y);
    if (barn.y == lake.y && ((rock.x > barn.x && rock.x < lake.x) || (rock.x > lake.x && rock.x < barn.x)) && barn.y == rock.y) {
        cout << dist_bl + 1 << "\n";
        //cout << 1;
    }
    else if (barn.x == lake.x && ((rock.y > barn.y && rock.y < lake.y) || (rock.y > lake.y && rock.y < barn.y)) && barn.x == rock.x){
        cout << dist_bl + 1 << "\n";
        //cout << 1;
    }
    else {
        cout << dist_bl - 1 << "\n";
        //cout << 0;
    }
}
