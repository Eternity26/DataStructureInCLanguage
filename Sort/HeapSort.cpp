//
// Created by 21182 on 2022/2/23.
//

//数组A[0]留空

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void AdjustMaxHeap(int [], int, int);

void BuildMaxHeap(int A[], int len) {
    for (int i = len / 2; i > 0; i--)
        AdjustMaxHeap(A, i, len);
}

void AdjustMaxHeap(int A[], int k, int len) {
    for (int i = 2 * k; i <= len; i = i * 2) {
        if (i + 1 <= len && A[i] < A[i + 1])
            i++;
        if (A[k] >= A[i])
            break;
        else {
            swap(A[k], A[i]);
            k = i;
        }
    }
}

void HeapSort(int A[], int len) {
    BuildMaxHeap(A, len);
    for (int i = len; i > 1; i--) {
        swap(A[1], A[i]);
        AdjustMaxHeap(A, 1, i - 1);
    }
}
