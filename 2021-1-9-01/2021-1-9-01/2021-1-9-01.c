# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
struct PEOPLE
{
	char name[20];
	double high;
	int age;
};

int main()
{
	struct PEOPLE a = { "张三", 180.5, 20 };
	printf("姓名：%s\n", a.name);
	printf("身高：%lf\n", a.high);
	printf("年龄：%d\n", a.age);
	a.age = 30;
	strcpy(a.name, "李四");
	//a.name[20] = "李四";好像这样也行
    printf("十年后的年龄：%d\n", a.age);
	printf("修改后的名字：%s\n", a.name);
	struct PEOPLE*p = &a;
	printf("新的名字：%s\n", p->name);
	return 0;

}









int main()
{
	char a = 'd';
	char*p = &a;
	*p = 'x';
	printf("%p\n", &a);
	printf("%p\n", &p);
	printf("%c\n", *p);
	printf("%d\n", sizeof(p));
}





//比较大小  函数实现
int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

// 宏实现
#define MAX(X,Y) (X<Y?X:Y)

int main()
{
	int a = 10;
	int b = 20;
	int max1 = Max(a, b);
	int max2 = MAX(a, b);
	printf("%d\n%d\n", max1, max2);
	return 0;

}










extern int Add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum=%d\n", sum);
	return 0;
}





int main()
{
	extern quanju;
	printf("%d\n", quanju);
	return 0;

}








void test()
{
	static int a = 1;
	a++;
	printf("%d\n", a);

}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}











int main()
{
	int a = 50;
	int b = 30;
	int c = (a > b ? a : b);
	printf("%d\n", c);
	return 0;


}









//求两个数的较大值
int max(int x, int y)
{
	if (x >= y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 30;
	int c = max(a, b);
	printf("最大值是：%d\n", c);
	return 0;

}








int main()
{
	int arr[10] = { 0 };
	int num = 0;
	num = sizeof(arr) / sizeof(arr[0]);
	printf("%d   %d  ", sizeof(arr), num);
	return 0;

}







//位操作符 & | ^
int main()
{
	int a = 10;
	int b = 13;
	int c = a&b;
	int d = a | b;
	int e = a^b;
	printf("%d %d %d %d %d", a, b, c, d, e);
	return 0;
}







int main()     // 移位操作
{
	int a = 1;
	int b = a << 4;
	printf("%d\n", b);
	return 0;
	
}





int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 0;
	while (n < 10)
	{
	printf("%d ", arr[n]);
	n++;

	}
	return 0;


}







int add(int a , int b )    //自定义函数
{
	int z = a + b;
	return z;

}
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	sum1 = add(10, 20);
	sum2 = add(50, 40);
	printf("%d\n%d\n", sum1, sum2);
  
	return 0;

}

int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
		printf("巧一行代码:%d\n",line);
		line++;
	}
	if (line = 20000)
		printf("拿一份好offer\n");
	else
		printf("卖红薯\n");
	return 0;

}



int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};
	printf("%d\n", strlen(arr1));
	printf("%c\n",'\1' );
	printf("%d\n", strlen(arr2));
		return 0;

}
