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
     int t;
     cin >> t;
     while(t--){
         int n;
         cin >> n;
         if(n % 2 == 0){
             for(int i = 0 ; i < n / 2 ; i++){
                 cout << 1;
             }
         }else{
             cout << 7;
             for(int i = 0 ; i < ( n - 3 ) / 2 ; i++){
                 cout << 1;
             }
         }
         cout << endl;
     }
}


