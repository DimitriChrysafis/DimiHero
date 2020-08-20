#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
      long t;
         cin >> t;
      
         while(t--) {
      
             long n;
             cin >> n;
      
             long p = (n + 3)/4;
             for(int i = 0;i<n - p;++i)
                 cout << "9";
      
             for(int i = 0; i < p ; i++)
                 cout << "8";
      
             cout << endl ;
      
         }
      
}


