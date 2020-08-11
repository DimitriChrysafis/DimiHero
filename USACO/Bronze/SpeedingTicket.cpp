#include <math.h>
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <list>
#include <map>
#include <stack>
#include <string>
#include <vector>
using namespace std;

static void readBatch(int numberOfLines, vector<int>& output) {
    for (int n = 0; n < numberOfLines; n++) {
        int speed;
        int numberOfMiles;
        cin >> numberOfMiles;
        cin >> speed;
        for (int mileNumber = 0; mileNumber < numberOfMiles; mileNumber++) {
            output.push_back(speed);
        }
    }
}
int main(int argc, const char* argv[]) {
    int numberOflinesForLimits;
    cin >> numberOflinesForLimits;
    int numberOflinesForBessie;
    cin >> numberOflinesForBessie;
    vector<int> limits;
    vector<int> bessie;
    readBatch(numberOflinesForLimits, limits);
    readBatch(numberOflinesForBessie, bessie);
    int max = 0;
    for (int i  = 0;i < 100;i++) {
        if(limits[i] < bessie[i] && bessie[i] - limits[i] > max){
            max = bessie[i] - limits[i];
    }
    }
    cout << max;
}


