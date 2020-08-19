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
   cin >> t;
   while (t--) {
       long long n;
       long long k;
       cin >> n >> k;
       long long xtra = n % k;
       if (xtra <= (long long)floor(k / 2)) {
           cout << n << endl;
       } else {
           cout<< (n - (xtra - (long long)floor(k / 2))) << endl;
       }
   }
}


