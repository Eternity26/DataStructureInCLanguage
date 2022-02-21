//
// Created by 21182 on 2022/2/21.
//

#include <climits>

void swap(int &, int &);

void SimpleSelectionSort(int A[], int len) {
    int startPos = 0;
    while (startPos <= len - 2) {
        int min = INT_MAX;
        int minPos = -1;
        for (int i = startPos; i < len; i++) {
            if (A[i] < min) {
                min = A[i];
                minPos = i;
            }
        }
        swap(A[minPos], A[startPos]);
        startPos++;
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
