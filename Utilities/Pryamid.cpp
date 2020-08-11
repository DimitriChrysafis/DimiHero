        #include <iostream>
        #include <unistd.h>
        #include <chrono>
        #include <thread>
        using namespace std;

        int main(){
            int rows, i, j, space;

            cout << "Enter number of rows: ";
            cin >> rows;

            for(i = 1; i <= rows; i++)
            {
               for(space = i; space < rows; space++)
               {
                  cout << " ";
               }
               for(j = 1; j <= (2 * i - 1); j++)
               {
                  cout << "*";
                    this_thread::sleep_for(chrono::milliseconds(500) );
               }

               cout << "\n";
            }

            return 0;
        }
