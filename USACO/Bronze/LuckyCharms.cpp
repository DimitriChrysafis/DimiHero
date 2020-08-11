#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
    
    int sl;
    int sc;
    int sn;
       cin >> sl >> sc >> sn;
       int a[sc];
       int b[sc];
       for(int i=0;i<sc;i++){
           cin >> a[i];
           cin >> b[i];
       }
       for(int i = 0 ; i < sc ; i++){
           cout << a[i] + abs(b[i] - sn) << endl;
       }
}
