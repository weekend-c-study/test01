#include<stdio.h>
int main()
{
	int num;
	printf("������ �Է��ϼ���!(0~100)");
	scanf_s("%d", &num);
	char grade = 0;
	

	switch (num / 10)//����/����--������
	{
	case 10:
	case 9: //num: 90~99 �Էµȼ��� 9��
		grade = 'A'; break;
	case 8: 
		grade = 'B'; break;
	case 7: 
		grade = 'C'; break;
	case 6: 
		grade = 'D'; break;
	default: 
		grade = 'F';
	}

	printf("%c����\n", grade);

	return 0;
}