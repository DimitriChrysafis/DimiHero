#include <algorithm>
#include <array>
#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>
int main(int argc, const char* argv[]) {
    using namespace std;
    int mod;
    int r[1001];
    int MyMaxValue=1000000000;
    cin >> mod;
    for (int q=0; q<mod; q++){
        cin >> r[q];
    }
    for (int q=0; q<mod; q++){
        int sum=0;
        for (int j=1; j<mod; j++){
            sum = r[(q+j)%mod]*j + sum;
        }if (MyMaxValue > sum){
            MyMaxValue = sum;
    }}
    cout <<MyMaxValue << endl;
}


