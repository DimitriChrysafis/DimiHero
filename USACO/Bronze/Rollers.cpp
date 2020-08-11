#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
long long factor(long long p){
  return p*p;
}
int main(){
    int a, b, c, n;
    long long x[1100], y[1100], r[1100];
    cin>>n;
    for (int i=0;i<n;i++) {
        cin >> x[i];
        cin >> y[i];
        cin >> r[i];
        if (x[i]==0 && y[i]==0)
          b=i;
    }
    a = -1;
    for (int i = 1 ; i < n ; i++) {
        for (int p = 0 ; p < n ;  p++)
            if (p!=a && factor(x [ b ] - x [ p ] ) +  factor( y [ b ] - y [ p ] )  ==  factor( r [ b ] + r [ p ] ) ) {
               c = p;
                }
        a = b;
        b = c;
    }
    cout<< x [b] << " " << y[b];
    
  }
