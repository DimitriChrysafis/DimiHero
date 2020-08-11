#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    int notes;
    cin >> notes;
    int questions;
    cin >> questions;
    int notelength[notes];
    int length = 0;
    int major[questions];

    for(int i = 0; i < notes; i++){
        cin >> notelength[i];
        length+= notelength[i];
       
    }
     for(int p = 0; p < questions; p++){
         cin >> major[p];
    }
    int b;
  
    
    int arr[length];
    int index = 0;
    for(int f = 0; f < notes; f++){
        int current = notelength[f];
        for(int o = 0; o < current; o++){
            arr[index] = f + 1;
            index++;
        }
    }

    

    for(int y = 0; y < questions; y++){
       b = major[y];
       cout << arr[b] << endl;
       
    }
}
