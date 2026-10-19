#include <iostream>
using namespace std;
int main(){
	int i, j, d, n, A[100];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;
	for(i=0; i<n; i++){
		cin >> A[i];
	}
	for(i=0; i<n-1; i++){
		for(j=n-1; j>=i+1; j--){
			if (A[j] < A[j-1]){
				d = A[j];
				A[j] = A[j-1];
				A[j-1] = d;
			}
		}
		for(j=0; j<n; j++){
			cout << A[j] << " ";
		}
		cout << endl;
	}
	return 0;
}
