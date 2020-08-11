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
    int no;
    cin >> no;
    int x[no], x1[no];
    int y[no], y1[no];
    for(int i = 0 ; i < no ; i++){
      cin >> x [i] >> y[i];
      x1[i] = x[i];
      y1[i] = y[i];
    }
    sort(x, x+no);
    sort(y, y+no);
    int minx=x[0], miny=y[0], maxx=x[no-1], maxy=y[no-1];
    int ans = (maxx-minx)*(maxy-miny);
    for(int p = 0 ; p < no ; p++){
      minx = x[0];
      maxx = x[no-1];
      miny = y[0];
      maxy = y[no-1];
        if(x1[p]==minx){
        minx=x[1];
        }
        if(x1[p]==maxx){
        maxx=x[no-2];
        }
        if(y1[p]==miny){
        miny=y[1];
        }
        if(y1[p]==maxy){
        maxy=y[no-2];
        }
        if((maxx-minx)*(maxy-miny)<ans){
          ans=(maxx-minx)*(maxy-miny);
        }
    }
    cout << ans << endl;
}
