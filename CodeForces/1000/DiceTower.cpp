#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;
int main(){
   long long t;
   cin>>t;
   
   while(t--){
     long long x;
     cin >> x;
     
     if(x <= 14LL || (( x % 14LL ) > 6LL) || (x % 14LL == 0))
     cout<<"NO"<<endl;
     
     else
     cout<< "YES" <<endl;
   }
}

