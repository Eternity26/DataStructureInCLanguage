//
// Created by 21182 on 2022/2/17.
//

void InsertionSortWithBinarySearch(int A[], int len) {
    int i, k, temp, high, low, mid;
    for (i = 1; i < len; i++) {
        temp = A[i];
        low = 0;
        high = i - 1;
        mid = (low + high) / 2;
        while (true) {
            if (low > high)
                break;
            if (A[mid] == A[i])
                low = mid + 1;
            if (A[i] < A[mid])
                high = mid - 1;
            if (A[i] > A[mid])
                low = mid + 1;
            mid = (low + high) / 2;
        }
        for (k = i; k > low; k--)
            A[k] = A[k - 1];
        A[low] = temp;
    }
}
