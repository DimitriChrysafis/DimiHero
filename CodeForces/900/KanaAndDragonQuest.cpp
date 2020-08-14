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
   ll t;
    cin >> t;
   while(t--){
       ll x, n, m;
       cin >> x >> n >> m;
       while(x > 20 and n > 0){
           x = x/2 + 10;
           n--;
       }
       x -= m * 10;
       if(x <=0) {
           cout << "yes" << endl;
       }
       else{
           cout << "no" << endl;
       }
   }
}
