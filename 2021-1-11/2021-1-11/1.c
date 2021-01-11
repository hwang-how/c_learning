# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <windows.h>

int main()
{
	int i = 0;
	int mima = 123;
	int sr = 0;
	while (i < 3)
	{
		printf("请输入密码： \n");
		scanf("%d", &sr);
		if (sr == mima)
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误！\n");
		i++;
	}
	if (i == 3)
		printf("密码错误三次，即将退出程序\n");
	return 0;
}



//字符串向中间汇聚
//int main()
//{
//	char arr1[] = { "nishizhuma!!!" };
//	char arr2[] = { "#############" };
//	int sz = strlen(arr1);
///*	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);  */  //这种算会多算一个\0!!!
//	int left = 0;	
//	int right = sz - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr2);
//		Sleep(1000);              //休息1秒再打印
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//折半查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int i = 0;
//	int low = 0;
//	int high = 0;
//	int mid = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);     //计算数组长度
//	scanf("%d", &k);
//	for (low = 0, high = sz-1; low <=high;)
//	{
//		mid = (low + high) / 2;
//		if (k == arr[mid])
//		{
//			printf("找到了，下标是:%d ", mid);
//			break;
//		}
//		else if (k < arr[mid])//去左边找
//			high = mid - 1;
//		else
//			low = mid + 1;
//	}
//	if (low>high)
//	printf("找不到\n");
//	return 0;
//}

//计算1-10的阶乘之和
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ans = 0;
//	int ret = 1;
//	for (i = 1; i <=3; i++)
//	{
//		for (ret = 1, j = 1; j <= i; j++)
//		{
//			ret =  ret * j;
//		}
//		ans = ans+ ret;
//	}
//	printf("%d\n", ans);
//	return 0;
//}

//简化版
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ans = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret *i;
//		ans = ans + ret;
//	}
//	printf("%d\n", ans);
//	return 0;
//}


//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int answ = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		answ = answ*(i+1);
//	}
//	printf("%d\n", answ);
//	return 0;
//}





//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 0;
//	m = n;
//	while (n > 1)
//	{
//		m = m*(n-1);
//		n--;
//	}
//	printf("%d\n", m);
//	return 0;
//}
//













//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)       // 这里省略出问题    只会出十个结果
//		{
//			static int m = 0;
//			m++;
//			printf("%d ", m);
//		}
//	}
//	return 0;
//}













// while 解决 getchar 问题
//int main()
//{
//	int password[20] = { 0 };
//	int ch = 0; 
//	printf("请输入密码:\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n') // 此循环中的接收输入密码后的空格或者是回车
//                                                     //  否则下一次的getchar将会直接接收上次输入密码
//													 // 时的空格或者回车；
//	{
//		;
//	}
//	printf("请确认密码(Y/N)\n");
//	int ret = 0;
//	ret = getchar();
//	if (ret = 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}











//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}













//打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

















//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//
//}






//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//
//}