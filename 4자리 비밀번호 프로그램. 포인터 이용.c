#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(a, b);

int main(void)
{
	int arr1[4];
	printf("��й�ȣ 4�ڸ��� ���Ͻÿ� (num1-num2-num3-num4 ��������):");
	scanf("%d-%d-%d-%d", arr1, arr1 + 1, arr1 + 2, arr1 + 3);
	int arr2[4];
	printf("��й�ȣ�� �Է��Ͽ� �α����Ͻÿ� (num1-num2-num3-num4 ��������): ");
	scanf("%d-%d-%d-%d", arr2, arr2 + 1, arr2 + 2, arr2 + 3);

	int index = 0;//index�� 4�� �� ��й�ȣ ��ġ
	for (int i = 0; i <= 3; i++)
	{
		if (func(*(arr1 + i), *(arr2 + i)) == 1)//����ġ
		{
			printf("Ʋ��");
			break;
		}
		else//��ȣ �ϳ��� ��ġ
		{
			index++;
		}
	}
	if (index == 4) {
		printf("����!! ��й�ȣ ��ġ");
	}
}

int func(a, b) {
	if (a == b) {
		return 0;//��ġ
	}
	else {
		return 1;//����ġ
	}
}

