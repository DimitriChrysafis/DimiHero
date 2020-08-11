#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
   int n, kd;
   cin >> n >> kd;
   int da[n];
   for(int i = 0; i < n ; i++)
   cin >> da[i];
   int final=0;
   for(int i = 0; i < n ; i++){
     int zd = 0;
     for(int j = 0 ; j < n ; j++){
       if(da[j]>=da[i] && da[j]<=da[i]+kd)
       zd++;
     }
     if(zd > final)
     final = zd;
   }
   cout << final << endl;
}
