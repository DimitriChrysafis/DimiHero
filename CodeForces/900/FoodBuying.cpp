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
    ll a;
    cin >> t;
    while(t--){
        cin >> a;
        cout << int((a-1)/9+a) << endl;
    }
}
