#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long b[n];
    long long rar[n];
    long long totalscore = 0;
    long long x = 0;
    long long second = 0;
    long long first = 0;
    long long ok = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int j = 0; j < n; j++){
        cin >> rar[j];
         if(rar[j] == 1) second++;
    }
    for(int o = 0; o < n; o++){
        if(b[o] == 1 and b[o] == rar[o]) first++;
    }
    for(int m = 0; m < n; m++){
        if(b[m] == 1 and rar[m] == 0) ok++;
    }
    long long super = second - first;
    if(ok == 0){
        cout<< -1 << endl;
    }
    else{
    while(totalscore <= super){
        x++;
        totalscore = x * ok;
    }
        cout << x << endl;
    }

}
