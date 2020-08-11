#include <array>
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char* argv[]) {
  int das;
    int super;
  cin >> das;
    cin >> super;
  int food;
  for (int x = 0; x < das; x++){
    for (int y = 0; y < x; y++){
      cout << "  ";
    }
    food = super;
    for (int interval = 0; interval < das - x; interval++)
    {
      cout << ((food - 1)%9)+1;
      if (interval!=das-x-1)
        cout << " ";
      food=food+x+interval+1;
    }
    cout << endl;
    super=super+x+2;
  }
}
