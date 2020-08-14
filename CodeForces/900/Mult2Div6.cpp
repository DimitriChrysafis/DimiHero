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
   int t;
    cin >> t;
    while(t--){
        int  c2 = 0 , c3 = 0 ;
        int n;
        int i;
        cin>>n;
        while( n % 2 ==0){
            n = n / 2 ;
            c2++;
        }
         while( n % 3 == 0){
            n = n / 3 ;
            c3++;
        }
        if(n == 1 and c3>=c2){
            cout<< 2 * c3 - c2 <<endl;
        }
        else{
            cout  << -1 << endl;
        }
    }
}
