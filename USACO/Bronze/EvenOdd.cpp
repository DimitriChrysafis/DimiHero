#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <iostream>
int main(int argc, const char* argv[]) {
    using namespace std;
    int p;
    cin >> p;
    string o[p];
    for(int y = 0; y < p ; y++){
        cin >> o[y];
    }
    for(int y = 0; y < p ; y++){
        long length = o[y].size();
        if(o[y][length - 1] == '0' || o[y][length - 1] == '2' || o[y][length -1] == '4' || o[y][length - 1] == '6' || o[y][length - 1] == '8' ){
            cout << "even" << endl;
        }else{
            cout << "odd" << endl;
        }
    }
}






