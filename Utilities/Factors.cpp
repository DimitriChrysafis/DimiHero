#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
    char pp;
    cout << "Type p if you want the prime factors, and press f to see all the factors." << endl;
    cin >> pp;
    if(pp == 'f'){
    long long n, i;

       cout << "Enter a positive integer: ";
       cin >> n;
       long long counter = 0;
       cout << "Factors of " << n << " are: " << endl;
       for(i = 1; i <= n; ++i){
           if(n % i == 0){
                 this_thread::sleep_for(chrono::milliseconds(10) );
               cout << "Factor number " << counter << " is "<< i << endl;
               counter++;
           }
       }
    cout << "The Numnber Of Factors is: " << counter << endl;
    }else{
    long long Number, p = 1, j, d, c = 0;
      cout << "Enter a positive integer: " << endl;
        cin >> Number;
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
                   cout << "A prime factor is " << p << endl;
                   c++;
               }
           }
           p++;
       }
    cout << "Total number of prime factors is " << c << endl;
    }
       return 0;
}
