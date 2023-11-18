#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

template <typename T>
T sumOfSquaresTmpl(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i] * arr[i];
    }
    return sum;
}

template <typename T>
void printArrayTmpl(T arr[], int size) {
    cout << "Початковий 2 масив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
void generateArrayTmpl(T arr[], int size, T Low, T High) {
    for (int i=0; i<size; i++) {
        arr[i] = Low + rand() % (High-Low+1);
    }
}

void generateArray(int arr[], int size, int Low, int High) {
    for (int i=0; i<size; i++) {
        arr[i] = Low + rand() % (High-Low+1);
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
    cout << "Початковий 1 масив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL)); 
    int min, max;
    const int size = 5;
    cout << "Введіть мінімальне значення масиву: "; cin >> min;
    cout << "Введіть максимальне значення масиву: "; cin >> max;
    int a[size];

    generateArray(a, size, min, max);
    generateArrayTmpl(a, size, min, max);

    printArray(a, size);
    printArrayTmpl(a, size);

    int sum = sumOfSquares(a, size);
    int sumTmpl = sumOfSquaresTmpl(a, size);
    cout << "Сума квадратів елементі 1 масиву: " << sum << endl;
    cout << "Сума квадратів елементів 2 масиву: " << sumTmpl << endl;

    return 0;
}