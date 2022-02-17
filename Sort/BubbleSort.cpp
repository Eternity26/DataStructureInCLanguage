//
// Created by 21182 on 2022/2/17.
//

void BubbleSort(int A[], int len) {
    for (int i = 0; i < len; i++) {
        int temp;
        bool flag = false;
        for (int j = i; j < len - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            return;
    }
}