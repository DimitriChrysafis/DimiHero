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
  long long t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n == 1){
            cout<<-1;
        }else{
            string ans = "23";
            for(int i = 0; i < n - 2 ; i++){
                ans += "3";
            }
            cout << ans;
            
        }
        cout << endl;
    }
}

