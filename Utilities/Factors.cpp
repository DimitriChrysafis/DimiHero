#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#define ll unsigned long long int
using namespace std;
int countDivisors(ll n){
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i){
                cnt++;
            }
            else{
                cnt = cnt + 2;
            }
        }
    }
    return cnt;
}
int main(){
    char pp;
    cout << "Press p and enter to see the prime factors" << endl;
    cout << "Press f and enter to see all the factors" << endl;
     cout << "Press j to see the number of factors" << endl;
    cin >> pp;
    if(pp == 'f'){
   ll n, i;

       cout << "Enter a positive integer: ";
       cin >> n;
        if(n > 9999999999999999){
                   cout << "please input a smaller number";
                   cout << endl;
                   return 0;
               }
       ll counter = 1;
       cout << "Factors of " << n << " are: " << endl;
       for(i = 1; i <= n; ++i){
           if(n % i == 0){
                 this_thread::sleep_for(chrono::milliseconds(10) );
               cout << "Factor number " << counter << " is "<< i << endl;
               counter++;
           }
       }
    cout << "The Numnber Of Factors is: " << counter -1<< endl;
        return 0;
    }if(pp == 'p'){
    ll Number, p = 1, j, d, c = 0;
      cout << "Enter a positive integer: " << endl;
        cin >> Number;
        if(Number > 9999999999999999){
                   cout << "please input a smaller number";
                   cout << endl;
                   return 0;
               }
       while (p<=Number){
           d = 0;
           if(Number % p == 0){
               j = 1;
               while(j <= p){
                   if(p % j == 0){
                       d++;
                   }
                   j++;
               }
               if(d == 2){
                   cout << "One prime factor is " << p << endl;
                       this_thread::sleep_for(chrono::milliseconds(10) );
                   c++;
               }
           }
           p++;
       }
    cout << "Total number of prime factors is " << c << endl;
           return 0;
    }
    if(pp == 'j' or pp == 'J'){
        ll x;
        cout << "Input the number" << endl;
        cin >> x;
        if(x > 9999999999999999){
            cout << "please input a smaller number";
            cout << endl;
            return 0;
        }
        cout <<"The number of factors of " << x << " is " << countDivisors(x) << endl;
    }
    else{
        cout << "no dummy, re-run the program, " << pp << " is not either a p or an f." << endl;
        return 0;
    }
    
    
    
    
    
}
