#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         string s;
         cin>>s;
         int a=0;
         for(int  i = 0 ; i < n ; i++){
             if(((s[ i ] - '0' ) % 2 ) != 0){
                 a++;
             }
         }
         if(a >= 2){
             int e =0;
             for(int i = 0 ; i < s.size() ; i++){
                 if((s[i]-'0')%2==1){
                     cout << s[i];
                     e++;
                 }
                 if(e==2){
                 break;
                 }
             }
         }
         else{
             cout << -1;
         }
         cout << endl;
     }
}


