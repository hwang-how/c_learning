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
		printf("���������룺 \n");
		scanf("%d", &sr);
		if (sr == mima)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
		i++;
	}
	if (i == 3)
		printf("����������Σ������˳�����\n");
	return 0;
}



//�ַ������м���
//int main()
//{
//	char arr1[] = { "nishizhuma!!!" };
//	char arr2[] = { "#############" };
//	int sz = strlen(arr1);
///*	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);  */  //����������һ��\0!!!
//	int left = 0;	
//	int right = sz - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr2);
//		Sleep(1000);              //��Ϣ1���ٴ�ӡ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//�۰����
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int i = 0;
//	int low = 0;
//	int high = 0;
//	int mid = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);     //�������鳤��
//	scanf("%d", &k);
//	for (low = 0, high = sz-1; low <=high;)
//	{
//		mid = (low + high) / 2;
//		if (k == arr[mid])
//		{
//			printf("�ҵ��ˣ��±���:%d ", mid);
//			break;
//		}
//		else if (k < arr[mid])//ȥ�����
//			high = mid - 1;
//		else
//			low = mid + 1;
//	}
//	if (low>high)
//	printf("�Ҳ���\n");
//	return 0;
//}

//����1-10�Ľ׳�֮��
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

//�򻯰�
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


//����n�Ľ׳�
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
//		for (; j < 10; j++)       // ����ʡ�Գ�����    ֻ���ʮ�����
//		{
//			static int m = 0;
//			m++;
//			printf("%d ", m);
//		}
//	}
//	return 0;
//}













// while ��� getchar ����
//int main()
//{
//	int password[20] = { 0 };
//	int ch = 0; 
//	printf("����������:\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n') // ��ѭ���еĽ������������Ŀո�����ǻس�
//                                                     //  ������һ�ε�getchar����ֱ�ӽ����ϴ���������
//													 // ʱ�Ŀո���߻س���
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)\n");
//	int ret = 0;
//	ret = getchar();
//	if (ret = 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
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













//��ӡ1-10
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//
//}