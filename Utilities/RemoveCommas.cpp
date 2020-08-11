#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
void removeCommas(string& str1, int len)
{
    int j = 0;

    for (int i = 0; i < len; i++)
    {
        if (str1[i] == ',')
        {
            continue;
        }
        else
        {
            str1[j] = str1[i];
            j++;
        }
    }

    str1[j] = '\0';
}
int main(){
   string str1;
    getline(cin, str1);
    long long i = str1.length();
    removeCommas(str1, i);
    cout << "the new string " << str1 << endl;
}
