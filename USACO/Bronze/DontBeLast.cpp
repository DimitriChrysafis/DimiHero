#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    int x;
    cin >> x;
    int minimum = 1820130816;
    string names[x+1];
    int counters[x+1];
    int lastindex = 0;
    
    for(int y = 0; y < x; y++){
        counters[y] = 0;
    }
    
    for(int y = 0; y < x; y++){
        int count;
        string cowName;
        cin >> cowName;
        cin >> count;
        int index = lastindex;
        for (int i = 0; i < lastindex; i++) {
            if (cowName ==  names[i]){
                index = i;
                break;
            }
        }
        
        if(index == lastindex){
            lastindex++;
        }
        
        names[index] = cowName;
        counters[index] += count;
    }
    
    int mindex = 0;
    for(int m = 0; m < lastindex; m++){
        if(counters[m] < minimum){
            minimum = counters[m];
            mindex = m;
        }
    }
    int newminimum = 1820130816;
    mindex = lastindex;
    names[lastindex] = "Tie";
    for(int m = 0; m < lastindex; m++){
        if(counters[m]  < newminimum && counters[m] != minimum){
            newminimum = counters[m];
            mindex = m;
        }
    }
    if(x == 1){
        cout << names[0];
        return 0;
    }
    cout << names[mindex];
}


