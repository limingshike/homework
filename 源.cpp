#include<stdio.h>
void main()
{
	int  h, money;
	float I;
	printf("请输入利润（万元）");
	scanf("%d", &money);
	h = money / 100000;
	switch (h)
	{
	case 0:
		I = money * 0.1;
		printf("%.2f", I);
		break;
	case 1:
		I = 100000 * 0.1 + (money - 100000) * 0.075;
		printf("%.2f", I);
		break;
	case 2:
	case 3:
		I = 100000 * 0.1 + (money - 100000) * 0.075 + (money - 200000) * 0.05;
		printf("%.2f", I);
		break;
	case 4:
	case 5:
		I = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (money - 400000) * 0.03;
		printf("%.2f", I);
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		I = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (money - 600000) * 0.015;
		printf("%.2f", I);
		break;
	case 10:
		I = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (money - 1000000) * 0.01;
		printf("%.2f", I);
		break;
	}
}

/*void main()
{
	int a, b;
	scanf("%d", &a);
	b = a / 10;
	switch (b)
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("E");
		break;
	}
}*/