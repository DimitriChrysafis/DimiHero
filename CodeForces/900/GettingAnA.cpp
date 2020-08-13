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
    int x;
    cin >> x;
    int arr[x];
    double counter = 0;
    int grades = 0;
    for(int i = 0; i < x; i++){
        cin >> arr[i];
        counter = counter + arr[i];
    }
    if(counter/x >= 4.5){
        cout << 0;
        return 0;
    }
    sort(arr, arr+x);
    while(counter/x < 4.5){
    counter += 5 - arr [ grades ] ;
    grades++;
    }
    cout << grades;
    return 0;
}
