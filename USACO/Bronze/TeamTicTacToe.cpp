#include <algorithm>
#include <array>
#include <iostream>
#include <string>
using namespace std;
int singles = 0;
int doubles = 0;
int histogram[26];
int histogram2[26][26];
bool areallsame(char a, char b, char c) { return a == b && b == c; }
void doublefound(char a, char c){
    char i = max(a,c);
    char j = min(a,c);
    histogram2[i - 'A'][j - 'A'] = 1;
}
void check(char a, char b, char c) {
    if (areallsame(a, b, c)) {
        histogram[a - 'A'] = 1;
    } else if (a == b) {
        doublefound(a,c);
    } else if (a == c) {
        doublefound(a,b);
    } else if (b == c) {
        doublefound(a,b);
    }
}
int main(int argc, const char* argv[]) {
    char x[3][3];
    for (int y = 0; y < 3; y++) {
        for (int r = 0; r < 3; r++) {
            cin >> x[y][r];
        }
    }
    for (int r = 0; r < 26; r++) {
        histogram[r] = 0;
    }
    for (int r = 0; r < 26; r++) {
        for (int y = 0; y < 26; y++) {
            cin >>  histogram2[r][y];
        }
    }
    for (int r = 0; r < 3; r++) {
        check(x[r][0], x[r][1], x[r][2]);
        check(x[0][r], x[1][r], x[2][r]);
    }
    
    check(x[0][0], x[1][1], x[2][2]);
    check(x[2][0], x[1][1], x[0][2]);
    for (int r = 0; r < 26; r++) {
        singles+= histogram[r];
    }
    for (int r = 0; r < 26; r++) {
        for (int y = 0; y < 26; y++) {
            doubles+= histogram2[r][y];
        }
    }
    cout << singles << endl << doubles;
}


