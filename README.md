# Реализация методов сортировки на языке С++

### BubbleSort(сортировка пузырьком):

- Принцип работы: 
Принцип работы сортировки пузырьком заключается в последовательном проходе по массиву и сравнении соседних элементов. Если текущий элемент больше следующего, то они меняются местами. Этот процесс повторяется до тех пор, пока массив не будет полностью отсортирован.  
В начале каждой итерации внешнего цикла самый большой элемент "всплывает" на правильную позицию в конец массива. Затем, проходим по подмассиву без последнего элемента и повторяем этот процесс.  
Таким образом, на каждой итерации на правильную позицию всплывает один элемент, а общее количество итераций равно количеству элементов.  
После завершения сортировки, все элементы массива будут расположены в возрастающем порядке.

- Плюсы:  
1.Простота реализации - пузырьковая сортировка является одним из самых простых алгоритмов сортировки.  
2.Не требует дополнительной памяти - для сортировки массива не нужно выделять дополнительную память, что экономит ресурсы компьютера.  
3.Устойчивость - пузырьковая сортировка сохраняет порядок одинаковых элементов. Если два элемента равны, то они останутся в том же порядке после сортировки.
- Минусы:  
1.Медленная скорость работы - пузырьковая сортировка имеет квадратичную сложность времени (O(n^2)), что делает ее непрактичным для сортировки больших массивов данных.   
2.Неэффективность при частично отсортированных массивах - пузырьковая сортировка неэффективна при частично отсортированных массивах, так как она всегда проходит по всем элементам, даже если массив уже отсортирован.

- Визуализвция:  
![Alt text](https://media.proglib.io/wp-uploads/-000//1/596b722779f8b_Yb6G53y.gif)