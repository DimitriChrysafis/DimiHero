// https://github.com/DimitriChrysafis/DimiHero
// https://www.dimitri.page/
// https://dimitrichrysafis.wixsite.com/mysite
// https://dimitric.weebly.com/
#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#include <math.h>
#define ll long long int
using namespace std;
void prm(ll n) {
   while (n % 2 == 0){
       cout << 2 << "*";
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         cout << i << "*";
         n = n/i;
      }
   }
    if (n > 2){
        cout << n;
    }
    cout << endl;
}
int main(){
   ll c;
   cin >> c;
   while(c--){
       ll m,n,i,j;
       cin >> m >> n;
       char arr[m][n];
       for(i= 0 ; i < m ; i ++){
           if( i % 2 ==0){
           arr[ i ] [ 0 ] = 'B';
       }
           else{
           arr[i][0]='W';
           }
           for(j = 1 ; j < n ; j++){
               if(arr [ i ] [ j - 1 ]=='B')
               arr[ i ] [ j ] ='W';
               else
               arr[ i ] [ j ]='B';
           }
       }
       if(m * n % 2 ==0){
           if(arr [ m - 1 ] [ n - 1 ] =='W')
           arr[ m - 1 ] [ n - 1 ] = 'B';
           else{
           arr[m - 1 ] [ 0 ]='B';
           }
       }
       for(i = 0 ; i < m ; i++){
           for(j = 0 ; j < n ; j++)
           cout << arr[i][j];
           cout << endl;
       }
   }
}

