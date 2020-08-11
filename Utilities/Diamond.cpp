#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <fstream>
using namespace std;
int main(){
    int x;
    cin >> x;
    for(;;){
        int star;
        star = 0;
        
        int counter = 1;
        for (int linenum = 0; linenum < x; linenum++) {
            for(int u = 0; u<x-linenum; u++){
                cout<<" ";
                this_thread::sleep_for(chrono::milliseconds(1) );
            }
            for (int star = 0; star < 2*linenum+2; star++) {
                cout << "█";
                this_thread::sleep_for(chrono::milliseconds(1) );
                counter++;
            }
            cout << endl;
            counter=1;
        }
        for(int i = 0; i<x+1; i++){
            cout<<"██";
            this_thread::sleep_for(chrono::milliseconds(1) );
        }
        cout<<endl;

        for (int i = 0; i < x; i++) {
            for(int u = 0; u<i+1; u++){
                cout<<" ";
            this_thread::sleep_for(chrono::milliseconds(1) );
            }
            for (int j = 0; j < 2*x - 2*i; j++) {
                cout << "█";
                this_thread::sleep_for(chrono::milliseconds(1) );

            }
            cout << endl;
        }
    }
    }
 
