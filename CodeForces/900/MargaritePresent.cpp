#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int numberof;
       cin >> numberof;
    for(int i = 0 ; i < numberof ; i++){
        int roof;
        int floor;
        cin >> roof;
        cin >> floor;
           if(floor-roof == 1){
               cout << "-1" <<endl;
           }
           else if(roof % 2 ==0 and floor % 2 ==0){
               cout << (roof + floor ) / 2 <<endl;
           }
           else if(roof % 2 != 0 and floor % 2 != 0){
               cout << - ( roof + floor ) / 2 <<endl;
           }
           else if( roof % 2 != 0  and floor % 2 == 0){
               cout << (floor - roof + 1 ) / 2 <<endl;
           }
           else if(roof % 2== 0 and floor % 2 !=0){
               cout << - ( floor - roof + 1 )/2<<endl;
           }
       }
    return 0;
}
