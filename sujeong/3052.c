#include <stdio.h>

int main(void) {

	int num[10];
	int result[42] = { 0 };
	int count = 0;

	// 10���� ���� �Է�
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
	}

	// �������� �ش��ϴ� �迭�� +1
	for (int i = 0; i < 10; i++) {

		result[num[i] % 42]++;
	}

	// 1 �̻��� �迭�� ī��Ʈ �� ���
	for (int i = 0; i < 42; i++) {
		if (result[i] >= 1) count++;
	} printf("%d", count);
}