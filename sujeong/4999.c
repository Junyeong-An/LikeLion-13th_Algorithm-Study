#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[1000], str2[1000];

	scanf_s("%s", str1, sizeof(str1));
	scanf_s("%s", str2, sizeof(str2));

	// strlen() �Լ��� ���ڿ��� ���̸� ���� ��, ���� �����ڸ� ����� ���ǽ� �ۼ�
	strlen(str1) >= strlen(str2) ? printf("go") : printf("no");		

	return 0;
	 
}