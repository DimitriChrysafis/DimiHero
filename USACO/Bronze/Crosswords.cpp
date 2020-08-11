#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
using namespace std;
int main(){
   int x[1000];
   int y[1000];
   int count=0;
       int n, m;
        cin >> n >> m;
        char a[n+1][m+1];
        for(int i = 0; i < n+1; i++){
            for(int j=0;j<m+1;j++)
                a[i][j]='#';
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1;j<=m;j++)
                cin >> a[i][j];
        }
        for(int i = 1; i <= n; i++){
            for(int j=1;j<=m;j++){
                bool coordingx=(a[i-1][j]=='#' && a[i+1][j]=='.' && a[i+2][j]=='.' && a[i][j]=='.');
                bool scooby=(a[i][j-1]=='#' && a[i][j]=='.' && a[i][j+1]=='.' && a[i][j+2]=='.');

                if((scooby || coordingx) && (i <= n && j <= m)){
                    x[count]=i;
                    y[count]=j;
                    count++;
                }
            }
        }
        cout<< count <<endl;
        for(int i = 0; i < count; i++){
            cout << x[i] << " " << y[i] << endl;
        }
}
