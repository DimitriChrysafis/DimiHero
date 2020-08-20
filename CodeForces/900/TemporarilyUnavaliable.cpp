#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
      int t;
    int a;
    int b;
    int x;
    int r;
    int c;
    int d;
    int y;
    int z;
      cin >> t;
      while(t--){
          cin >> y;
          cin >> z;
          cin >> x;
          cin >> r;
          a = min(y,z);
          b = max(y,z);
          c = x-r;
          d = x+r;
          if(c <= a and b <= d){
              cout << 0 <<endl;
          }
          else if(c <= a and d >= a){
              cout << b - d <<endl;
          }
          else if(c <= b and d >= b){
              cout << c - a <<endl;
          }
          else if(a <= c and b >= d){
              cout << c - a + b - d << endl;
          }
          else{
              cout << b - a <<endl;
          }
      }
}


