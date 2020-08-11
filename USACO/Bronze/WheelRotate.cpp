#include <iostream>
using namespace std;
int main(){
    int xcvxv, ssss, dsss, csss;
    int flipsss = 0;
    cin >> xcvxv;
    for (int i = 0; i < xcvxv-1; i++) {
    cin >> ssss >> dsss >> csss;
    flipsss ^= csss;
    }
    cout << flipsss <<endl;
}
