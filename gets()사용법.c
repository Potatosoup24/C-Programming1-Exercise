// gets()����
#include <stdio.h>

int main(void)
{
	char str[50];
	int i;

	printf("���ڿ� �Է� : ");
	gets(str);//���ڿ� �Է¹ޱ�
	//gets�� Ű����κ��� "�� ��"�� �Է¹޴� ǥ�� ����� �Լ�
	//���ڿ� ���� �ԷµǴ� ����(\n)�� NULL(\0)���� �ٲ� �о����
	//������ ���Ե� ���ڿ� �Է� ����
	//gets()�� ���� ��ġ�� �� �� �����Ƿ� ��������� ��� ������ �ִ�.(�޸� ħ�� ����)
	printf("%s\n", str);//�׳� ����ϱ�

	for (i = 0; str[i] != '\0'; i++) {//NULL(\0)���ڰ� ���� �� ����. ���ڿ� �� ���� ���
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}


/*���ڿ� �Է� : hello world
hello world
hello world
*/