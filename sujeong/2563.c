#include <stdio.h>

int main(void) {

	int num, count = 0;
	int x, y;

	// ����, ���� ũ�� 100�� 2���� �迭 ����
	int square[100][100] = { 0 };

	scanf_s("%d", &num); // ������ ���� �Է�

	for (int i = 0; i < num; i++) {
		scanf_s("%d %d", &x, &y);

		// �������� ũ�⿡ �ش��ϴ� square �迭�� +1
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				square[i][j]++;
			}
		}
	}

	// 1 �̻��� �迭�� ī��Ʈ �� ���
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (square[i][j] >= 1) count++;
		}
	}
	printf("%d", count);
}