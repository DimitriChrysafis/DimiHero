#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <cmath>
using namespace std;
void lool(int p, int r, int counter){
    for(int i = p; i < r+1; i++){
        counter += i * pow(-1,i);
    }
        cout << counter << endl;
}
int main(){
    int x;
    cin >> x;
    int arr[x];
    int arrs[x];
    int counter = 0;
    for(int i = 0; i < x; i++){
        cin >> arr[i];
        cin >> arrs[i];
    }
    for(int i = 0; i < x; i++){
        lool(arr[i], arrs[i], counter);
        counter = 0;
    }
    return 0;
}
