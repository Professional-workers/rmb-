//�����1�ǣ�2�Ǻ���ǵ�Ӳ��ȥ�ճ�ʮԪ���µ�Ӳ��
#include<stdio.h>
int main()
{
	int one, tow, five;

	int x=10 ;
	//scanf_s("%d", &x);   //�û�����Ҫ�ճ���Ӳ��ֵ

	int judgment = 0;
	for (one = 1; one < x * 10; one++)
	{
		for (tow = 1; tow < x* 10/2 ; tow++)
		{
			for (five = 1; five < x * 10/5 ; five++)
			{
				if (one + tow * 2 + five * 5 == x * 10)
				{
					printf("������%d��1�Ǻ�%d��2�Ǽ���%d����ǵõ�%dԪ\n", one, tow, five, x);
					judgment = 1;
					break;
				}
			}if (judgment == 1) break;
		} if (judgment == 1) break;
	}
	return 0;
}    