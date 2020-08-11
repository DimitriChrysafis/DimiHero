#include <unistd.h>
#include <chrono>
#include <thread>
#include <iostream>
using namespace std;

int main()
{
   cout << "Here, you can input a number n and a base m. The number n is in base 10. Then, I will output n in base m" << endl;
    int athingie, aweirdnumber, breakfast;
    unsigned int mythingamajig;
    string iusestrings, answer;
    cout << "Now, input n, in base 10. Make sure to press enter after you do." << endl;
    cin >> mythingamajig;
    cout << "Now input m, the base you want it to be converted to. Make sure to press enter after you do." << endl;
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
    cout << answer << endl;
    return 0;
}
