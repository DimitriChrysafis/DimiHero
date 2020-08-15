#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
int no, bo[10][10];
bool fin(int c){
  for (int i = 0 ; i < no;i++)
    for ( int j = 0 ; j < no ;j++)
        if (bo[ i ] [ j ]==c)
    return true;
  return false;
}
bool nope(int c1, int c2){
  int to = no, boto = 0 ,   leo = no, rio =0;
  for (int i = 0 ; i < no;i++)
    for (int  j = 0 ; j < no;j++)
      if (bo[ i ] [ j ] == c2) {
    to = min(to, i);
    boto = max(boto, i);
    leo = min(leo, j);
    rio = max(rio, j);
      }
  for (int  i = to ; i <= boto ; i++)
    for (int j = leo ; j <= rio; j++)
      if (bo[ i ] [ j ]  == c1)
    return true;
  return false;
}
int main(){
    cin >> no;
    for (int i = 0; i < no ;i++) {
      string final;
      cin >> final;
      for (int j = 0 ; j < no ;j++)
        bo[i][j] = final[j]-'0';
    }
    int tal=0;
    
    for (int  i = 1 ; i <= 9;i++)
      if (fin(i)){
        bool isfirst = true;
        for (int j = 1 ; j <= 9 ; j++)
      if (j!= i and fin(j) and nope(i,j))
        isfirst = false;
          if (isfirst){
      tal++;
          }
      }
    cout << tal << endl;
}
