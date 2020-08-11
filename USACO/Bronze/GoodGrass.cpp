#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
     int rp, cp, max = 0;
     int z[2];
     cin >> rp >> cp;
     int a[rp][cp];
     for(int i = 0;i < rp; i++){
         for(int j = 0; j < cp;j++)
             cin >> a[i][j];
     }
     for(int i = 0;i < rp-3; i++){
         for(int j = 0; j < cp-3; j++){
             int k=a[i][j]+a[i+1][j]+a[i+2][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j+1]+a[i+2][j+2];
             if(k>max){
                 max=k;
                 z[0]=i;
                 z[1]=j;
             }
         }
     }
     cout<< max << endl << z[0]+1 << " "<< z[1]+1;
}
