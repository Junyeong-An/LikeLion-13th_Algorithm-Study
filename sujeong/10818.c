#include <stdio.h>

int main(void) {

	int num;
	int max = 0, min = 0;
	int array[1000000];

	scanf_s("%d", &num);

	// �迭�� ���� N�� �Է�
	for (int i = 0; i < num; i++) {
		scanf_s("%d", &array[i]);
	}

	max = min = array[0];

	// �ִ�, �ּڰ� ���ϱ�
	for (int i = 0; i < num; i++) {

		if (array[i] > max) {
			max = array[i];
		}

		if (array[i] < min) {
			min = array[i];
		}

	}

	printf("%d %d", min, max);

	return 0;
}