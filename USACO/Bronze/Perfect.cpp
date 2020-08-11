#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <stdlib.h>
#include <time.h>
using namespace std;
int median(int a[], int n){
    sort(a, a + n);
    if (n % 2 != 0)
        return (double)a[n / 2];
  
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
int main(){
        int x;
         cin >> x;
         int y[x][x];
         for(int i = 0; i < x; i++)
             for(int p = 0; p < x; p++)
                 cin >> y[i][p];
         int values[x];
         int counters[x];
        for(int i = 0; i < x; i++){
             for(int p = 0; p < x; p++){
                 values[p] = y[i][p];
             }
            counters[i] = median(values,x);
         }
         cout << median(counters,x);
}
