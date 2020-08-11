        #include <cmath>
        #include <vector>
        #include <iostream>
        #include <algorithm>
        #include <string>
        using namespace std;
    int rev(int num){
        int hopefullythisworksjfj = 0;
        while(num > 0){
            hopefullythisworksjfj = hopefullythisworksjfj * 10 + num % 10;
            num = num/10;
        }
        return hopefullythisworksjfj;
    }
        int main(int argc, const char* argv[]) {
            int x;
            cin >> x;
            int counter = 0;
           for(;;){
               if(x == rev(x)){
                   cout << counter << " " << x;
                   return 0;
               }
               else{
                   counter++;
                    x = rev(x) + x;
               }
           }
        }
