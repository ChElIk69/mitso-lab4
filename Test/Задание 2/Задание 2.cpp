#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ru");
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    double* arr = new double[n];


    for (int i = 0; i < n; i++) // add: int i = 0; i < n; i++
    {
        arr[i] = rand() % 100 - 50;
        cout << arr[i] << ' ' << endl;
    }

    double minNum = arr[0];
    double maxNum = arr[0];


    for (int i = 1; i < n; i++) { //remake i+ --> i++
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            arr[i] *= minNum * minNum;
        }
        else {
            arr[i] *= maxNum * maxNum; //make maxNum from mixNum
        }
    }

    cout << "Модифицированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // remake n --> i
    }

    delete[] arr;

    return 0;
}