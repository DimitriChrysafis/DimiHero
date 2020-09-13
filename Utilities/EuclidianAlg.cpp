#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int gcd(vector<int> input){
    int minval = std::numeric_limits<int>::max();
    for(int myval : input){
        if(myval != 0){
             minval = min(minval, myval);
        }
    }
    bool allzero = true;
    for(int i = 0; i < input.size(); i++){
        int inval = input[i] % minval;
        input[i] = inval;
        if(inval != 0){
            allzero = false;
        }
    }
    if(allzero){
        return minval;
    } else {
        return gcd(input);
    }
}
int main(){
    vector<int> input = {1020, 408, 918};
    cout << gcd(input) << endl;
}
