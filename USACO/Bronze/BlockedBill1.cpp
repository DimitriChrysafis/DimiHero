#include <algorithm>
#include <array>
#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char* argv[]) {
    using namespace std;
    int r[3][4];
    for(int i = 0; i < 3; i++){
        for(int y = 0; y < 4; y++){
            cin >> r[i][y];
        }
    }
    int area[2];
    for(int o = 0; o < 2; o++){
        int x1 = r[o][0];
        int y1 = r[o][1];
        int x2 = r[o][2];
        int y2 = r[o][3];
        area[o] = (x2 - x1)*(y2- y1);
    }
    
        int it[2][4];
        for(int i = 0; i < 2; i++){
        it[i][0] = max(r[i][0], r[2][0]);
        it[i][1] = max(r[i][1], r[2][1]);
        
        it[i][2] = min(r[i][2], r[2][2]);
        it[i][3] = min(r[i][3], r[2][3]);
        }
       int overlap[3];
    for(int o = 0; o < 2; o++){
        int x1 = it[o][0];
        int y1 = it[o][1];
        int x2 = it[o][2];
        int y2 = it[o][3];
        if(x2>x1 && y2>y1){
         overlap[o] = (x2 - x1)*(y2 - y1);
        }else{
            overlap[o] = 0;
        }
    }
    
    int result = area[0]+area[1]-overlap[0]-overlap[1];
    // cout << area[0] << " " << area[1] << " " << overlap[0] << " " <<overlap[1] << endl;
    cout << result;
    
    }


