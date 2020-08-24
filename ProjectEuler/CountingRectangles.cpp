#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int countrec(){
    const long A=2000000;
    const long B=A;
    ll C;
    ll D = A;
    ll xt = 0;
    ll yt = 0;
    for(long x = 1 ; x <= sqrt(B);x++){
        for(long y = x ; y <= sqrt(B);y++){
            C= ( x * ( x + 1 )/ 2 ) * ( y * ( y + 1 ) / 2 );
            if( C > A + D ){
                break;
            }
            if ((int)abs(C-A) < D){
                D = abs(C-A);
                xt =x ;
                yt=y;
                
            }
        }
    }
    return xt*yt;
}
int main() {
    cout << countrec() << endl;
}
