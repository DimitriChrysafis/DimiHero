#include <iostream>
int main(int argc, const char* argv[]) {
    using namespace std;
    int numBaleCounts; // This will be 4 in the example abobe
    int numQueries; // This will be 2 in the example above
 cin >> numBaleCounts;
    int baleCounts[numBaleCounts];  // This will be 5, 8, 12, and 6 why multiple numbers
    cin >> numQueries;
// Read in the bale counts
for (int u=0;u<numBaleCounts;u++) {
    cin >> baleCounts[u];
}

for (int u=0;u<numQueries;u++) {
int start;
int end;
   cin >> start;
   cin >> end;
int sum = 0;
  for (int index=start;index<=end; index++) {
    sum +=baleCounts[index-1];
  }
cout << sum << endl;
}
}
