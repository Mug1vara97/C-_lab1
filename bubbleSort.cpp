#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<double>& Array) {
    int n = Array.size();
    for (int i = 0; i < n - 1; i++ ) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (Array[j] > Array[j + 1]) {
                swap(Array[j], Array[j + 1]);
            }
        }
    }
}

int main() {
    vector<double> Array = { 2, 8 , 4, 37, 5, 8, 7};

    bubbleSort(Array);

    cout << "Отсортированный: ";
    for (int num : Array) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}