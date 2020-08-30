// https://github.com/DimitriChrysafis/DimiHero
// https://www.dimitri.page/
// https://dimitrichrysafis.wixsite.com/mysite
// https://dimitric.weebly.com/
#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#include <math.h>
#define ll long long int
using namespace std;
void prm(ll n) {
   while (n % 2 == 0){
       cout << 2 << "*";
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         cout << i << "*";
         n = n/i;
      }
   }
    if (n > 2){
        cout << n;
    }
    cout << endl;
}
int main(){
   ll n;
    cin >> n;
   prm(n);
}

