#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
float distance(int x1, int y1, int x2, int y2){

    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}
int main(){
   ll t;
   cin >> t;
   while(t--){
       ll x1;
       ll y1;
       ll x2;
       ll y2;
       cin >> x1;
       cin >> y1;
       cin >> x2;
       cin >> y2;
       if( x1 == x2 and (y1 + y2 == x1)){
           cout << "Yes" << endl;
       }
       else if( x1 == y2 and (y1 + x2 == x1)){
           cout<<"Yes"<<endl;
       }
       else if( y1 == x2 and (x1 + y2 == y1)){
           cout<<"Yes"<<endl;
       }
       else if( y1 == y2 and (x1 + x2 == y1)){
           cout<<"Yes"<<endl;
       }
       else{
           cout<<"No"<<endl;
       }
           
   }
   
}
