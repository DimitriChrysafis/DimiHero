#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
string program(string a, string b)
{
    string hffff = "";
    int s = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)    {
        s+=((i>=0)?a[i]-'0':0);
        s+=((j >= 0)?b[j]-'0':0);
        hffff=char(s % 2 + '0') + hffff;
        s/=2;
        i--;
        j--;
    }
    return hffff;
}
  
int main(){
    string a;
      cin>>a;
      string b=a+"0000";
      cout << program(a, b) << endl;
}

