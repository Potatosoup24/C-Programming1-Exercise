#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������ char������ ������ char�� Ư�� ���ڿ��� ������ �װ� ������ ����ϴ� ���α׷�
int main(void) {
	char str[256];
	char ch;
	printf("�߰��� ������ ���� ���� ���ڸ� �Է��Ͻÿ�(�� ����): ");
	scanf("%c", &ch);
	printf("���ڿ��� ������ �Է��Ͻÿ�(�ִ� 255����,�������) : ");
	scanf("%s", &str[0], sizeof(str));
	for (int i = 0; i < 199; i++) {
		if (str[i] == ch) {
			printf("%c\n", str[i]);
			break;
		}
		else {
			printf("%c\n", str[i]);
		}
	}
}
/*
�߰��� ������ ���� ���� ���ڸ� �Է��Ͻÿ�(�� ����): n
���ڿ��� ������ �Է��Ͻÿ�(�ִ� 255����,�������) : confused
c
o
n
*/