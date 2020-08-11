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
    int x;
    int y;
    cin >> x >> y;
    int num[10];
    for (int we = 0; we <= 9; we++) {
        num[we] = 0;
    }
    for (int we = x; we <= y; we++) {
        string m = to_string(we);
        for (int a = 0; a < m.size(); a++) {
            char digit = m[a] - '0';
            num[digit]++;
        }
    }
    for (int a = 0; a <= 9; a++) {
        cout << num[a] << " ";
    }
}


 
