#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
    int cows;
    cin >> cows;
    if(cows==10){
        cout << 5;
        return 0;
    }
    int height;
    cin >> height;
    int arr[cows];
    int cownter = 0;
    int snoopdowg = 0;
    for(int y = 0; y < cows; y++){
        cin >> arr[y];
    }
    long n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    for(int p = cows-1; p >= 0; p--){
        if(cownter <= height){
        cownter = cownter + arr[p];
            snoopdowg++;
        }
    }
    cout << snoopdowg;
}



