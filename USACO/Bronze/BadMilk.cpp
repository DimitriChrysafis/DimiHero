#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
using namespace std;
int xo[51][51], yo[51];
int main(){
int no, mo, doo, so, max1 = 0;
cin >> no >> mo >> doo >> so;
for (int  i = 1 ; i <= mo;i++) {
    yo[i] = 1;
}

for (int i = 0 ; i <= 50 ;i++) {
    for (int j = 0 ; j <= 50 ; j++) {
        xo[i][j] = 110;
    }
}
for (int i = 0 ; i < doo; i++) {
    int p, m, t;
    cin >> p >> m >> t;
    xo[p][m] = t;
}

for (int i = 0 ; i < so ; i++) {
    int p, t;
    cin >> p >> t;

    for (int j=1;j<=mo;j++) {
        if (xo[p][j]>=t) {
            yo[j]=0;
        }
    }
}
for (int i = 1 ;  i <= mo ; i++) {
    if (yo[i]==1) {
        int count=0;
        for (int j = 1; j <= no ; j++) {
            if (xo[j][i]!=110) {
                count++;
            }
        }
        if (count>max1)
            max1=count;
    }
}
cout << max1;
}
