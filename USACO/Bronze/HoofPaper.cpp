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
    cin >> x;
    int wins = 0;
    int losses = 0;
    for(int z = 0; z < x; z++){
    int a;
    int b;
    cin >> a >> b;
        if(a == 1 && b == 2){
            wins++;
        }
        if(a == 1 && b == 3){
            losses++;
        }if(a == 2 && b == 3){
            wins++;
        }if(a == 2 && b == 1){
            losses++;
        }if(a == 3 && b == 1){
            wins++;
        }if(a == 3 && b == 2){
            losses++;
        }
    } int wwe = max(losses, wins);
    cout << wwe;
}


