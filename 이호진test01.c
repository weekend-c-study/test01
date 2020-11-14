#include <stdio.h>
int main()
{
	int n;
	puts("점수(0~100 정수)입력");
	scanf_s("%d", &n);
	int num = n / 10;
	printf("당신의 학점은 "); 
	switch (num)
	{
	case 10:
		printf("A입니다");
		break;
	case 9:
		printf("A입니다");
		break;
	case 8:
		printf("B입니다");
		break;
	case 7:
		printf("C입니다");
		break;
	case 6:
		printf("D입니다");
		break;
	default:
		printf("F입니다");
	}
	


	return 0;
}