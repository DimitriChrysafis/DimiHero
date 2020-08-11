
#include <iostream>
int main(int argc, const char* argv[]) {
    using namespace std;
    int numOfCows;
    int rows;
    cin >> numOfCows;
    cin >> rows;
    int t[numOfCows];
    int start[numOfCows];
    for(int p = 0; p < numOfCows; p++){
        t[p] = 0;
        start[p] = 0;
    }
    for(int u = 0; u < rows; u++){
        int x;
        cin >> x;
        x--;
        string word;
        cin >> word;
        int hours;
        int minutes;
        cin >> hours;
        cin >> minutes;
        int timeinminutes = hours * 60 + minutes;
        if(word == "START"){
            start[x] = timeinminutes;
        }else{
            t[x] += timeinminutes - start[x];
        }
    }
    for(int q = 0; q < numOfCows; q++){
        int hours = t[q] / 60;
        int minutes = t[q] % 60;
        cout << hours << " " << minutes << endl;
    };
}

