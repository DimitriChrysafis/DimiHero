#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
    long long int x;
    cin >> x;
    cout << x << endl;
    for(int i = 0 ; i < x ; i++){
        cout << 1 << " ";
    }
}
