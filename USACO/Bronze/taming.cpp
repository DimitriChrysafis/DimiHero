#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include<algorithm>
using namespace std;
int main(){
     int no;
       cin >> no;
     int a[no];
       for(int  i = 0 ; i < no ; i++)
           cin >> a[i];
       if(a[0]>0){
           cout<<-1<<endl;
           return 0;
       }
       a[0]=0;
       int perute=-1;
       int c=0;
       int ppo=0;
       for(int i = no - 1 ; i >= 0 ; i--){
           if(perute!= -1 && a[i] != -1 && a[i]!= perute){
               cout << -1 <<endl;
               return 0;
           }
           if(perute==-1){
               perute=a[i];
           }
           if(a[i]==-1){
               a[i]=perute;
           }
           if(a[i]==0){
               c++;
           }
           if(a[i]==-1){
               ppo++;
           }
           if(perute>-1){
               perute--;
           }
       }
       cout << c << " " << c + ppo<<endl;
}
