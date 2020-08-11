#include <iostream>

using namespace std;

int main() {
    int star;
    star = 0;
    int x;
    cin >> x;
    int linenum = 0;
    int counter = 1;
    int formercounter=1;
    int space = 0;
    for (int linenum = 0; linenum < x; linenum++) {
        for(int u = 0; u<x-linenum; u++){
            cout<<" ";
        }
        for (int star = 0; star < 2*linenum+2; star++) {
            cout << "*";
            counter++;
        }
        cout << endl;
        counter=1;
    }
    for(int i = 0; i<x+1; i++){
        cout<<"**";
    }
    cout<<endl;

    for (int i = 0; i < x; i++) {
        for(int u = 0; u<i+1; u++){
            cout<<" ";
        }
        for (int j = 0; j < 2*x - 2*i; j++) {
            cout << "*";

        }
        cout << endl;
    }
}
