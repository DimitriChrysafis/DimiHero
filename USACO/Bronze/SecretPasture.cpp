#include <algorithm>
#include <array>
#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>
int main(int argc, const char* argv[]) {
    using namespace std;
    int n;
    cin >> n;
    int k = sqrt(n);
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int counter=0;
    for(a=0; a <=k ; a++){
        for(b=0; b <=k ; b++){
               for(c=0; c <=k ; c++){
                      for(d=0; d <=k ; d++){
                          if(a*a + b*b + c*c + d*d == n ){
                              counter++;
                            }
                        }
                }
           }
     }
    cout << counter << endl;
}


 
