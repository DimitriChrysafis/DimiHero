#include <algorithm>
#include <array>
#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char* argv[]) {
    using namespace std;
    int n;
    cin >> n;
    int arr[n][3];
    
    for(int y = 0; y < n; y++){
        for(int w = 0; w < 3; w++){
            cin >> arr[y][w];
        }
    }
    for(int y = 0; y < n; y++){
        arr[y][0] *= 3600;
        arr[y][1] *= 60;
    }
    int seconds[n];
    for(int w = 0; w < n; w++){
        seconds[w] = arr[w][0] + arr[w][1] + arr[w][2];
    }
    long w = sizeof(seconds)/sizeof(seconds[0]);
    sort(seconds, seconds+w);
    for(int w = 0; w < n; w++){
         int hrs = seconds[w]/3600;
        int qw = seconds[w] - 3600 * hrs;
        int min = qw / 60;
        int qww = qw - 60 * min;
        cout <<  hrs << " " << min % 60 <<" " <<  qww<< endl;
    }
}


