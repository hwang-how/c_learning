# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
//# include <windows.h>




//�ػ�����
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���һ����֮�ڹػ�\n");
		printf("����������ȡ���ػ�>:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}

	}
	return 0;

}




//int main()
//{
//	char arr[20] = {0};
//	system("shutdown - s - t 120");
//	printf("��ע����ĵ��Խ���һ����֮�ڹػ�\n");
//	while (1)
//	{
//		printf("������������ȡ���ػ�>:");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}











////������Ϸ�˵�
//void menu()
//{
//	printf("****************************\n");
//	printf("******1.play  0.exit********\n");
//	printf("****************************\n");
//}
////  game ����
//void game()
//{
//	int ran = 0;
//	int j = 0;
//	ran = rand()%100+1;
//	while (1)
//	{
//	printf("�������:> "); 
//	scanf("%d", &j);
//	if (j < ran)
//		printf("��С��!\n");
//	else if (j < ran)
//		printf("\n�´���!\n");  
//	else
//	{
//	    printf("\n��ϲ�������!\n");
//		break;
//	}
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//	    printf("��ѡ��>:");
//	    scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} 
//	while (i);
//	return 0;
//}
//
