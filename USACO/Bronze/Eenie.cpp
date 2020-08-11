#include <array>
#include <cmath>
#include <iostream>
using namespace std;

void eliminate(int* array, int size, int start) {
  for (int u = start; u < size - 1; u++) {
    swap(array[u], array[u + 1]);
  }
}

int main(int argc, const char* argv[]) {
  using namespace std;
  int NumOfCows;
  cin >> NumOfCows;
  int array1[NumOfCows];
  for (int y = 0; y < NumOfCows; y++) {
    array1[y] = y + 1;
  }
  int NumOfSteps;
  cin >> NumOfSteps;
  int array2[NumOfSteps];
  for (int y = 0; y < NumOfSteps; y++) {
    cin >> array2[y];
  }
  int start = 0;
  int newSize = NumOfCows;
  int stepID = 0;
  for (int cowID = 0; cowID < NumOfCows - 1; cowID++) {
    start += array2[stepID] - 1;
    start %= newSize;

    //cout << start << " " << array1[start] << " " << newSize << endl;

    eliminate(array1, newSize, start);

    newSize--;
    stepID++;
    if (stepID >= NumOfSteps) {
      stepID = 0;
    }
  }
  cout << array1[0];
}


