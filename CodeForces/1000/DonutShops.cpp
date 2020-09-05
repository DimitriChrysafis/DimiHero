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

int main(){
  int t;
   cin >> t;
   while(t--) {
       ll a, b, c;
       cin >> a >> b >> c;
       if(a < c) {
           cout << 1 << " ";
       }
       else cout << -1 << " ";
       
       if( b * a > c) cout << b << endl;
       
       else{
           cout << -1 << endl;
       }
   }
}

