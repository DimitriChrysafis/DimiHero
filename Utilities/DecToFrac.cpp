#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <stdlib.h>
#include <time.h>
using namespace std;
//
// This is a test code, for fun!
//
int main(){
    float x;
    cin >> x;
    for(float i = 1; i < 134217728; i++){
        for(float ip = 1; ip < 134217728; ip++){
            if(x == i/ip){
                cout << i << "/" << ip << endl;
                return 0;
            }
        }
    }
}
