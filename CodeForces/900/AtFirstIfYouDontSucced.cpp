#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int n;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> n;
    if(a+b-c >= n){
        cout << -1;
    }
    else if(a + b - c < n  and a >= c and b >= c){
        cout << n - a - b + c;
    }else
    cout << -1;
    return 0;
}
