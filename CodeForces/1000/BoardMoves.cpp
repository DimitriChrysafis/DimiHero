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
int main (){
    ll t;
    ll a;
        long long int total = 0;
        cin >> t;
        while(t--){
            total = 0;
            cin >> a;
            while(a > 1){
                ll  n = ( ( a / 2 ) * ( 2 * a ) + ( a / 2 ) * 2 * ( a - 2 ) );
                total += n;
                a -= 2;
            }
            cout << total << endl;
        }
    }
