    #include <iostream>
    #include <vector>
    #include <map>
    #include<tuple>
    #include <set>
    #include <stack>
    #include <algorithm>
    #include <string>
    using namespace std;
vector <tuple <int, int, char>> super;
int main(int argc, const char* argv[]) {
        int n;
        cin >> n;
        int c = 100000;
        int b;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            cin >> b;
            super.push_back(make_tuple(a, i, 'B'));
            super.push_back(make_tuple(b, i, 'C'));
        }
        sort(super.begin(), super.end());
        int counter = 0;
        int curVal;
        int nextVal;
        int ofShift[10000];
        for (int i = 0; i < n; i++) {
            ofShift[i] = 0;
        }
        set <int> mySet;
        int gapSize = 0;
        for (int i = 0; i < 2 * n - 1; i++) {
            curVal = get<0>(super[i]);
            nextVal = get<0>(super[i + 1]);
            int length = (nextVal - curVal);
            int id = get<1>(super[i]);
            if (get<2>(super[i]) == 'B') {
                mySet.insert(id);
            }
            else {
                mySet.erase(id);
            }
            int idChange;
            if (!mySet.empty()) {
                gapSize += length;
            }
            if (mySet.size() == 1) {
                idChange = *mySet.rbegin();
                ofShift[idChange] += length;
            }
        }
        int min = ofShift[0];
        for (int i = 0; i < n; i++) {
            if (ofShift[i] < min) {
                min = ofShift[i];
            }
        }
        int m = gapSize - min;
        cout << m << endl;
    }
