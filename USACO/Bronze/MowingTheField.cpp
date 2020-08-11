#include <math.h>
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <list>
#include <map>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char* argv[]) {
  int numOfLines;
  cin >> numOfLines;
  int counter = 1;
  int x = 1000;
  int y = 1000;
  int maxValue = 99999;
  static int array[2001][2001];
  array[x][y] = counter++;
  for (int i = 0; i < numOfLines; i++) {
    char direction;
    cin >> direction;
    int dx;
    int dy;
    if (direction == 'N') {
      dx = 0;
      dy = 1;
    } else if (direction == 'E') {
      dx = 1;
      dy = 0;
    } else if (direction == 'S') {
      dx = 0;
      dy = -1;
    } else if (direction == 'W') {
      dx = -1;
      dy = 0;
    }
    int numSteps;
    cin >> numSteps;
    for (int u = 0; u < numSteps; u++) {
      x += dx;
      y += dy;
      int oldValue = array[x][y];
      int newValue = counter;
      int dif = abs(newValue - oldValue);
      if (oldValue != 0 && dif < maxValue) {
        maxValue = dif;
      }
      array[x][y] = counter++;
    }
  }
  if (maxValue == 99999) {
    cout << -1;
    return 0;
  }
  cout << maxValue;
}
