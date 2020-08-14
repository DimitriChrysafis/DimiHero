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
   int slapper;
   cin >> slapper;
   while(slapper--){
       string s;
       cin >> s;
       int val=0;
       int num;
       
       for(int i = 0 ; i+ 1 < s.size();){
           if(s [ i ] != s [ i + 1 ]){
               s.erase(i,2);
               val++;
               if( i > 0 ){
                   i--;
               }
           }
           else {
               i++;
           }
       }
       if(val % 2 ==0){
           cout << "NET" <<endl;
       }
       else {
           cout << "DA" <<endl;
       }
   }
}
