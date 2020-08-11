#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    int x;
    cin >> x;
    int songs;
    cin >> songs;
    int arr[x];
    for(int y = 0; y < x; y++){
        cin >> arr[y];
    }
    for(int y = 0; y < songs; y++){
        int max = -1;
        int index = -1;
        for(int w = 0; w < x; w++){
            if(arr[w] > max){
                max  = arr[w];
                index = w;
            }
        }
        
        int q = max / (x-1);
        int r = max % (x-1);
        cout << index+1 <<  endl;
        for(int z = 0; z < x; z++){
            arr[z] += q;
        }
        int newindex = 0;
        while(r > 0){
            if(newindex != index){
                arr[newindex]++;
                r--;
            }
            newindex++;
        }
        arr[index] = 0;
    }
}


