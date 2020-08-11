#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include<algorithm>
#include<cmath>
using namespace std;
bool mainone(int a, int b){
  return abs(a)<=abs(b);
}
int main(){
  int te, no, total=0, count=1;
  cin >> te >> no;
  int a[no];
  int b[no];
  for(int i = 0;i < no ; i++){
    cin >> a[i];
    b[i] =a[i];
  }
  sort(b, b+no, mainone);
  while(total < te){
    total = total + abs(b[count]-b[count-1]);
    count++;
  }
  cout << count-1;
    cout << endl;
}
