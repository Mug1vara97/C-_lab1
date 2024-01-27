#include <iostream>
#include <vector>

using namespace std;

void insertSort(vector<int>& Array) {
//определение размера вектора
    int n = Array.size();
    for ( int i = 1; i < n; i++ ) {
        int key = Array[i];
        int j = i - 1;

        while (j >= 0 && Array[j] > key) {
            Array[j + 1] = Array[j];
            j--;
        }
        Array[j + 1] = key;
    }
}

int main() {
    vector<int> Array = { 21, 63, 81, 93, 44, 57, 99, 12, 33};

    insertSort(Array);

     cout << "Отсортированный: ";
    for (int num : Array) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}