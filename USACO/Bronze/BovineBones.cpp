#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char* argv[]) {
    using namespace std;
    int Num1;
    int Num2;
    cin >> Num1;
    cin >> Num2;
    int Num3;
    cin >> Num3;
    int x = 0;
    int y = 0;
    int histogram[Num1 + Num2 + Num3 + 1];
    for (int k = 0; k < Num1 + Num2 + Num3 + 1; k++) {
        histogram[k] = 0;
    }
    for (int y = 1; y <= Num1; y++) {
        for (int r = 1; r <= Num2; r++) {
            for (int h = 1; h <= Num3; h++) {
                histogram[y + r + h]++;
            }
        }
    }
    for(int l = 0; l < Num1 + Num2 + Num3 + 1; l++){
        if(histogram[l] > x){
            x = histogram[l];
            y = l;
        }
    }
    cout << y;
}


