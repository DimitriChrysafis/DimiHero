#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int strings( string a, string b){
    long s = min(a.size(),b.size());
    for(long i = s; i > 0; i--){
        if(a.substr(0,i) != b.substr(b.size()-i,i)){
            continue;
        }else{
            return i;
        }
    }
    return 0;
}
int main(int argc, const char* argv[]) {
    string a;
    string b;
    cin >> a;
    cin >> b;
    int mymax = max(strings(a,b), strings(b,a));
    cout << mymax;
}
