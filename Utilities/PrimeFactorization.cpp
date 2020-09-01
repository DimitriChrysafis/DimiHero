// https://github.com/DimitriChrysafis/DimiHero
// https://www.dimitri.page/
// https://dimitrichrysafis.wixsite.com/mysite
// https://dimitric.weebly.com/
#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <math.h>
#define ll long long int
#define pb push_back
using namespace std;
vector<int> v;
void prm(ll n) {
   while (n % 2 == 0){
       v.pb(2);
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
          v.pb(i);
         n = n/i;
      }
   }
    if(n > 2) v.pb(n);
}
int main(){
   ll n;
    cin >> n;
    prm(n);
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i] << "*";
    }
    cout << v[v.size() - 1];
}
