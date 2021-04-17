//http://www.usaco.org/index.php?page=viewproblem2&cpid=759
#include <bits/stdc++.h>
using namespace std;

struct rect{
    int x1, y1, x2, y2;
};
struct point{
    int x, y;
};
bool inside(rect rect1, rect rect2, point a){
    bool ans = true;
    if(!(a.x >= rect1.x1 && a.x <= rect1.x2))
        ans = false;
    if(!(a.y >= rect1.y1 && a.y <= rect1.y2))
        ans = false;
    if(!(a.x >= rect2.x1 && a.x <= rect2.x2))
        ans = false;
    if(!(a.y >= rect2.y2 && a.y <= rect1.y2))
        ans = false;
    return ans;
}
int calculate(rect billboard1, rect truck){
    vector<point> permutation1(16);
    for(int i = 0; i < 4; ++i){
        for(int j = i; j < 4; ++j){
            int x;
            int y;
            switch(i){
                case 0:
                    x = billboard1.x1;
                    break;
                case 1:
                    x = billboard1.x2;
                    break;
                case 2:
                    x = truck.x1;
                    break;
                case 3:
                    x = truck.x2;
                    break;
            }
            switch(j){
                case 0:
                    y = billboard1.y1;
                    break;
                case 1:
                    y = billboard1.y2;
                    break;
                case 2:
                    y = truck.y1;
                    break;
                case 3:
                    y = truck.y2;
                    break;
            }
            permutation1[(i+1) * (j+1)].x = x;
            permutation1[(i+1) * (j+1)].y = y;
        }
    }

    std::vector<point> points;
    //for every point if inside add to list
    for (int i = 0; i < 16; ++i) {
        if(inside(billboard1, truck, permutation1[i]))
            points.push_back(permutation1[i]);
    }
    //for every point combo find area and add to array
    vector<int> areaList;
    for (int i = 0; i < points.size(); ++i) {
        for (int j = i + 1; j < points.size(); ++j) {
            int x = abs(points[i].x - points[j].x);
            int y = abs(points[i].y - points[j].y);
            int area = x * y;
            areaList.push_back(area);
        }
    }
    sort(areaList.begin(), areaList.end());
    int area1 = areaList[areaList.size()-1];
    return area1;
}

int main() {
    //ifstream cin("billboard.in");
    //ofstream cout("billboard.out");

    rect billboard1, billboard2, truck;
    cin >> billboard1.x1 >> billboard1.y1 >> billboard1.x2 >> billboard1.y2;
    cin >> billboard2.x1 >> billboard2.y1 >> billboard2.x2 >> billboard2.y2;
    cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;
    //list of all possible points
    int bill1x = min(billboard1.x1, truck.x1) - max(billboard1.x2, truck.x2);
    int bill1y = min(billboard1.y1, truck.y1) - max(billboard1.y2, truck.y2);
    int area1 = 0;
    if(bill1y > 0 && bill1x > 0){
        area1 = bill1x * bill1y;
    }
    int bill2x = min(billboard2.x1, truck.x1) - max(billboard2.x2, truck.x2);
    int bill2y = min(billboard2.y1, truck.y1) - max(billboard2.y2, truck.y2);
    int area2 = 0;
    if(bill2y > 0 && bill2x > 0){
        area2 = bill2x * bill2y;
    }
    cout << area1 + area2;


//    int area1 = calculate(billboard1, truck);
//    int area2 = calculate(billboard2, truck);
//    cout << area1 + area2;
    return 0;
}
