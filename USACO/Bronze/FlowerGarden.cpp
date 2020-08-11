#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    int blank,x;
    cin >> blank >> x;
    bool arr[blank];
    for(int k = 0; k < blank; k++){
        arr[k] = false;
    }
    int counter = 0;
    for(int i = 0; i < x; i++){
        int value1, value2;
        cin >> value1 >> value2;
        value1--;
        for(int p = value1; p < blank; p = p + value2){
            arr[p] = true;
        }
    }
    for(int q = 0; q < blank; q++){
        if(!arr[q]){
            counter++;
        }
    }
    cout << counter;
}


