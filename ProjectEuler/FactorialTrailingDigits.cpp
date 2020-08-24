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
#define ll unsigned long long int
using namespace std;
ll frec(ll input){
ll N = input/(5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 );
   ll r=1;
    for(ll n = 1;n<=N;n++){
        ll temp = n;
        r *=temp;
        while(r % 10 == 0){
            r /= 10;
            
        }
        r %= 100000000;
    }
    return r % 1000000;
}
int main (){
    cout << frec(1000000000000)<<endl;
    
}
