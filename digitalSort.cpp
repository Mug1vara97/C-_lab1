#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void digitalSort(vector<int>& Array) {
    int maxValue = *max_element(Array.begin(), Array.end());

    for( int exp = 1; maxValue / exp > 0; exp *= 10) {
        vector<int> output(Array.size());

        int count[10] = {0};

        for (int i  = 0; i < Array.size(); i++) {
            count[(Array[i] / exp) % 10]++;
        } 

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = Array.size() - 1; i >= 0; i--) {
            output[count[(Array[i] / exp) % 10] - 1] = Array[i];
            count[(Array[i] / exp) % 10]--;
        }

        for (int i = 0; i < Array.size(); i++) {
            Array[i] = output[i];
        }
    }
}

int main() {
    vector<int> Array = {170, 45,  75, 90, 802, 24, 2, 66};

    digitalSort(Array);

     cout << "Отсортированный: ";
    for (int num : Array) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}