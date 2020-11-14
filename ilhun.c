#include<stdio.h>
int main()
{
	int num;
	printf("점수를 입력하세요!(0~100)");
	scanf_s("%d", &num);
	char grade = 0;
	

	switch (num / 10)//정수/정수--정수만
	{
	case 10:
	case 9: //num: 90~99 입력된수는 9로
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

	printf("%c학점\n", grade);

	return 0;
}