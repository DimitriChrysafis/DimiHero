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
   while (t--) {
       int n;
       int k;
       cin >> n;
       cin >> k;
     for (int i = 2; i <= n; i++) {
       if (n % i ==0) {
         if (i==2){
             cout<< n + k * 2 <<endl;
       }
         else {
             cout<< n + i + 2 * ( k - 1 )<<endl;
           }
         break;
       }
     }
   }
}
