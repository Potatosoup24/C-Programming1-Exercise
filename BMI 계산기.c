#include <stdio.h>

int main(void)
{
	double height;
	printf("Ű�� �Է��Ͻÿ�(m������) : ");
	scanf_s("%lf", &height);
	double weigth;
	printf("�����Ը� �Է��Ͻÿ�(kg������) : ");
	scanf_s("%lf", &weigth);

	double BMI = 0;
	BMI += weigth / ((height) * (height));
	printf("����� BMI������ %lf", BMI);
}