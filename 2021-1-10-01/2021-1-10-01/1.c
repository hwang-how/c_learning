# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main()//���1-100����
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
	}


	return 0;

}







int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("����������\n");
	else
		printf("������ż��\n");
	return 0;
}











//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a==1)
//	    if (b == 2)
//		   printf("hehe\n");
//	    else
//		   printf("haha\n");
//  
//
//	return 0;
//


//}