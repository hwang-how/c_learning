# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
//# include <windows.h>




//关机程序
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑将在一分钟之内关机\n");
		printf("输入我是猪取消关机>:");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
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
//	printf("请注意你的电脑将在一分钟之内关机\n");
//	while (1)
//	{
//		printf("请输入我是猪取消关机>:");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}











////建立游戏菜单
//void menu()
//{
//	printf("****************************\n");
//	printf("******1.play  0.exit********\n");
//	printf("****************************\n");
//}
////  game 函数
//void game()
//{
//	int ran = 0;
//	int j = 0;
//	ran = rand()%100+1;
//	while (1)
//	{
//	printf("请猜数字:> "); 
//	scanf("%d", &j);
//	if (j < ran)
//		printf("猜小了!\n");
//	else if (j < ran)
//		printf("\n猜大了!\n");  
//	else
//	{
//	    printf("\n恭喜你猜中了!\n");
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
//	    printf("请选择>:");
//	    scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} 
//	while (i);
//	return 0;
//}
//
