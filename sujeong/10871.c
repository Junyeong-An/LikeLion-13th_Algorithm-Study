#include <stdio.h>

int main(void) {
	int N;
	int array[10000];
	int X;

	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < N; i++) {

		int num;

		// X���� ������ ���
		if (array[i] < X) {
			printf("%d ", array[i]);
		}
	}

	return 0;
}