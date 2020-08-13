#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
      long long int no;
      cin >> no;
      if (no > 21 or no <= 10) cout << 0 << endl;
      else if (no == 20)  cout << 15 << endl;
      else cout << 4 << endl;
}
