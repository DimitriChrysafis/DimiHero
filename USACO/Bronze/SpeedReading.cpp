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
    int N;
    int y;
    cin >> N;
    cin >> y;
    for (int r = 0; r < y; r++) {
        float a;
        float b;
        float c;
        cin >> a >> b >> c;
        int numbatches = 0;
        int duration = b + c;
        int batch = a * b;
        int x = N;
        for (int t = 0; t < y; t++) {
            if (x <= batch) {
                int lastduration = ceil(x/a);
                int result =  numbatches * duration + lastduration;
                cout << result << endl;
                break;
            } else {
                x -= batch;
                numbatches++;
            };
        }
    }
}


