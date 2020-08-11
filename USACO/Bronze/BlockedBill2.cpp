#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
bool checing(int x1, int y1, int x2, int y2, int x3, int y3) {
        return x1 >= x2 && x1 <= x3 && y1 >= y2 && y1 <= y3;
    }
int main(){
    int x1;
    int x2;
    int x3;
    int x4;
    int y1;
    int y2;
    int y3;
    int y4;
       cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
       int c=0;
    if(checing(x1, y1, x3, y3, x4, y4)){
           c++;
    }
    if(checing(x1, y2, x3, y3, x4, y4)){
           c++;
    }
    if(checing(x2, y1, x3, y3, x4, y4)){
           c++;
    }
    if(checing(x2, y2, x3, y3, x4, y4)){
           c++;
    }
       if( c < 2){
           cout<< (x2 - x1) * ( y2 - y1 );
       }else if(c == 4){
           cout << 0;
       }
       else {
               int x5 = max(x1, x3);
               int x6= min(x2, x4);
               int y5 = max(y1, y3);
               int y6= min(y2, y4);
         cout << (abs(x2 - x1)) * abs((y2 - y1))- abs((x6 - x5)*abs((y6 - y5)));
       }
}
