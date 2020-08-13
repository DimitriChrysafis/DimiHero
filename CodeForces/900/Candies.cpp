#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
        long long t,n;
        cin >> t;
        while(t--){
            cin >> n;
              long long k=2;
             while(1){
                  long long twopn = pow(2,k);
                  long long x = n % ( twopn-1);
                 if(x==0){
                    long long ans=n/(twopn-1);
                     cout << ans <<endl;
                     break;
                 }
                 k++;
             }
        }
}
