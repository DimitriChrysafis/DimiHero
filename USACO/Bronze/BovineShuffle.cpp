
#include <iostream>
using namespace std;
int main(int argc, const char* argv[]) {
    int x;
    cin >> x;
    int arr[x];
    for(int y  = 0; y < x; y++){
        cin  >> arr[y];
        arr[y]--;
    }
    int ID[x];
    for(int y  = 0; y < x; y++){
        cin  >> ID[y];
    }
    int myArray[x];
    for(int y  = 0; y < x; y++){
        int i = arr[y];
        int j = arr[i];
        int k = arr[j];
        myArray[y] = k;
    }
    for(int y  = 0; y < x; y++){
        cout << ID[myArray[y]];
        cout << endl;
    }
}



