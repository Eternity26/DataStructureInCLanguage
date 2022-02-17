//
// Created by 21182 on 2022/2/17.
//

void ShellSort(int A[], int len) {
    int i, j, d, temp;
    for (d = len / 2; d >= 1; d = d / 2) {
        for (i = d; i < len; i++) {
            if (A[i] < A[i - d]) {
                temp = A[i];
                for (j = i; A[j] <= temp; j = j - d)
                    A[j] = A[j - d];
                A[j] = temp;
            }
        }
    }
}
