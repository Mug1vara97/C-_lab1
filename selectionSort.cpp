#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& Array) {
    int n = Array.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (Array[j] < Array[minIndex]) {
                minIndex = j;
            }
        }

        swap(Array[minIndex], Array[i]);
    }
}

int main() {
    vector<int> Array = { 10, 4, 71, 32, 23, 41, 11, 1, 7};

    selectionSort(Array);

    cout << "Отсортированный: ";
    for (int num : Array) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}

