#include <stdio.h>

int main() {

	char str[1000];	// �ܾ �����ϱ� ���� ���ڿ�
	int num1 = 0;

	scanf_s("%s", str, sizeof(str));
	scanf_s("%d", &num1);

	printf("%c", str[num1 - 1]);	// �迭�� ������ 0�̴� 1 ���ֱ�

	return 0;

}

