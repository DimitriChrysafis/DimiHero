#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include<algorithm>
using namespace std;
struct jim{
    long long int pos;
    long long int size;
};
bool comp(jim a,jim b){
  return a.pos < b.pos;
}
int no;
jim totak[10000];
int main(){
     cin >> no;
     for (int  i = 0 ; i < no ; i++){
       cin >> totak[i].size >> totak[i].pos;
     }
     sort(totak, totak+ no,comp);
     long long int ans=0;
     for (int i = 0 ; i < no - 1 ; i++){
       long long int area=totak[i+1].pos-totak[i].pos;
       long long int lb=i;
       long long int rb=i+1;
       while (lb >= 0 && rb <= no - 1){
         bool b=0;
         long long int current=totak[rb].pos-totak[lb].pos;
         if (current>totak[lb].size){
           lb--;
           b = true;
         }
        if (current>totak[rb].size){
           rb ++;
            b = true;
         }
         if (b == 0){
           break;
         }
       }
       if (lb >= 0 and rb <= no - 1){
         ans += area;
       }
     }
     cout << ans << endl;
}
