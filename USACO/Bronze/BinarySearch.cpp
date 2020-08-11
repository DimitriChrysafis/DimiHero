#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int binarySearch(int super[], int minindex, int maxindex, int num) {
     int midindex = (minindex + maxindex)/2;
    if(minindex >= maxindex){
        if(super[maxindex] == num){
                 return maxindex;
        }else{
            return -1;
        }
   
    }
       if (super[midindex] > num) {
      return binarySearch(super, minindex, midindex-1 , num);
       }
    else  if (super[midindex] < num) {
      return binarySearch(super, midindex+1, maxindex, num);
    }else{
       return binarySearch(super, minindex, midindex , num);
    }
}
int main(void) {
    int inputs;
    cin >> inputs;
    int questions;
    cin >> questions;
    int arr[inputs];
    int q[questions];
    int first[inputs];
    int counter[inputs];
    for(int i = 0; i < inputs; i++){
        cin >> arr[i];
        counter[i] = 0;
    }
    for(int f = 0; f < questions; f++){
        cin >> q[f];
    }
    for(int f = 0; f < questions; f++){
      int index = binarySearch (arr, 0, inputs-1, q[
                                                    f]);
      first[f] = index;
        }
    for(int f = 0; f < questions; f++){
        cout << first[f] << endl;
    }
}
