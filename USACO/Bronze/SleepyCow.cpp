    #include <array>
    #include <cmath>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #include <string>
    using namespace std;
    int main(int argc, const char* argv[]) {
        int Num;
        cin >> Num;
        int myarray[1000];
        int cc = Num-1;
        for (int i = 0; i < Num; i++) {
            cin >> myarray[i];
        }
        for (int i = Num - 2; i >= 0; i--) {
        if (myarray[i] < myarray[i + 1]) {
        cc = i;
        }
        else {
        break;
        }
        }
cout << cc;
        return 0;
    }
