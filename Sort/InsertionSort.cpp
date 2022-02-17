//
// Created by 21182 on 2022/2/16.
//

void InsertionSort(int A[], int len) {
    int i, j;
    for (i = 1; i < len; i++) {
        int temp = A[i];
        for (j = i; j >= 1 && temp <= A[j - 1]; j--)
            A[j] = A[j - 1];
        A[j] = temp;
    }
}