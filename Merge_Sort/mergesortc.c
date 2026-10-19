#include <stdio.h>
int A[1000], B[1000];
void merge(int l, int m, int r) {
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r) {
        if (A[i] <= A[j]) {
            B[k] = A[i];
            i++;
        } else {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= m) {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= r) {
        B[k] = A[j];
        j++;
        k++;
    }
    for (i = l; i <= r; i++) {
        A[i] = B[i];
    }
}
void mergesort(int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergesort(l, m);
    mergesort(m + 1, r);
    merge(l, m, r);
}
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    mergesort(0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}