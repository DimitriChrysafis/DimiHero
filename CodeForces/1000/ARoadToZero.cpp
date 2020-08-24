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
#define ll long long int
using namespace std;
int main() {
  int t;
    cin>>t;
    while(t--){
         ll x,y;
         cin >> x >> y;
        ll a,b;
         cin >> a >> b;
        if(x < y){
         swap(x,y);
        }
         ll ans;
        if(2 * a <= b){
         ans = ( x + y ) * a;
        }
         else{
         ans = y * b + ( x - y ) * a;
         }
         cout << ans <<endl;
    }
}
