#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    int x;
    cin >> x;
    int advancingUsers;
    cin >> advancingUsers;
    int size[x];
    int size2[x];
    for(int y = 0; y < x ;y++){
        cin >> size[y];
        cin >> size2[y];
    }
    for(int y = 0; y < x-advancingUsers ;y++){
        
        int smallest = numeric_limits<int>::max();
        
        int index = 0;
        for(int e = 0; e < x ;e++){
            
            if(size[e] < smallest){
                index = e;
                smallest = size[e];
            }
            
        }
        size[index] = numeric_limits<int>::max();
        size2[index] = -y-1;
    }
    int maximum = -1;
    int q = 0;
//    for(int p = 0; p < x;p++){
//        cout << size[p] << " " << size2[p] << endl;
//    }
    for(int e = 0; e < x ;e++){
        if(size2[e] > maximum){
            q = e;
            maximum = size2[e];
        }
    }
    cout << q+1;
}


