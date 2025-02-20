//memset(),����ü_����
#include <stdio.h>
#include <string.h>

//�ƹ� ����ü �ϳ� ����.
struct Data {
	int a;
	float b;
	char c[10];
};

int main(void)
{
	struct Data my_Data; //����ü ���� ����
	printf("����ü ������ �����ϴ� ����Ʈ �� : %zu\n", sizeof(my_Data));

	//����ü����(my_Data)�� ��� ������Ҹ� 0���� �ʱ�ȭ
	memset(&my_Data, 0, sizeof(my_Data));//&my_Data���۷����� sizeof(my_Data)����Ʈ ��ŭ 0���� �ʱ�ȭ.

	printf("Data after memset : \n");
	printf("a :%d\n", my_Data.a);
	printf("b :%f\n", my_Data.b);
	printf("c :%s\n", my_Data.c);




	return 0;
}


//��� ���
//����ü ������ �����ϴ� ����Ʈ �� : 20
//Data after memset :
//a:0
//b : 0.000000
//c :

//c���� �ƹ��͵� �ȳ����� ����->�ι����� �ƽ�Ű�ڵ� ��ȣ�� 0�̶�. %s�� 0�� ������ \0���� �ν�->���ڿ��� ������ �ν�

