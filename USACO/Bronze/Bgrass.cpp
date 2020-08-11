#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
   int n, m, counter=0;
      cin>>n>>m;
      char a[n][m];
      for(int i = 0 ; i < n ; i++){
          for(int j = 0; j < m ; j++)
          cin >> a[i][j];
      }
      for(int i = 0; i < n ; i++){
          for(int j = 0;j < m ;j++){
              if(i == 0 && j == 0 && a[i][j] =='#'){
              counter++;
                  }
              else if(i ==0 && j!=0 && a[i][j]=='#' && a[i][j-1]!='#'){
              counter++;
                  }
              else if(j ==0 && i!=0 && a[i][j]=='#' && a[i-1][j]!='#'){
              counter++;
                  }
              else{
                  if(a[i][j-1]!='#' && a[i][j]=='#' && a[i-1][j]!='#')
                  counter++;
              }
          }
      }
      cout << counter;
}
