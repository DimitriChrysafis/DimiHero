#include <iostream>
#include <cmath>

using namespace std;



int divSum(int n)
{
    int result = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == (n / i))
                result += i;
            else
                result += (i + n/i);
        }
    }
    return (result + 1);
}

bool isSuper(int n){
    if(n == divSum(divSum(n))){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for(int i = n; i < 20000; i++){
        if(isSuper(i) == true && divSum(i) != i){
            int k = divSum(i);
            cout << i << " " << k;
            return 0;
        }
    }
}
