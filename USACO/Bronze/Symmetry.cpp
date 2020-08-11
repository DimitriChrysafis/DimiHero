#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
    int x;
    cin >> x;
    int cownter = 0;
    if(x % 2 == 0){
        cout << 0;
        return 0;
    }
    int y;
    cin >> y;
    if(y % 2 == 0){
        cout << 0;
        return 0;
    }
    int m = 1;
    for(;;){
        if((y % 2 == 1) && (x % 2 == 1)){
            x = x/2;
            y = y/2;
            cownter += 1*m;
            m *= 4;
        }else{
            break;
        }
    }
    cout << cownter;
}



