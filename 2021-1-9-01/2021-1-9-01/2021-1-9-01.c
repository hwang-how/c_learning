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
	struct PEOPLE a = { "����", 180.5, 20 };
	printf("������%s\n", a.name);
	printf("��ߣ�%lf\n", a.high);
	printf("���䣺%d\n", a.age);
	a.age = 30;
	strcpy(a.name, "����");
	//a.name[20] = "����";��������Ҳ��
    printf("ʮ�������䣺%d\n", a.age);
	printf("�޸ĺ�����֣�%s\n", a.name);
	struct PEOPLE*p = &a;
	printf("�µ����֣�%s\n", p->name);
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





//�Ƚϴ�С  ����ʵ��
int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

// ��ʵ��
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









//���������Ľϴ�ֵ
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
	printf("���ֵ�ǣ�%d\n", c);
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







//λ������ & | ^
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







int main()     // ��λ����
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







int add(int a , int b )    //�Զ��庯��
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
	printf("�������\n");
	while (line < 20000)
	{
		printf("��һ�д���:%d\n",line);
		line++;
	}
	if (line = 20000)
		printf("��һ�ݺ�offer\n");
	else
		printf("������\n");
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
