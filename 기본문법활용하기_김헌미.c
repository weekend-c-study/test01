#include<stdio.h>
int main()
{
	int n;
	puts("������ �Է��ϼ��� ! (0 ~ 100)");
	scanf_s("%d", &n);
	switch (n / 10)//10����� �Ǵ��ϱ����� 10���� ������.
	{
	case 10://100
	case 9://90~99
		puts("A����");
		break;
	case 8://80~99
		puts("B����");
		break;
	case 7://70~79
		puts("C����");
		break;
	case 6://60~69
		puts("D����");
		break;
	default://case�̿� ������
		puts("F����");
	}
	return 0;
}