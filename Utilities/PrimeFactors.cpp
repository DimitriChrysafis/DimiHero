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
int countDivisors(ll n){
    int cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i){
                cnt++;
            }
            else{
                cnt = cnt + 2;
            }
        }
    }
    return cnt;
}
int main (){
     ll Number, p = 1, j, d, c = 0;
     cout << "Enter a positive integer: " << endl;
       cin >> Number;
       if(Number > 9999999999999999){
                  cout << "please input a smaller number";
                  cout << endl;
                  return 0;
              }
      while (p <= Number){
          d = 0;
          if(Number % p == 0){
              j = 1;
              while(j <= p){
                  if(p % j == 0){
                      d++;
                  }
                  j++;
              }
              if(d == 2){
                  cout << "One prime factor is " << p << endl;
                      this_thread::sleep_for(chrono::milliseconds(10) );
                  c++;
              }
          }
          p++;
      }
    cout << "there are " << c << " prime factors" << endl;
}

