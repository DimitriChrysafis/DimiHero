#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x, y, n, k1, a1, b1, k2, a2, b2;
        cin >> a >> b >> x >> y >> n;
        b1 = max(b - n, y); k1 = n - (b - b1);
        a1 = max(a - k1, x);
        a2 = max(a - n, x); k2 = n - (a - a2);
        b2 = max(b - k2, y);
        cout << min(a1 * b1, a2 * b2) << endl;
    }
    
    return 0;
    
}
