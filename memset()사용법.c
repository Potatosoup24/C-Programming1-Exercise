//memset()����
#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer[50];

	memset(buffer, 0, 50);//buffer�� ó�� 50����Ʈ�� 0���� �ʱ�ȭ
	//buffer==&buffer[0]

	printf("Buffer after memset: ");
	for (int i = 0; i < 50; i++) {
		printf("%c", buffer[i]);
	}

	return 0;
}


//��� ���
//Buffer after memset: 00000000000000000000000000000000000000000000000000

