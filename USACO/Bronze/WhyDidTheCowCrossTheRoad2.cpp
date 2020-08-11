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
string extract(char c, char c1, string s){
    string out;
    for(int i = 0; i < 52; i++){
        if (s[i] == c || s[i] == c1){
            out += s[i];
        }
    }
    return out;
}

int main(int argc, const char* argv[]) {
    string s;
    cin >> s;
    int counter = 0;
    for(char i = 'A'; i <= 'Z'; i++){
      for(char j = 'A'; j <= 'Z'; j++){
          if (i >= j){
              continue;
          }
          string onlyTwoCows = extract(i, j, s);
          if(onlyTwoCows[0] == onlyTwoCows[1] ||onlyTwoCows[1] == onlyTwoCows[2] ||onlyTwoCows[2] == onlyTwoCows[3]){
              
          }else{
              counter++;
          }
         //cout << onlyTwoCows <<  " " << counter << endl;
        }
    }
    cout << counter;
}


