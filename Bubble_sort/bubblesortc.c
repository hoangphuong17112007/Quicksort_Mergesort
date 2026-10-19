#include <stdio.h>
int main(){
	int A[100], i, j, n, d;
	printf("Nhap vao so phan tu n: ");
	scanf("%d", &n);
	printf("\n");
	for (i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	for(i=0; i<n-1; i++){
		for(j= n-1; j>= i+1; j--){
			if (A[j] < A[j-1]) {
				d = A[j];
				A[j] = A[j-1];
				A[j-1] = d;
			}
		}
	for(j=0; j<n; j++){
		printf("%d ", A[j]);
	}
	printf("\n");
	}
	return 0;
}