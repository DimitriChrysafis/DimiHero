#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
    int n;
    int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int w[7] = {0};
    int d= 0;
    cin >> n;
    for (int y = 1900; y < 1900 + n; y++)
    {
      if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
      {
        m[1] = 29;
      }
      else
      {
        m[1] = 28;
      }
      
      for(int i = 0; i < 12;i++)
      {
        for(int j = 0; j < m[i]; j++ )
        {
          if (j == 12)
          {
            w[d]++;
          }
          
          if (d== 6)
          {
            d= 0;
          }
          else
          {
            d++;
          }
        }
      }
    }
    cout <<w[5] << " " << w[6] << " " << w[0] << " " << w[1] << " " << w[2] << " " << w[3] << " " << w[4] << endl;
    return 0;
}
