#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T sumOfSquares(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i] * arr[i];
    }
    return sum;
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
void inputArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Введіть елемент" << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {
    const int size = 5; 

    double a[size];
    cout << "Введіть числа:" << endl;
    inputArray(a, size);

    cout << "Початковий масив: ";
    printArray(a, size);

    double sum = sumOfSquares(a, size);
    cout << "Сума квадратів елементів масиву: " << sum << endl;

    return 0;
}