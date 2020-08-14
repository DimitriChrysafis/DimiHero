#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    long long a;
    long long b;
    long long c;
    long long d;
    long long n;
    long long s;
    long long x;
    long long total;
 
  cin >> s;
 
  while(s!=0){
      cin >> a;
      cin >> b;
      cin >> c;
      cin >> d;
 
   total=b;
  
   if(a > b){
     if( d>= c){
       total=-1;
      }else{
        a -= b;
       x = c - d;
       n = a / x;
       if( a % x !=0){
         n++;
        }
        total += c * n;
      }
    }
    s--;
    cout << total << endl;
  }
  return 0;
}
