#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
        int first;
        cin >> first;
       while(first--){
           long long arr[3];
           cin >> arr[0];
           cin >> arr[1];
           cin >> arr[2];
           sort(arr,arr+3);
           if(arr[0] + arr[1] + 1 >= arr[2]){
               cout << "Yes" << endl;
           }
    
           else {
               cout << "No" << endl;
           }
       }
}
