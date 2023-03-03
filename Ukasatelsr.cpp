#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

//нахождение среднего числа массива
double average(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return static_cast<double>(sum) / size;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Введите элементы массива: ";
        cin >> *(arr + i);
    }
    cout << "\n";
    double avg = average(arr, size);

    cout << "Среднее значение массива: " << avg << "\t" << "Размер массива:" << size << endl;

    delete[] arr;

    return 0;
}