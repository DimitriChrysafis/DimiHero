#include <iostream>
#include <fstream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    string a;
    string b;
    cin >> a >> b;
    int gdfgdfg = 1;
    for (int i=0;i<a.size();++i){
        gdfgdfg *= a[i]-'A'+1;
    }
    int productb = 1;
    for (int i = 0 ; i < b.size(); i++){
        productb *= b[i] - 'A' + 1;
    }
    if(gdfgdfg % 47 == productb % 47){
        cout<< "GO" <<endl;
        }
    else{
        cout<< "STAY" <<endl;
        }
    return 0;
}
