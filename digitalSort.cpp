#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void digitalSort(vector<int>& Array) {
// поиск максимального числа в массиве
    int maxValue = *max_element(Array.begin(), Array.end());
//Инициализация вспомогательного вектора для временного хрпнения чмсел
    for( int x = 1; maxValue / x > 0; x *= 10) { 
        vector<int> output(Array.size());
//Инизилизирую счётчик для каждой цифры
        int count[10] = {0};
//Увеличение соответствующего счётчика для каждого числа
        for (int i  = 0; i < Array.size(); i++) {
            count[(Array[i] / x) % 10]++;
        } 
//Подсчёт суммы счтётчиков для определения позиции чисел
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
//Распределение числа в спомогатнльном векторе на основе счётчика
        for (int i = Array.size() - 1; i >= 0; i--) {
            output[count[(Array[i] / x) % 10] - 1] = Array[i];
            count[(Array[i] / x) % 10]--;
        }
//Копирование отсортированного вектораобратно в исходный массив
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