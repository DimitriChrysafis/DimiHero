#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;
int main(){
 long long  T;
    cin >> T;
    while(T--){
     int n,i;
     cin>>n;
     int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
     sort(a,a + n , greater<int>());
                for(i = 0 ; i < n ;i++){
                    cout<<a[i]<<" ";
                }
     cout << endl;
    }
}

