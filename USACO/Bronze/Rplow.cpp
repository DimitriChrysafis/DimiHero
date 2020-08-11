#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
char field[250][250];
int main(){
    int n, a, b, a1, b1,c, d, count;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
      cin >> a1 >> b1 >> c >> d;
    for (int x = a1; x <= c; x++){
        for (int y = b1; y <= d; y++){
        field[x][y] = 1;
            }
        }
    }
    count = 0;
    for (int x = 1; x <=a; x++){
    for (int y = 1; y <= b; y++){
        if (field[x][y])
        count++;
        }
        }
    cout<<count;
}
