#include <iostream>

int main(int argc, const char* argv[]) {
    using namespace std;
    int month;
    int hours;
    int minutes;
    cin >> month;
    cin >> hours;
    cin >> minutes;
    int start = 11 * 60 * 24 + 11 * 60 + 11;
    int end  = month * 60 * 24 + hours * 60 + minutes;
    int diff = end - start;
    cout << diff;
};


