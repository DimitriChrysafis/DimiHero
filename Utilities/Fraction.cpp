#include <unistd.h>
#include <chrono>
#include <thread>
#include <iostream>
using namespace std;
int gcd(int x, int y) {
      int big = max(x,y);
      int small = min (x,y);
       if(small == 0){
           return big;
       }
       int remainder = big % small;
       return gcd(small, remainder);
   }
int main()
{
    int num1,den1;
    cout << "Enter numerator and denominator of first number. Press enter after typing the numerator, and do not include a slash also, press enter after typing the denominator " << endl;
    cin >> num1 >> den1;
    int num2,den2;
    cout << "Enter numerator and denominator of second number: Press enter after typing the numerator, and do not include a slash also, press enter after typing the denominator" << endl;
    cin >> num2 >> den2;
    int lcm = (den1*den2)/gcd(den1,den2);
    int sum=(num1*lcm/den1) + (num2*lcm/den2);
    int num3=sum/gcd(sum,lcm);
    lcm=lcm/gcd(sum,lcm);
    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm << endl;
}
