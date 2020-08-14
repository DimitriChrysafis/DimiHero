#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
 while(t--){
     int n, a, b, c, d;
     cin >> n;
     cin >> a;
     cin >> b;
     cin >> c;
     cin >> d;
     ll u = a + b;
     ll v = a - b;
     ll x = c + d;
     ll y = c - d;
     if(n * u < y || n * v > x) {
         cout << "NO" << endl;
     }
     else {
         Cout << "Yes" << endl;
     }
 }
}
