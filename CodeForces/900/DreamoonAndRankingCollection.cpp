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
    int t;
    cin >> t;
   while(t--) {
       int n, x;
       cin >> n >> x;
 
       bool arr[101] = {0};
 
       for (int i = 0; i < n; i++) {
           int a;
           cin >> a;
           arr[a] = true;
       }
       int lol = 0;
       for (int i = 1; i <= 100; i++) {
           lol = i;
           if (!arr[i] and x-- <= 0)
               break;
       }
       cout << lol + x << endl;
       // hi maria!
   }
}
