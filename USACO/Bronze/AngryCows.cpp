    
#include <array>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int p1 = 0;
 int n;
 int arr[100];
int MuFunctionfihsjfsklfh(int i) {
    int dfsfsf = i;
    int prev;
    int raddii = 1;
    for (;;) {
        prev = dfsfsf;
        while (dfsfsf < n - 1 && abs(arr[prev]-arr[dfsfsf+1]) <= raddii) {
            dfsfsf++;
        }
        raddii++;
        if (dfsfsf == prev) {
            break;
        }
    }
    int cur2 = i;
    int prev2;
    raddii = 1;
    for (;;) {
        prev2 = cur2;
        while (cur2 > 0 && abs(arr[prev2] - arr[cur2 - 1]) <= raddii) {
            cur2--;
        }
        raddii++;
        if (cur2 == prev2) {
            break;
        }
    }
    return max(p1, dfsfsf - cur2 + 1);
}
int main(int argc, const char* argv[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int h = 0; h < n ;h++){
        
    }
    for (int i = 0; i < n; i++) {
        p1 = max(MuFunctionfihsjfsklfh(i), p1);
    }
    cout << p1 << endl;
    return 0;
}
