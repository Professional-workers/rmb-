//如何用1角，2角和五角的硬币去凑出十元以下的硬币
#include<stdio.h>
int main()
{
	int one, tow, five;

	int x=10 ;
	//scanf_s("%d", &x);   //用户输入要凑出的硬币值

	int judgment = 0;
	for (one = 1; one < x * 10; one++)
	{
		for (tow = 1; tow < x* 10/2 ; tow++)
		{
			for (five = 1; five < x * 10/5 ; five++)
			{
				if (one + tow * 2 + five * 5 == x * 10)
				{
					printf("可以用%d个1角和%d个2角加上%d个五角得到%d元\n", one, tow, five, x);
					judgment = 1;
					break;
				}
			}if (judgment == 1) break;
		} if (judgment == 1) break;
	}
	return 0;
}    