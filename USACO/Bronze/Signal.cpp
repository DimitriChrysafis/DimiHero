#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <string>
using namespace std;

void singleRowOfData(int numRepetitions) {
    string inputString;
    cin >> inputString;
    string outputString;
    for(int r = 0; r < inputString.size(); r++){
        for(int q = 0; q < numRepetitions; q++){
             outputString += inputString[r] ;
        }
    }
    for(int i = 0; i < numRepetitions; i++){
        cout <<  outputString <<endl;
    }
}


int main(int argc, const char* argv[]) {
    int numRows;
    int numColums;
    int numRepetitions;
    cin >> numRows >> numColums >> numRepetitions;
    for(int p = 0; p < numRows; p++){
        singleRowOfData(numRepetitions);
    }
}


