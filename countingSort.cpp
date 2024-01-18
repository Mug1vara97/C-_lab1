#include <iostream>
#include <vector>

using namespace std;

void countingSort(vector<int>& Array) {
    int maxValue = Array[0];
    for (int i = 1; i< Array.size(); i++) {
        if (Array[i] > maxValue) {
            maxValue = Array[i];
        }
    }

    vector<int> count(maxValue + 1, 0);

    for ( int i = 0; i < Array.size(); i++) {
        count[Array[i]]++;
    }

    int Index = 0;
    for (int i = 0; i < count.size(); i++) {
        for (int j = 0; j < count[i]; j++) {
            Array[Index] = i;
            Index++;
        }
    }
}

int main() {
    vector<int> Array = { 21, 63, 81, 93, 44, 57, 99, 12, 33};

    countingSort(Array);

    cout << "Отсортированный: ";
    for (int i = 0; i < Array.size(); i++) {
        cout << Array[i] << " ";
    }
    cout << endl;

    return 0;
}