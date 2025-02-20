//memcpy()����
#include <stdio.h>
#include <string.h>

int main(void)
{
	char source[] = "Hello, World";
	char destination1[20];
	char destination2[20];

	//source ���ڿ��� ���̸�ŭ ����
	memcpy(destination1, source, strlen(source) + 1);//+1�� NULL���� ����. ���������� ���

	memcpy(destination2, source, strlen(source));//NULL ������. ��� ��� �̻��ϰ� ����
	//�ڵ� ����
	// void *memcpy(void *dest, const void *src, size_t n);
	//�Ű�����
//dest: �����͸� ������ ��� �޸� ����� �������Դϴ�.
//src : ������ �ҽ� �޸� ����� �������Դϴ�.
//n : ������ ����Ʈ ���� ��Ÿ���� size_t Ÿ���� ���Դϴ�.
//��ȯ��
//dest : ��� �޸� ����� �����͸� ��ȯ�մϴ�.
//���� ����
//memcpy �Լ��� �ҽ� �޸� ���(src)�� ������
//  ������ ����Ʈ ��(n��ŭ) ��ŭ ��� �޸� ���(dest)���� �����մϴ�.
// �ҽ��� ��� �޸� ����� ��ġ�� �ʴ� ��쿡�� ����� �����ϸ�, 
// ��ġ�� ��쿡�� ����ġ ���� ����� �߻��� �� �ֽ��ϴ�.
// ��ġ�� ������ ���� ����� memmove �Լ��� ����ؾ� �մϴ�.

//��� �ÿ� �ι��ڱ��� ������ �� �ֵ��� �Ű��� �Ѵ�.
	printf("source : %s\n", source);
	printf("destination1 : %s\n", destination1);
	printf("destination2 : %s\n", destination2);//�̻��� ��� ���

	return 0;
}

/*
source : Hello, World
destination1 : Hello, World
destination2 : Hello, World������������������������������ 5
*/
//������ �� ���� ��µ�


