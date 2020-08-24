// https://github.com/DimitriChrysafis/DimiHero
// https://www.dimitri.page/
// https://dimitrichrysafis.wixsite.com/mysite
// https://dimitric.weebly.com/
#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int oatmeal(){
    
    const ll rub=50;
    ll sal[rub+1]={0};

    sal[0]=1;
    sal[1]=1;
    sal[2]=1;
    for(int n =  3; n <= rub ; n++){
        sal[ n ] = 1 + sal [ n - 1 ] ;
        for(int m = 3 ; m <= n - 1; m++){
            sal[n] += sal[n-1-m];
            
        }
        
    }
    cout << sal[rub] <<endl;
    return sal[rub];
}

int main() {
    oatmeal();
}
