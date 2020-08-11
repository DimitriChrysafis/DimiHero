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
int main(){
    int x;
    cout << "input the soti time" << endl;
    x = rand() % 15 + 5;
    int y;
    cin >> y;
    y += x;
    cout << "the new time is " << y << endl;
    
}
