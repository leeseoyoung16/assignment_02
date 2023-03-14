// 20!�� ���ϴ� iterator(�ݺ�)�Լ��� recusion(��ȯ)�Լ��� ������ ���α׷� �ۼ�.
#include<stdio.h>
#include<stdlib.h>


double factorial_iter(int n) {
	int i;
	double sum = 1;
	for (i = 1; i <= n ; i++) {
		sum = sum * i;
	}
	return sum;
}
double factorial_rec(int n) {
	if (n >= 0 && n <= 1) return 1;
	else return(n * factorial_rec(n - 1));
}

int main() {
	double result_iter = factorial_iter(20);
	double result_rec = factorial_rec(20);

	printf("Iterative factorial result: %f\n", result_iter);
	printf("Recursive factorial result: %f\n", result_rec);

	return 0;
}