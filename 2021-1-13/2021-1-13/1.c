# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<math.h>




99乘法表
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}


分数求和
法1
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += (1.0) / i*flag;
		flag = -flag;
	}
	printf("sum=%lf\n", sum);
	return 0;
}




法2错误
int main()
{
	int i = 0;
	double sum = 0.0;       //整形是错的
	for (i = 1; i <= 100; i++)
	{
		if (i % 2)
			sum = sum + (1.0 / i);
		else
			sum = sum - (1.0 / i);
	}
	printf("sum=%d\n", sum);
	return 0;
}

1-100   九出现的次数
int main()
{
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 )
			count++;
		if (i/10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}

打印1-100之间的素数
int main()
{
	int i = 1;
	int j = 100;
	int count = 0;
	for (j = 100; j <= 200; j++)
	{
		for (i = 2; i <=sqrt(j); i++)
		{
			if (j%i == 0 )
		         break;
			else if (i>sqrt(j))
			{
				printf("%d ", j);
				count++;
				break;
			}

		}
	}
	printf("\ncount=%d", count);
	return 0;

}
  

计算最大公约数
法1 辗转相除法
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	while (m%n)      //等于0为假跳出循环
	{
		int r = m%n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}


法2
int main()
{
	int i = 1;
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	while (i <= a&&i <= b)
	{
		if (a%i == 0 && b%i == 0)
			i++;
		else
		{
			printf("%d\n", i-1);
			break;
		}
	}
	return 0;
}


int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}