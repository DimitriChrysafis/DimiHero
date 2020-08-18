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
     while(t--){
         int a[3]={0};
         int interval=0;
         for(int i =   0 ; i < 3 ; i++)
         {
             cin>>a[i];
         }
         sort( a, a + 3);
         if((a [ 0 ] >= 4 ) and ( a [ 1 ] >= 4 ) and ( a [ 2 ] >= 4)){
             cout << 7 <<endl;
         }
         else {
                 if(a[ 0]>0){
                     interval+=1;
                     a[0]--;
                 }
                 if(a[1]>0){
                     interval+=1;
                     a[1]--;
                 }
                 if(a[2]>0){
                     interval+=1;
                     a[2]--;
                 }
                 if((a[2]>0)&&(a[1]>0)){
                     a[2]--;a[1]--;
                     interval+=1;
                 }
                 if((a[2]>0)&&(a[0]>0)){
                     a[2]--;a[0]--;
                     interval+=1;
                 }
                 if((a[1]>0)&&(a[0]>0)){
                     a[1]--;a[0]--;
                     interval+=1;
                 }
             cout << interval << endl;
         }
  
  
     }
}
