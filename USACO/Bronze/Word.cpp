#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <fstream>
using namespace std;
int main(){
    long long numofwords;
    long long index;
    cin >> numofwords;
    cin >> index;
    long long counter = 0;
    for (int e = 0; e < numofwords; e++) {
            string actuallmente;
            cin >> actuallmente;
            if (counter + actuallmente.size() > index) {
                cout << endl;
                cout << actuallmente;
                counter = actuallmente.size();
            } else {
                if (e>0) cout << " ";
                cout << actuallmente;
                counter = counter+actuallmente.size();
            }
        }
        cout << endl;
    return 0;
    }
