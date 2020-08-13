#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int a;
    int b;
    int c;
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;
    if (n == 1 or n == 0) {
        cout <<0 << endl;
        return 0;
    }
         int sol = min(a, b);
         if (n >= 2) {
             if (c < sol) {
                 sol += c*(n-2);
             }
             else {
                 sol *= (n - 1);
             }
         }
        cout << sol << endl;
}
