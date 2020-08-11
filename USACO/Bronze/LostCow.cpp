#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include<algorithm>
using namespace std;
int main(){
     int xo, yo;
     cin >> xo>>yo;
     int sol = 0;
     int non = 1;
     int fin = 1;
     while(true) {
       if((fin == 1 && xo <= yo && yo <= xo + non) || (fin==-1 && xo - non <= yo && yo <= xo)){
         sol += abs(yo - xo);
         cout << sol << endl;
         break;
       }
       else{
         sol += non*2;
         non *= 2;
         fin *= -1;
       }
     }
}
