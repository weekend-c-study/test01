#include <stdio.h>
int main()
{
	int n;
	puts("����(0~100 ����)�Է�");
	scanf_s("%d", &n);
	int num = n / 10;
	printf("����� ������ "); 
	switch (num)
	{
	case 10:
		printf("A�Դϴ�");
		break;
	case 9:
		printf("A�Դϴ�");
		break;
	case 8:
		printf("B�Դϴ�");
		break;
	case 7:
		printf("C�Դϴ�");
		break;
	case 6:
		printf("D�Դϴ�");
		break;
	default:
		printf("F�Դϴ�");
	}
	


	return 0;
}