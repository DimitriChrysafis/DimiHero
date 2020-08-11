#include <iostream>

int main(int argc, const char* argv[]) {
    using namespace std;
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int x4;
    int y4;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
    int minx1x2 = min(x1,x2);
    int minx3x4 = min(x4,x3);
    int minx = min(minx1x2, minx3x4);
    int maxx1x2 = max(x1,x2);
    int maxx3x4 = max(x4,x3);
    int maxx = max(maxx1x2, maxx3x4);
    
    
    int miny1y2 = min(y1,y2);
    int miny3y4 = min(y4,y3);
    int miny = min(miny1y2, miny3y4);
    int maxy3y4 = max(y4,y3);
    int maxy1y2 = max(y1,y2);
    int maxy = max(maxy1y2, maxy3y4);
    
  
    
    int base = maxx - minx;
    int height = maxy - miny;
    int maxdim = max(base , height);
    cout << maxdim * maxdim <<endl;
};

