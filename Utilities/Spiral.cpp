#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
int main(int argc, const char* argv[]) {
    using namespace std;
    int dim;
    cin >> dim;
    char a[dim][dim];
    for (int l = 0; l < dim; l++) {
        for (int p = 0; p < dim; p++) {
            a[l][p] = ' ';
        }
    }
    
    int s = 0;
    int dim1 = dim;
    while (s <= dim / 2) {
        for (int i = 0; i < dim1; i++) {
            a[s][i + s] = a[s + i][s] = a[s + dim1 - 1][i + s] =
            a[s + i][s + dim1 - 1] = '*';
        }
        if (s < dim / 2) {
            a[s + dim1 - 1][1 + s] = ' ';
        }
        if (s < (dim - 1) / 2 - 1) {
            a[s + dim1 - 2][2 + s] = '*';
        }
        s++;
        s++;
        dim1 -= 4;
    }
    for (int l = 0; l < dim; l++) {
        for (int p = 0; p < dim; p++) {
            cout << a[p][l];
        }
        cout << endl;
    }
}
