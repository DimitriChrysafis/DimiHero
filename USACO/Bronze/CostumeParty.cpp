#include <algorithm>
#include <array>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    int x;
    cin >> x;
    int arr[x];
    int length;
    cin >> length;
    int counter = 0;
    for(int y = 0; y < x; y++){
        cin >> arr[y];
    }
     sort(arr, arr+x);
    for(int a = 0; a < x; a++){
        for(int b = a + 1; b < x; b++){
            if(arr[a] + arr[b] <= length){
                counter++;
            }else  if(arr[a] + arr[b] > length){
                break;
            }
        }
    }
    cout << counter;
}



