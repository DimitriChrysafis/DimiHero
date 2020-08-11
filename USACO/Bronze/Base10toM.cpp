#include <iostream>
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    int athingie, aweirdnumber, breakfast;
    unsigned int mythingamajig;
    string iusestrings, answer;
    cin >> mythingamajig;
    cin >> breakfast;

    athingie = mythingamajig;

    while (mythingamajig != 0){
        aweirdnumber = mythingamajig % breakfast;

        if (aweirdnumber < 10)
            iusestrings = '0' + aweirdnumber;
        else
            iusestrings = aweirdnumber - 10 + 'A';

        answer = iusestrings + answer;

        mythingamajig /= breakfast;
    }
    cout << answer;
    return 0;
}
