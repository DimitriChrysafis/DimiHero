#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr [ n ];
        int  f = 0;
        int i;
        for( i = 0 ;i < n ; i++){
            cin >> arr[i];
        }
        for( i = 1 ; i < n - 1 ; i++){
             if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                 cout << "YES" << endl;
                 cout << i << " " << i+1 << " " << i+2 << endl;
                 f = 1;
                 break;
             }
        }
        if(!f)
        cout << "NO"  << endl;
    }
}
