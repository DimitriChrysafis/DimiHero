#include <algorithm>
#include <array>
#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char* argv[]) {
    using namespace std;
    int total;
    cin >> total;
    float happyfrugal[total];
    float happy[total];
    float money[total];
    float user[total];
    int arr[3];
    int counter = 0;
    int moneycounter = 0;
    for(int i = 0; i < total; i++){
        cin >> happy[i];
        cin >> money[i];
        happyfrugal[i] = happy[i]/money[i];
        user[i] = happy[i]/money[i];
    }
    sort(happyfrugal, happyfrugal + total, greater<float>());
    for(int s=0; s < total; s++){
        for(int r=0; r < total; r++){
            if(happyfrugal[s] == user[r]){
                if(counter < 3){
                    arr[counter ] = r+1;
                     moneycounter = moneycounter + money[r];
                counter++;
                }
            }
        }
    }
    cout << moneycounter << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
}


