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
    ll x;
    cin >> x;
    for(int i = 0; i < x; i++){
        int a;
        cin >> a;
        cout << max(a-2,0) << endl;
    }
}
