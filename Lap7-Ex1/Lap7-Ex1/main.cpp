#include <iostream>
#include "functii.h"
using namespace std;
int main() {
    const int size = 5;
    int intArr[size] = { 3, 1, 4, 2 };
    char charArr[size] = { 'i', 'n', 'f', 'o'};

cout << "NR max in vector " << maxInVector(intArr, size) << std::endl;
cout << "NR min in vector " << minInVector(intArr, size) << std::endl;

    cout << "C.S. pt 4 " << sequentialSearch(intArr, size, 4) << std::endl;
  cout << "B.S pt 4 " << binarySearch(intArr, size, 4) << std::endl;

    cout << "B.s ";
    for (int i = 0; i < size; ++i) {
        cout << intArr[i] << " ";
    }
   

    bubbleSort(intArr, size);

    cout << "dupa bubble sort: ";
    for (int i = 0; i < size; ++i) {
        cout << intArr[i] << " ";
    }
    
    cout << endl;
   cout << "inainte de bubble sort  ";
    for (int i = 0; i < size; ++i) {
        cout << charArr[i] << " ";
    }
   
    bubbleSort(charArr, size);

   cout << "dupa bubble sort: ";
    for (int i = 0; i < size; ++i) {
      cout << charArr[i] << " ";
    }
  cout << endl;

    return 0;
}
