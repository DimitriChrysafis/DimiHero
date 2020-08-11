#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
    
    long long n, i;

    cout << "Enter a positive integer: ";
    cin >> n;
    long long counter = 1;
    cout << "Factors of " << n << " are: " << endl;
    for(i = 1; i <= n; ++i){
        if(n % i == 0){
              this_thread::sleep_for(chrono::milliseconds(10) );
            cout << "Factor number " << counter << " is "<< i << endl;
            counter++;
        }
    }
 cout << "The Numnber Of Factors is:" << counter  -1<< endl;
    return 0;
}
