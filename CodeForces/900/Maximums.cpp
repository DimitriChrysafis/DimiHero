#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int a[200000];
    int max;
    int n = 0;
    int i;
    cin >> n;
       for(i = 0 ;i < n ;i++){
           cin >> a[i];
       }
       max = a[0];
       for(i = 1 ; i < n ;i++){
           if( a [ i - 1 ] >=max)
               max = a [ i - 1 ];
    
    
          a[ i ] = a [ i ] + max;
       }
    
       for(i = 0 ; i < n ;i++){
           cout << a[i] << endl;
       }
}
