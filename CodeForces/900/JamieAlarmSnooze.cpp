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
    long long xo, ho, mo;
    cin >> xo;
    cin >> ho;
    cin >> mo;
       long long num(0);
       for(num = 0; num < 24 * 60; num++){
           if(ho % 10 == 7 || mo % 10 == 7){
               break;
           }else{
               mo = mo-xo;
               if(mo < 0){
                   mo += 60; ho--;
                   
               }if(ho < 0){
                   ho += 24;
               }
           }
       }
    cout << num;
}
