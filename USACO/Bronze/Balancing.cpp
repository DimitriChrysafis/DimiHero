#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include<algorithm>
using namespace std;
int main(){
    int no, bo;
    cin >> no >> bo;
    int xl[no], yl[no];
    for(int i = 0; i < no ; i++)
        cin >> xl[i] >> yl[i];
    int sol = no;
        for(int i = 0; i < no; i++){
            for(int j = 0; j < no; j++) {
                int nou = xl[i]+1;
                int nouu = yl[j]+1;
                int nouuu = 0;
                int nouuuu = 0;
                int nouuuuu = 0;
                int nouuuuuu = 0;
                for(int i = 0; i < no; i++){
                    if(xl[i] < nou && yl[i] < nouu) {
                        nouuuuu++;
                    }
                    if(xl[i] < nou && yl[i] > nouu) {
                        nouuu++;
                    }
                    if(xl[i] > nou && yl[i] < nouu) {
                        nouuuuuu++;
                    }
                    if(xl[i] > nou && yl[i] > nouu) {
                        nouuuu++;
                    }
                }
                int best = 0;
                if(nouuu > best) best = nouuu;
                if(nouuuu > best) best = nouuuu;
                if(nouuuuu > best) best = nouuuuu;
                if(nouuuuuu > best) best = nouuuuuu;
                if(best < sol) sol = best;
            }
        }
    cout << sol;
}
