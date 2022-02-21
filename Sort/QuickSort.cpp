//
// Created by 21182 on 2022/2/21.
//

int Partition(int [], int, int);

void QuickSort(int A[], int low, int high) {
    if (low < high) {
        int pivotPos = Partition(A, low, high);
        QuickSort(A, low, pivotPos - 1);
        QuickSort(A, pivotPos + 1, high);
    }
}

int Partition(int A[], int low, int high) {
    int pivot = A[low];
    while (low < high) {
        while (low < high && pivot <= A[high])
            high--;
        A[low] = A[high];
        while (low < high && pivot >= A[low])
            low++;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}
