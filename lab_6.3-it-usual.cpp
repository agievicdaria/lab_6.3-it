#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void createArray(int arr[], int size, int lower, int upper, int i) {
    arr[i] = lower + rand() % (upper - lower + 1);
    if (i < size - 1) {
        createArray(arr, size, lower, upper, i + 1);
    }
}

int sumOfSquares(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i] * arr[i];
    }
    return sum;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL)); 
    int size, min, max;

    cout << "Введіть розмір масиву: "; cin >> size;
    cout << "Введіть мінімальне значення масиву: "; cin >> min;
    cout << "Введіть максимальне значення масиву: "; cin >> max;

    int a[size];

    createArray(a, size, min, max, 0);

    cout << "Початковий масив: ";
    printArray(a, size);

    int sum = sumOfSquares(a, size);
    cout << "Сума квадратів елементів масиву: " << sum << endl;

    return 0;
}