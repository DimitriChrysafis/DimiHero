#include <array>
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char* argv[]) {
    int nop;
    cin >> nop;
    int arr[10000];
    int bob[10000];
    for (int i = 0; i < nop; i++) {
        cin >> arr[i];
        bob[i] = arr[i];
    }
    sort(bob, bob + nop);
    int counter = 0;
    for (int i = 0; i < nop; i++) {
        if (bob[i] != arr[i]) {
            counter++;
        }
    }
    cout << (counter - 1) << endl;
}
