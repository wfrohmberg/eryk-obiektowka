#include <algorithm.h>
#include <selection_sort.h>

void SelectionSort::execute() {
    int n = sortingProblemInstance->size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (sortingProblemInstance->isGreater(minIndex, j)) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            sortingProblemInstance->swap(i, minIndex);
        }
    }
}

REGISTER_ALGORITHM("selection_sort", SelectionSort);