#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int T;
    int N;
    int A[50];
    int B[50];
    cin >> T;
    for(int t = 0 ;   t < T ;  t++){
        long long result = 0;
        cin >> N;
        int mb = 1234567890;
        int mib = 1234567890;
        for(int i=0; i<N; i++){
            cin >> A[i];
            if(A[i] < mb) {
                mb = A[i];
            }
        }
        
        for(int  i = 0 ;  i < N ;  i++){
            cin >> B[i];
            if(B[i] < mib) {
                mib = B[i];
            }
        }
        
        for(int  i = 0 ;   i <N; i++){
            int da = A[i] - mb;
            int dfa = B[i] - mib;
            if(da < dfa){
                result += dfa;
            }
            else {
                result += da;
            }
        }
        cout << result << endl;
    }
}
