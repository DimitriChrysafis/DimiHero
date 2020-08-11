#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  char b[n][n];
  for(int i = 0; i < n; i++){
      for(int j = 0 ; j < n ; j++){
      cin >> b[i][j];
      }
    }
  int scooby=0;
    for(int p = n-1; p >= 0; p--) {
for(int q = n-1; q >= 0; q--) {
    if(b[p][q] == '1') {
        scooby++;
        for(int k = 0; k <= p; k++) {
            for(int l = 0; l <= q; l++) {
            if(b[k][l] == '0') {
                b[k][l] = '1';
            }
            else {
        b[k][l] = '0';
                    }
            }
        }
            }
        }
        }
    cout << scooby;
}
