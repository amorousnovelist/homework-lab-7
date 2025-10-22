#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	system("chcp 1251");
	int n;
	scanf("%d", &n);
	switch (n) {
	case 1: printf("%d = I\n", n);
		break;
	case 2: printf("%d = II\n", n);
		break;
	case 3: printf("%d = III\n", n);
		break;
	case 4: printf("%d = IV\n", n);
		break;
	case 5: printf("%d = V\n", n);
		break;
	case 6: printf("%d = VI\n", n);
		break;
	case 7: printf("%d = VII\n", n);
		break;
	case 8: printf("%d = VIII\n", n);
		break;
	case 9: printf("%d = IX\n", n);
		break;
	case 10: printf("%d = X\n", n);
		break;
	case 11: printf("%d = XI\n", n);
		break;
	case 12: printf("%d = XII\n", n);
		break;
	default: printf("Значение %d не соответствует диапазону от 1 до 12\n", n);
	}
}