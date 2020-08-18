#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;
void removeCommas(string& str1, int len){
    unsigned long long int j = 0;
    for (unsigned long long int i = 0; i < len; i++){
        if (str1[i] == ','){
            continue;
    }
        else{
            str1[j] = str1[i];
            j++;
        }
    }
str1[j] = '\0';
}
void removePeriod(string& str1, int len){
    unsigned long long int j = 0;
    for (unsigned long long int i = 0; i < len; i++){
        if (str1[i] == ','){
            continue;
        }
        else{
            str1[j] = str1[i];
            j++;
        }
    }

    str1[j] = '\0';
}
int main(){
    string stre = "Paste Text Here";
    transform(stre.begin(), stre.end(), stre.begin(), ::tolower);
      unsigned long long int i = stre.length();
    removePeriod(stre,i);
    removeCommas(stre,i);
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
