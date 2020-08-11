#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
     string stre("Paste text here");
    string scooby;
    istringstream bob(stre);
    map<string, size_t> occurrences;
    while (bob >> scooby){
        ++occurrences[scooby];
    }
    for (map<string,size_t>::iterator it = occurrences.begin();
         it != occurrences.end(); it++){
        if(it->second > 1){
        cout << "Word: " << it->first << "\t Occurrences: " << it->second << endl;
        this_thread::sleep_for(chrono::milliseconds(10) );
        }
    }
    cout << "If the program ended without printing anything, that means that there is no work that appears more than used more than one time"<< endl;
    cin.get();
}
