#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
for (int i = 0; i < size - 1; ++i) {
for (int j = 0; j < size - i - 1; ++j) {
if (arr[j] > arr[j + 1]) {
// Swap using temporary variable
T temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}

template <typename T>
void printArray(T arr[], int size) {
for (int i = 0; i < size; ++i)
cout << arr[i] << " ";
cout << endl;
}
int main() {
int intArr[] = {5, 2, 8, 1, 3};
float floatArr[] = {4.2, 2.1, 8.7, 1.0, 3.3};
char charArr[] = {'z', 'b', 'u', 'a', 'm'};
int size = 5;
cout << "Original Integer Array: ";
printArray(intArr, size);
sortArray(intArr, size);
cout << "Sorted Integer Array: ";
printArray(intArr, size);
cout << "\nOriginal Float Array: ";
printArray(floatArr, size);
sortArray(floatArr, size);
cout << "Sorted Float Array: ";
printArray(floatArr, size);
cout << "\nOriginal Character Array: ";
printArray(charArr, size);
sortArray(charArr, size);
cout << "Sorted Character Array: ";
printArray(charArr, size);
return 0;
}
	
	
			
