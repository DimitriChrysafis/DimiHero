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
   ll T;
    ll n;
    ll a;
    ll b;
    cin >> T;
    while (T-- ){
        cin >> n >> a >> b;
        string s;
        for (char c = 'a'; s.size() < b; c++ ) {
            s += c;
        }
        while (s.size() < a) s += 'a';
        
        ll m = s.size(), i = 0;
        while (s.size() < n) {
            s += s[i ++ ];
            i %= m;
        }
        cout << s << endl;
    }
}
