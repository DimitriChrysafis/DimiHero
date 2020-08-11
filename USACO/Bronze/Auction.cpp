#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
int comp(int a, int b){
  return a > b;
}
int llll[1000];
using namespace std;
int main(){
   int n, m,  sum, maxr, t, bp, b;
    cin>>n>>m;
    for (int i=0;i<m;i++)
        cin>>llll[i];
    sort(llll, llll+m, comp);
    bp = llll[0];
    maxr = llll[0];
    for (int p=0;p<m;p++) {
        t=llll[p];
        b = p + 1 ;
        if( b > n ){
            b = n;
        }
        sum = b * t;
        if (sum > maxr) {
            maxr=sum;
            bp = t;
        }
    }
    cout<< bp << " " << maxr;
}
